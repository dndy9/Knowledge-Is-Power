// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FServerResponse;
#ifdef FILEUPLOADERPLUGIN_FileUploader_generated_h
#error "FileUploader.generated.h already included, missing '#pragma once' in FileUploader.h"
#endif
#define FILEUPLOADERPLUGIN_FileUploader_generated_h

#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerResponse_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FILEUPLOADERPLUGIN_API UScriptStruct* StaticStruct<struct FServerResponse>();

#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerQuestion_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FILEUPLOADERPLUGIN_API UScriptStruct* StaticStruct<struct FServerQuestion>();

#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_46_DELEGATE \
struct _Script_FileUploaderPlugin_eventOnFileUploadProgress_Parms \
{ \
	FString ProgressString; \
}; \
static inline void FOnFileUploadProgress_DelegateWrapper(const FMulticastScriptDelegate& OnFileUploadProgress, const FString& ProgressString) \
{ \
	_Script_FileUploaderPlugin_eventOnFileUploadProgress_Parms Parms; \
	Parms.ProgressString=ProgressString; \
	OnFileUploadProgress.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_43_DELEGATE \
struct _Script_FileUploaderPlugin_eventOnParsedServerResponse_Parms \
{ \
	bool bWasSuccessful; \
	FServerResponse ParsedResponse; \
}; \
static inline void FOnParsedServerResponse_DelegateWrapper(const FMulticastScriptDelegate& OnParsedServerResponse, bool bWasSuccessful, FServerResponse const& ParsedResponse) \
{ \
	_Script_FileUploaderPlugin_eventOnParsedServerResponse_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.ParsedResponse=ParsedResponse; \
	OnParsedServerResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_40_DELEGATE \
struct _Script_FileUploaderPlugin_eventOnFileUploadResponse_Parms \
{ \
	bool bWasSuccessful; \
	FString ServerResponse; \
}; \
static inline void FOnFileUploadResponse_DelegateWrapper(const FMulticastScriptDelegate& OnFileUploadResponse, bool bWasSuccessful, const FString& ServerResponse) \
{ \
	_Script_FileUploaderPlugin_eventOnFileUploadResponse_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.ServerResponse=ServerResponse; \
	OnFileUploadResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_SPARSE_DATA
#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUploadFile);


#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUploadFile);


#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileUploader(); \
	friend struct Z_Construct_UClass_UFileUploader_Statics; \
public: \
	DECLARE_CLASS(UFileUploader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileUploaderPlugin"), NO_API) \
	DECLARE_SERIALIZER(UFileUploader)


#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUFileUploader(); \
	friend struct Z_Construct_UClass_UFileUploader_Statics; \
public: \
	DECLARE_CLASS(UFileUploader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileUploaderPlugin"), NO_API) \
	DECLARE_SERIALIZER(UFileUploader)


#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileUploader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileUploader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileUploader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileUploader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileUploader(UFileUploader&&); \
	NO_API UFileUploader(const UFileUploader&); \
public:


#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileUploader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileUploader(UFileUploader&&); \
	NO_API UFileUploader(const UFileUploader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileUploader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileUploader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileUploader)


#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_PRIVATE_PROPERTY_OFFSET
#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_51_PROLOG
#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_PRIVATE_PROPERTY_OFFSET \
	blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_SPARSE_DATA \
	blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_RPC_WRAPPERS \
	blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_INCLASS \
	blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_PRIVATE_PROPERTY_OFFSET \
	blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_SPARSE_DATA \
	blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_INCLASS_NO_PURE_DECLS \
	blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FILEUPLOADERPLUGIN_API UClass* StaticClass<class UFileUploader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID blankcpp_Plugins_FileUploaderPlugin_Source_FileUploaderPlugin_Public_FileUploader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
