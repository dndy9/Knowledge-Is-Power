// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileUploaderPlugin/Public/FileUploader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileUploader() {}
// Cross Module References
	FILEUPLOADERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadProgress__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FileUploaderPlugin();
	FILEUPLOADERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature();
	FILEUPLOADERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FServerResponse();
	FILEUPLOADERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature();
	FILEUPLOADERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FServerQuestion();
	FILEUPLOADERPLUGIN_API UClass* Z_Construct_UClass_UFileUploader_NoRegister();
	FILEUPLOADERPLUGIN_API UClass* Z_Construct_UClass_UFileUploader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadProgress__DelegateSignature_Statics
	{
		struct _Script_FileUploaderPlugin_eventOnFileUploadProgress_Parms
		{
			FString ProgressString;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProgressString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadProgress__DelegateSignature_Statics::NewProp_ProgressString = { "ProgressString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FileUploaderPlugin_eventOnFileUploadProgress_Parms, ProgressString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadProgress__DelegateSignature_Statics::NewProp_ProgressString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for file upload progress updates */" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
		{ "ToolTip", "Delegate for file upload progress updates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FileUploaderPlugin, nullptr, "OnFileUploadProgress__DelegateSignature", nullptr, nullptr, sizeof(_Script_FileUploaderPlugin_eventOnFileUploadProgress_Parms), Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadProgress__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadProgress__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics
	{
		struct _Script_FileUploaderPlugin_eventOnParsedServerResponse_Parms
		{
			bool bWasSuccessful;
			FServerResponse ParsedResponse;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParsedResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParsedResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_FileUploaderPlugin_eventOnParsedServerResponse_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_FileUploaderPlugin_eventOnParsedServerResponse_Parms), &Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::NewProp_ParsedResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::NewProp_ParsedResponse = { "ParsedResponse", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FileUploaderPlugin_eventOnParsedServerResponse_Parms, ParsedResponse), Z_Construct_UScriptStruct_FServerResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::NewProp_ParsedResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::NewProp_ParsedResponse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::NewProp_ParsedResponse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for parsed server response */" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
		{ "ToolTip", "Delegate for parsed server response" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FileUploaderPlugin, nullptr, "OnParsedServerResponse__DelegateSignature", nullptr, nullptr, sizeof(_Script_FileUploaderPlugin_eventOnParsedServerResponse_Parms), Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics
	{
		struct _Script_FileUploaderPlugin_eventOnFileUploadResponse_Parms
		{
			bool bWasSuccessful;
			FString ServerResponse;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_FileUploaderPlugin_eventOnFileUploadResponse_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_FileUploaderPlugin_eventOnFileUploadResponse_Parms), &Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::NewProp_ServerResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::NewProp_ServerResponse = { "ServerResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FileUploaderPlugin_eventOnFileUploadResponse_Parms, ServerResponse), METADATA_PARAMS(Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::NewProp_ServerResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::NewProp_ServerResponse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::NewProp_ServerResponse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to return the server response */" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
		{ "ToolTip", "Delegate to return the server response" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FileUploaderPlugin, nullptr, "OnFileUploadResponse__DelegateSignature", nullptr, nullptr, sizeof(_Script_FileUploaderPlugin_eventOnFileUploadResponse_Parms), Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FServerResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FILEUPLOADERPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FServerResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerResponse, Z_Construct_UPackage__Script_FileUploaderPlugin(), TEXT("ServerResponse"), sizeof(FServerResponse), Get_Z_Construct_UScriptStruct_FServerResponse_Hash());
	}
	return Singleton;
}
template<> FILEUPLOADERPLUGIN_API UScriptStruct* StaticStruct<FServerResponse>()
{
	return FServerResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerResponse(FServerResponse::StaticStruct, TEXT("/Script/FileUploaderPlugin"), TEXT("ServerResponse"), false, nullptr, nullptr);
static struct FScriptStruct_FileUploaderPlugin_StaticRegisterNativesFServerResponse
{
	FScriptStruct_FileUploaderPlugin_StaticRegisterNativesFServerResponse()
	{
		UScriptStruct::DeferCppStructOps<FServerResponse>(FName(TEXT("ServerResponse")));
	}
} ScriptStruct_FileUploaderPlugin_StaticRegisterNativesFServerResponse;
	struct Z_Construct_UScriptStruct_FServerResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chapter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Chapter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Questions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Questions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Questions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct for the server response */" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
		{ "ToolTip", "Struct for the server response" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "Response" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerResponse, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Chapter_MetaData[] = {
		{ "Category", "Response" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Chapter = { "Chapter", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerResponse, Chapter), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Chapter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Chapter_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Questions_Inner = { "Questions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FServerQuestion, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Questions_MetaData[] = {
		{ "Category", "Response" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Questions = { "Questions", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerResponse, Questions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Questions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Questions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Chapter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Questions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerResponse_Statics::NewProp_Questions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FileUploaderPlugin,
		nullptr,
		&NewStructOps,
		"ServerResponse",
		sizeof(FServerResponse),
		alignof(FServerResponse),
		Z_Construct_UScriptStruct_FServerResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FileUploaderPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerResponse"), sizeof(FServerResponse), Get_Z_Construct_UScriptStruct_FServerResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerResponse_Hash() { return 4021915359U; }
class UScriptStruct* FServerQuestion::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FILEUPLOADERPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FServerQuestion_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerQuestion, Z_Construct_UPackage__Script_FileUploaderPlugin(), TEXT("ServerQuestion"), sizeof(FServerQuestion), Get_Z_Construct_UScriptStruct_FServerQuestion_Hash());
	}
	return Singleton;
}
template<> FILEUPLOADERPLUGIN_API UScriptStruct* StaticStruct<FServerQuestion>()
{
	return FServerQuestion::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerQuestion(FServerQuestion::StaticStruct, TEXT("/Script/FileUploaderPlugin"), TEXT("ServerQuestion"), false, nullptr, nullptr);
static struct FScriptStruct_FileUploaderPlugin_StaticRegisterNativesFServerQuestion
{
	FScriptStruct_FileUploaderPlugin_StaticRegisterNativesFServerQuestion()
	{
		UScriptStruct::DeferCppStructOps<FServerQuestion>(FName(TEXT("ServerQuestion")));
	}
} ScriptStruct_FileUploaderPlugin_StaticRegisterNativesFServerQuestion;
	struct Z_Construct_UScriptStruct_FServerQuestion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Question_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Question;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Answer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Answer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerQuestion_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Nested struct for individual questions in the server response */" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
		{ "ToolTip", "Nested struct for individual questions in the server response" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerQuestion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerQuestion>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Question_MetaData[] = {
		{ "Category", "Response" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Question = { "Question", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerQuestion, Question), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Question_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Question_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Answer_MetaData[] = {
		{ "Category", "Response" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Answer = { "Answer", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerQuestion, Answer), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Answer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Answer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Section_MetaData[] = {
		{ "Category", "Response" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerQuestion, Section), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Section_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerQuestion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Question,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Answer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerQuestion_Statics::NewProp_Section,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerQuestion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FileUploaderPlugin,
		nullptr,
		&NewStructOps,
		"ServerQuestion",
		sizeof(FServerQuestion),
		alignof(FServerQuestion),
		Z_Construct_UScriptStruct_FServerQuestion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerQuestion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerQuestion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerQuestion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerQuestion()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerQuestion_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FileUploaderPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerQuestion"), sizeof(FServerQuestion), Get_Z_Construct_UScriptStruct_FServerQuestion_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerQuestion_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerQuestion_Hash() { return 2070997274U; }
	DEFINE_FUNCTION(UFileUploader::execUploadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_UBOOL_REF(Z_Param_Out_bImmediateResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ImmediateMessage);
		P_GET_PROPERTY(FIntProperty,Z_Param_Chapter);
		P_GET_PROPERTY(FIntProperty,Z_Param_TotalQuestions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UploadFile(Z_Param_URL,Z_Param_FilePath,Z_Param_Out_bImmediateResult,Z_Param_Out_ImmediateMessage,Z_Param_Chapter,Z_Param_TotalQuestions);
		P_NATIVE_END;
	}
	void UFileUploader::StaticRegisterNativesUFileUploader()
	{
		UClass* Class = UFileUploader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UploadFile", &UFileUploader::execUploadFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileUploader_UploadFile_Statics
	{
		struct FileUploader_eventUploadFile_Parms
		{
			FString URL;
			FString FilePath;
			bool bImmediateResult;
			FString ImmediateMessage;
			int32 Chapter;
			int32 TotalQuestions;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_bImmediateResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediateResult;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImmediateMessage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Chapter;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalQuestions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileUploader_eventUploadFile_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileUploader_eventUploadFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_FilePath_MetaData)) };
	void Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_bImmediateResult_SetBit(void* Obj)
	{
		((FileUploader_eventUploadFile_Parms*)Obj)->bImmediateResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_bImmediateResult = { "bImmediateResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileUploader_eventUploadFile_Parms), &Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_bImmediateResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_ImmediateMessage = { "ImmediateMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileUploader_eventUploadFile_Parms, ImmediateMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_Chapter = { "Chapter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileUploader_eventUploadFile_Parms, Chapter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_TotalQuestions = { "TotalQuestions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileUploader_eventUploadFile_Parms, TotalQuestions), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileUploader_UploadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_bImmediateResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_ImmediateMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_Chapter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileUploader_UploadFile_Statics::NewProp_TotalQuestions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileUploader_UploadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "File Upload" },
		{ "Comment", "/** Uploads a file to the specified URL */" },
		{ "CPP_Default_Chapter", "-1" },
		{ "CPP_Default_TotalQuestions", "30" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
		{ "ToolTip", "Uploads a file to the specified URL" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileUploader_UploadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileUploader, nullptr, "UploadFile", nullptr, nullptr, sizeof(FileUploader_eventUploadFile_Parms), Z_Construct_UFunction_UFileUploader_UploadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileUploader_UploadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileUploader_UploadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileUploader_UploadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileUploader_UploadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileUploader_UploadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFileUploader_NoRegister()
	{
		return UFileUploader::StaticClass();
	}
	struct Z_Construct_UClass_UFileUploader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFileUploadResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFileUploadResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnParsedServerResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParsedServerResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFileUploadProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFileUploadProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileUploader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FileUploaderPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileUploader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileUploader_UploadFile, "UploadFile" }, // 3931364051
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileUploader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UFileUploader class to handle file uploads via HTTP.\n */" },
		{ "IncludePath", "FileUploader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
		{ "ToolTip", "UFileUploader class to handle file uploads via HTTP." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileUploader_Statics::NewProp_OnFileUploadResponse_MetaData[] = {
		{ "Category", "File Upload" },
		{ "Comment", "/** Delegate triggered on server response */" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
		{ "ToolTip", "Delegate triggered on server response" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFileUploader_Statics::NewProp_OnFileUploadResponse = { "OnFileUploadResponse", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFileUploader, OnFileUploadResponse), Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFileUploader_Statics::NewProp_OnFileUploadResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileUploader_Statics::NewProp_OnFileUploadResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileUploader_Statics::NewProp_OnParsedServerResponse_MetaData[] = {
		{ "Category", "File Upload" },
		{ "Comment", "/** Delegate triggered on parsed server response */" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
		{ "ToolTip", "Delegate triggered on parsed server response" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFileUploader_Statics::NewProp_OnParsedServerResponse = { "OnParsedServerResponse", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFileUploader, OnParsedServerResponse), Z_Construct_UDelegateFunction_FileUploaderPlugin_OnParsedServerResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFileUploader_Statics::NewProp_OnParsedServerResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileUploader_Statics::NewProp_OnParsedServerResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileUploader_Statics::NewProp_OnFileUploadProgress_MetaData[] = {
		{ "Category", "File Upload" },
		{ "Comment", "/** Delegate triggered to report upload progress */" },
		{ "ModuleRelativePath", "Public/FileUploader.h" },
		{ "ToolTip", "Delegate triggered to report upload progress" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFileUploader_Statics::NewProp_OnFileUploadProgress = { "OnFileUploadProgress", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFileUploader, OnFileUploadProgress), Z_Construct_UDelegateFunction_FileUploaderPlugin_OnFileUploadProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFileUploader_Statics::NewProp_OnFileUploadProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileUploader_Statics::NewProp_OnFileUploadProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFileUploader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileUploader_Statics::NewProp_OnFileUploadResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileUploader_Statics::NewProp_OnParsedServerResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileUploader_Statics::NewProp_OnFileUploadProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileUploader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileUploader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFileUploader_Statics::ClassParams = {
		&UFileUploader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFileUploader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFileUploader_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileUploader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileUploader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileUploader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFileUploader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFileUploader, 2722754876);
	template<> FILEUPLOADERPLUGIN_API UClass* StaticClass<UFileUploader>()
	{
		return UFileUploader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileUploader(Z_Construct_UClass_UFileUploader, &UFileUploader::StaticClass, TEXT("/Script/FileUploaderPlugin"), TEXT("UFileUploader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileUploader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
