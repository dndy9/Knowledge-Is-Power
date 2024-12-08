// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSHA256Hash;
#ifdef HASHSHA256_HashSHA256BPLibrary_generated_h
#error "HashSHA256BPLibrary.generated.h already included, missing '#pragma once' in HashSHA256BPLibrary.h"
#endif
#define HASHSHA256_HashSHA256BPLibrary_generated_h

#define HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_SPARSE_DATA
#define HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHash); \
	DECLARE_FUNCTION(execFromArray); \
	DECLARE_FUNCTION(execFromFile); \
	DECLARE_FUNCTION(execFromString);


#define HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHash); \
	DECLARE_FUNCTION(execFromArray); \
	DECLARE_FUNCTION(execFromFile); \
	DECLARE_FUNCTION(execFromString);


#define HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHashSHA256BPLibrary(); \
	friend struct Z_Construct_UClass_UHashSHA256BPLibrary_Statics; \
public: \
	DECLARE_CLASS(UHashSHA256BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HashSHA256"), NO_API) \
	DECLARE_SERIALIZER(UHashSHA256BPLibrary)


#define HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHashSHA256BPLibrary(); \
	friend struct Z_Construct_UClass_UHashSHA256BPLibrary_Statics; \
public: \
	DECLARE_CLASS(UHashSHA256BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HashSHA256"), NO_API) \
	DECLARE_SERIALIZER(UHashSHA256BPLibrary)


#define HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHashSHA256BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHashSHA256BPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHashSHA256BPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHashSHA256BPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHashSHA256BPLibrary(UHashSHA256BPLibrary&&); \
	NO_API UHashSHA256BPLibrary(const UHashSHA256BPLibrary&); \
public:


#define HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHashSHA256BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHashSHA256BPLibrary(UHashSHA256BPLibrary&&); \
	NO_API UHashSHA256BPLibrary(const UHashSHA256BPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHashSHA256BPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHashSHA256BPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHashSHA256BPLibrary)


#define HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_12_PROLOG
#define HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_SPARSE_DATA \
	HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_RPC_WRAPPERS \
	HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_INCLASS \
	HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_SPARSE_DATA \
	HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HashSHA256BPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HASHSHA256_API UClass* StaticClass<class UHashSHA256BPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_HashSHA256_Source_HashSHA256_Public_HashSHA256BPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
