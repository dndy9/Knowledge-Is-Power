#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FileUploader.generated.h"

/** Nested struct for individual questions in the server response */
USTRUCT(BlueprintType)
struct FILEUPLOADERPLUGIN_API FServerQuestion
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Response")
    FString Question;

    UPROPERTY(BlueprintReadOnly, Category = "Response")
    FString Answer;

    UPROPERTY(BlueprintReadOnly, Category = "Response")
    FString Section;
};

/** Struct for the server response */
USTRUCT(BlueprintType)
struct FILEUPLOADERPLUGIN_API FServerResponse
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Response")
    FString Status;

    UPROPERTY(BlueprintReadOnly, Category = "Response")
    int32 Chapter;

    UPROPERTY(BlueprintReadOnly, Category = "Response")
    TArray<FServerQuestion> Questions;
};

/** Delegate to return the server response */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFileUploadResponse, bool, bWasSuccessful, const FString&, ServerResponse);

/** Delegate for parsed server response */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnParsedServerResponse, bool, bWasSuccessful, const FServerResponse&, ParsedResponse);

/** Delegate for file upload progress updates */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFileUploadProgress, FString, ProgressString);

/**
 * UFileUploader class to handle file uploads via HTTP.
 */
UCLASS(Blueprintable, BlueprintType)
class FILEUPLOADERPLUGIN_API UFileUploader : public UObject
{
    GENERATED_BODY()

public:
    /** Uploads a file to the specified URL */
    UFUNCTION(BlueprintCallable, Category = "File Upload")
    void UploadFile(const FString& URL, const FString& FilePath, bool& bImmediateResult, FString& ImmediateMessage, int32 Chapter = -1, int32 TotalQuestions = 30);

    /** Delegate triggered on server response */
    UPROPERTY(BlueprintAssignable, Category = "File Upload")
    FOnFileUploadResponse OnFileUploadResponse;

    /** Delegate triggered on parsed server response */
    UPROPERTY(BlueprintAssignable, Category = "File Upload")
    FOnParsedServerResponse OnParsedServerResponse;

    /** Delegate triggered to report upload progress */
    UPROPERTY(BlueprintAssignable, Category = "File Upload")
    FOnFileUploadProgress OnFileUploadProgress;
};
