// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FETCH_Types_generated_h
#error "Types.generated.h already included, missing '#pragma once' in Types.h"
#endif
#define FETCH_Types_generated_h

#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFetchJsonOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FETCH_API UScriptStruct* StaticStruct<struct FFetchJsonOptions>();

#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFetchOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FETCH_API UScriptStruct* StaticStruct<struct FFetchOptions>();

#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFetchHeader_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FETCH_API UScriptStruct* StaticStruct<struct FFetchHeader>();

#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_SPARSE_DATA
#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_RPC_WRAPPERS
#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_RPC_WRAPPERS_NO_PURE_DECLS
#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypes(); \
	friend struct Z_Construct_UClass_UTypes_Statics; \
public: \
	DECLARE_CLASS(UTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(UTypes)


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUTypes(); \
	friend struct Z_Construct_UClass_UTypes_Statics; \
public: \
	DECLARE_CLASS(UTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(UTypes)


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypes(UTypes&&); \
	NO_API UTypes(const UTypes&); \
public:


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypes(UTypes&&); \
	NO_API UTypes(const UTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypes)


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_PRIVATE_PROPERTY_OFFSET
#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_69_PROLOG
#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_PRIVATE_PROPERTY_OFFSET \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_SPARSE_DATA \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_RPC_WRAPPERS \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_INCLASS \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_PRIVATE_PROPERTY_OFFSET \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_SPARSE_DATA \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_INCLASS_NO_PURE_DECLS \
	Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FETCH_API UClass* StaticClass<class UTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Knowledge_Is_Power_Plugins_Fetch_Source_Fetch_Public_Types_h


#define FOREACH_ENUM_FFETCHOPTIONSMETHOD(op) \
	op(GET) \
	op(POST) \
	op(PUT) \
	op(DELETE) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
