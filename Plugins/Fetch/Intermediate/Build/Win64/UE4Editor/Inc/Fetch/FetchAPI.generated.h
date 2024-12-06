// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFetchHeader;
struct FFetchJsonOptions;
class UFetchRequest;
struct FFetchOptions;
#ifdef FETCH_FetchAPI_generated_h
#error "FetchAPI.generated.h already included, missing '#pragma once' in FetchAPI.h"
#endif
#define FETCH_FetchAPI_generated_h

#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_SPARSE_DATA
#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeOAuthHeader); \
	DECLARE_FUNCTION(execMakeBasicAuthHeader); \
	DECLARE_FUNCTION(execFetchJson); \
	DECLARE_FUNCTION(execFetch);


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeOAuthHeader); \
	DECLARE_FUNCTION(execMakeBasicAuthHeader); \
	DECLARE_FUNCTION(execFetchJson); \
	DECLARE_FUNCTION(execFetch);


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFetchAPI(); \
	friend struct Z_Construct_UClass_UFetchAPI_Statics; \
public: \
	DECLARE_CLASS(UFetchAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(UFetchAPI)


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFetchAPI(); \
	friend struct Z_Construct_UClass_UFetchAPI_Statics; \
public: \
	DECLARE_CLASS(UFetchAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(UFetchAPI)


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFetchAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFetchAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchAPI(UFetchAPI&&); \
	NO_API UFetchAPI(const UFetchAPI&); \
public:


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchAPI(UFetchAPI&&); \
	NO_API UFetchAPI(const UFetchAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFetchAPI)


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_PRIVATE_PROPERTY_OFFSET
#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_15_PROLOG
#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_PRIVATE_PROPERTY_OFFSET \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_SPARSE_DATA \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_RPC_WRAPPERS \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_INCLASS \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_PRIVATE_PROPERTY_OFFSET \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_SPARSE_DATA \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_INCLASS_NO_PURE_DECLS \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FETCH_API UClass* StaticClass<class UFetchAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
