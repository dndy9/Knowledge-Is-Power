// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FShopItem;
class USQLiteConnector;
#ifdef SIMPLESQLITE_SQLiteBlueprintFunctionLibrary_generated_h
#error "SQLiteBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in SQLiteBlueprintFunctionLibrary.h"
#endif
#define SIMPLESQLITE_SQLiteBlueprintFunctionLibrary_generated_h

#define Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_SPARSE_DATA
#define Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestSQLiteConnect); \
	DECLARE_FUNCTION(execCreateSQLiteConnector);


#define Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestSQLiteConnect); \
	DECLARE_FUNCTION(execCreateSQLiteConnector);


#define Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQLiteBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USQLiteBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSQLite"), NO_API) \
	DECLARE_SERIALIZER(USQLiteBlueprintFunctionLibrary)


#define Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUSQLiteBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USQLiteBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSQLite"), NO_API) \
	DECLARE_SERIALIZER(USQLiteBlueprintFunctionLibrary)


#define Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLiteBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLiteBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLiteBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLiteBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLiteBlueprintFunctionLibrary(USQLiteBlueprintFunctionLibrary&&); \
	NO_API USQLiteBlueprintFunctionLibrary(const USQLiteBlueprintFunctionLibrary&); \
public:


#define Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLiteBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLiteBlueprintFunctionLibrary(USQLiteBlueprintFunctionLibrary&&); \
	NO_API USQLiteBlueprintFunctionLibrary(const USQLiteBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLiteBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLiteBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLiteBlueprintFunctionLibrary)


#define Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_PRIVATE_PROPERTY_OFFSET
#define Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_26_PROLOG
#define Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_PRIVATE_PROPERTY_OFFSET \
	Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_SPARSE_DATA \
	Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_RPC_WRAPPERS \
	Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_INCLASS \
	Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_PRIVATE_PROPERTY_OFFSET \
	Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_SPARSE_DATA \
	Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_INCLASS_NO_PURE_DECLS \
	Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLESQLITE_API UClass* StaticClass<class USQLiteBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Knowledge_Is_Power_Plugins_SimpleSQLite_Source_Public_SQLiteBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
