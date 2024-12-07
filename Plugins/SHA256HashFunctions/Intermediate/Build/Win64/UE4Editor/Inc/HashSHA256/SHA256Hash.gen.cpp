// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HashSHA256/Public/SHA256Hash.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHA256Hash() {}
// Cross Module References
	HASHSHA256_API UScriptStruct* Z_Construct_UScriptStruct_FSHA256Hash();
	UPackage* Z_Construct_UPackage__Script_HashSHA256();
// End Cross Module References
class UScriptStruct* FSHA256Hash::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HASHSHA256_API uint32 Get_Z_Construct_UScriptStruct_FSHA256Hash_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSHA256Hash, Z_Construct_UPackage__Script_HashSHA256(), TEXT("SHA256Hash"), sizeof(FSHA256Hash), Get_Z_Construct_UScriptStruct_FSHA256Hash_Hash());
	}
	return Singleton;
}
template<> HASHSHA256_API UScriptStruct* StaticStruct<FSHA256Hash>()
{
	return FSHA256Hash::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSHA256Hash(FSHA256Hash::StaticStruct, TEXT("/Script/HashSHA256"), TEXT("SHA256Hash"), false, nullptr, nullptr);
static struct FScriptStruct_HashSHA256_StaticRegisterNativesFSHA256Hash
{
	FScriptStruct_HashSHA256_StaticRegisterNativesFSHA256Hash()
	{
		UScriptStruct::DeferCppStructOps<FSHA256Hash>(FName(TEXT("SHA256Hash")));
	}
} ScriptStruct_HashSHA256_StaticRegisterNativesFSHA256Hash;
	struct Z_Construct_UScriptStruct_FSHA256Hash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHA256Hash_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SHA256Hash.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSHA256Hash_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSHA256Hash>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSHA256Hash_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HashSHA256,
		nullptr,
		&NewStructOps,
		"SHA256Hash",
		sizeof(FSHA256Hash),
		alignof(FSHA256Hash),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSHA256Hash_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHA256Hash_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSHA256Hash()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSHA256Hash_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HashSHA256();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SHA256Hash"), sizeof(FSHA256Hash), Get_Z_Construct_UScriptStruct_FSHA256Hash_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSHA256Hash_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSHA256Hash_Hash() { return 2369441874U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
