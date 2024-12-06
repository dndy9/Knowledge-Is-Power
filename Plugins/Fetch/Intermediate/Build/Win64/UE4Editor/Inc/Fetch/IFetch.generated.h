// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USimpleJsonValue;
class UFetchResponse;
#ifdef FETCH_IFetch_generated_h
#error "IFetch.generated.h already included, missing '#pragma once' in IFetch.h"
#endif
#define FETCH_IFetch_generated_h

#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_20_DELEGATE \
struct _Script_Fetch_eventFetchJsonResponseDelegate_Parms \
{ \
	USimpleJsonValue* JsonValue; \
	UFetchResponse* Response; \
}; \
static inline void FFetchJsonResponseDelegate_DelegateWrapper(const FScriptDelegate& FetchJsonResponseDelegate, USimpleJsonValue* JsonValue, UFetchResponse* Response) \
{ \
	_Script_Fetch_eventFetchJsonResponseDelegate_Parms Parms; \
	Parms.JsonValue=JsonValue; \
	Parms.Response=Response; \
	FetchJsonResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_19_DELEGATE \
struct _Script_Fetch_eventFetchTextResponseDelegate_Parms \
{ \
	FString TextContent; \
	UFetchResponse* Response; \
}; \
static inline void FFetchTextResponseDelegate_DelegateWrapper(const FScriptDelegate& FetchTextResponseDelegate, const FString& TextContent, UFetchResponse* Response) \
{ \
	_Script_Fetch_eventFetchTextResponseDelegate_Parms Parms; \
	Parms.TextContent=TextContent; \
	Parms.Response=Response; \
	FetchTextResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_18_DELEGATE \
struct _Script_Fetch_eventFetchErrorDelegate_Parms \
{ \
	FString ErrorMessage; \
}; \
static inline void FFetchErrorDelegate_DelegateWrapper(const FScriptDelegate& FetchErrorDelegate, const FString& ErrorMessage) \
{ \
	_Script_Fetch_eventFetchErrorDelegate_Parms Parms; \
	Parms.ErrorMessage=ErrorMessage; \
	FetchErrorDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_17_DELEGATE \
struct _Script_Fetch_eventFetchResponseDelegate_Parms \
{ \
	int32 StatusCode; \
	FString Content; \
}; \
static inline void FFetchResponseDelegate_DelegateWrapper(const FScriptDelegate& FetchResponseDelegate, int32 StatusCode, const FString& Content) \
{ \
	_Script_Fetch_eventFetchResponseDelegate_Parms Parms; \
	Parms.StatusCode=StatusCode; \
	Parms.Content=Content; \
	FetchResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_SPARSE_DATA
#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_RPC_WRAPPERS
#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIFetch(); \
	friend struct Z_Construct_UClass_UIFetch_Statics; \
public: \
	DECLARE_CLASS(UIFetch, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(UIFetch)


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUIFetch(); \
	friend struct Z_Construct_UClass_UIFetch_Statics; \
public: \
	DECLARE_CLASS(UIFetch, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(UIFetch)


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIFetch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIFetch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIFetch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFetch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIFetch(UIFetch&&); \
	NO_API UIFetch(const UIFetch&); \
public:


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIFetch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIFetch(UIFetch&&); \
	NO_API UIFetch(const UIFetch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIFetch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFetch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIFetch)


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_PRIVATE_PROPERTY_OFFSET
#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_25_PROLOG
#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_PRIVATE_PROPERTY_OFFSET \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_SPARSE_DATA \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_RPC_WRAPPERS \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_INCLASS \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_PRIVATE_PROPERTY_OFFSET \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_SPARSE_DATA \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_INCLASS_NO_PURE_DECLS \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FETCH_API UClass* StaticClass<class UIFetch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_IFetch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
