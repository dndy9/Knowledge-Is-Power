#include "FileUploader.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"
#include "Json.h"
#include "JsonObjectConverter.h"

void UFileUploader::UploadFile(const FString& URL, const FString& FilePath, bool& bImmediateResult, FString& ImmediateMessage, int32 Chapter, int32 TotalQuestions)
{
    // Ensure the file exists
    if (!FPaths::FileExists(FilePath))
    {
        bImmediateResult = false;
        ImmediateMessage = FString::Printf(TEXT("File not found: %s"), *FilePath);
        UE_LOG(LogTemp, Error, TEXT("%s"), *ImmediateMessage);
        OnFileUploadResponse.Broadcast(false, ImmediateMessage);
        return;
    }

    // Read file content into a byte array
    TArray<uint8> FileContent;
    if (!FFileHelper::LoadFileToArray(FileContent, *FilePath))
    {
        bImmediateResult = false;
        ImmediateMessage = FString::Printf(TEXT("Failed to load file content: %s"), *FilePath);
        UE_LOG(LogTemp, Error, TEXT("%s"), *ImmediateMessage);
        OnFileUploadResponse.Broadcast(false, ImmediateMessage);
        return;
    }

    // Create the HTTP request
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetURL(URL);
    HttpRequest->SetVerb(TEXT("POST"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("multipart/form-data; boundary=----WebKitFormBoundary7MA4YWxkTrZu0gW"));

    // Create multipart body content
    FString Boundary = TEXT("----WebKitFormBoundary7MA4YWxkTrZu0gW");
    FString FormData;

    // Adding file content as a form field (named "file")
    FormData += FString::Printf(TEXT("\r\n--%s\r\n"), *Boundary);
    FormData += FString::Printf(TEXT("Content-Disposition: form-data; name=\"file\"; filename=\"%s\"\r\n"), *FPaths::GetCleanFilename(FilePath));
    FormData += TEXT("Content-Type: application/octet-stream\r\n\r\n");

    // Convert form data string to byte array and add the file content
    TArray<uint8> Data;
    FTCHARToUTF8 Convert(*FormData);
    Data.Append((uint8*)Convert.Get(), Convert.Length());
    Data.Append(FileContent);

    // Add chapter if it's provided (not equal to -1)
    if (Chapter > 0)
    {
        FormData = FString::Printf(TEXT("\r\n--%s\r\n"), *Boundary);
        FormData += FString::Printf(TEXT("Content-Disposition: form-data; name=\"chapter\"\r\n\r\n%d\r\n"), Chapter);
        FTCHARToUTF8 ChapterConvert(*FormData);
        Data.Append((uint8*)ChapterConvert.Get(), ChapterConvert.Length());
    }

    // Add total_questions to request (use default if not provided)
    FormData = FString::Printf(TEXT("\r\n--%s\r\n"), *Boundary);
    FormData += FString::Printf(TEXT("Content-Disposition: form-data; name=\"total_questions\"\r\n\r\n%d\r\n"), TotalQuestions);
    FTCHARToUTF8 TotalQuestionsConvert(*FormData);
    Data.Append((uint8*)TotalQuestionsConvert.Get(), TotalQuestionsConvert.Length());

    // Adding the ending boundary
    FormData = FString::Printf(TEXT("\r\n--%s--\r\n"), *Boundary);
    FTCHARToUTF8 EndConvert(*FormData);
    Data.Append((uint8*)EndConvert.Get(), EndConvert.Length());

    HttpRequest->SetContent(Data);

    // Get the file size to track progress
    int64 FileSize = FileContent.Num();

    // Bind progress callback to update the progress
    HttpRequest->OnRequestProgress().BindLambda([this](FHttpRequestPtr Request, int32 BytesSent, int32 BytesReceived)
        {
            float ProgressPercentage = (BytesSent / static_cast<float>(Request->GetContentLength())) * 100.0f;
            FString ProgressString = FString::Printf(TEXT("%.2f%%"), ProgressPercentage);
            UE_LOG(LogTemp, Log, TEXT("Uploading: %s"), *ProgressString);
            OnFileUploadProgress.Broadcast(ProgressString);
        });

    bImmediateResult = true;
    ImmediateMessage = TEXT("Upload started successfully.");

    // Bind the response handler
    HttpRequest->OnProcessRequestComplete().BindLambda([this](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            if (Response.IsValid())
            {
                FString ResponseContent = Response->GetContentAsString();
                UE_LOG(LogTemp, Log, TEXT("Server Response: %s"), *ResponseContent);

                FServerResponse ParsedResponse;
                TSharedPtr<FJsonObject> JsonObject;
                TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseContent);

                if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
                {
                    ParsedResponse.Status = JsonObject->GetStringField("status");
                    ParsedResponse.Chapter = JsonObject->HasField("chapter") ? JsonObject->GetIntegerField("chapter") : -1;

                    const TArray<TSharedPtr<FJsonValue>>* QuestionsArray;
                    if (JsonObject->TryGetArrayField("questions", QuestionsArray))
                    {
                        for (const auto& QuestionValue : *QuestionsArray)
                        {
                            FServerQuestion Question;
                            const TSharedPtr<FJsonObject>* QuestionObject;

                            if (QuestionValue->TryGetObject(QuestionObject))
                            {
                                Question.Question = (*QuestionObject)->GetStringField("question");
                                Question.Answer = (*QuestionObject)->GetStringField("answer");
                                Question.Section = (*QuestionObject)->GetStringField("section");
                                ParsedResponse.Questions.Add(Question);
                            }
                        }
                    }

                    OnParsedServerResponse.Broadcast(true, ParsedResponse);
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("Failed to parse server response."));
                    OnParsedServerResponse.Broadcast(false, FServerResponse());
                }
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to upload file. No valid response received."));
                OnParsedServerResponse.Broadcast(false, FServerResponse());
            }
        });

    // Execute the HTTP request
    HttpRequest->ProcessRequest();
}
