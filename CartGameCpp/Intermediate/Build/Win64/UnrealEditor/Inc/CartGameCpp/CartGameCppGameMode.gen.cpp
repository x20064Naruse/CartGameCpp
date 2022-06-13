// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CartGameCpp/CartGameCppGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCartGameCppGameMode() {}
// Cross Module References
	CARTGAMECPP_API UClass* Z_Construct_UClass_ACartGameCppGameMode_NoRegister();
	CARTGAMECPP_API UClass* Z_Construct_UClass_ACartGameCppGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CartGameCpp();
// End Cross Module References
	void ACartGameCppGameMode::StaticRegisterNativesACartGameCppGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACartGameCppGameMode);
	UClass* Z_Construct_UClass_ACartGameCppGameMode_NoRegister()
	{
		return ACartGameCppGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACartGameCppGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACartGameCppGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CartGameCpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACartGameCppGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CartGameCppGameMode.h" },
		{ "ModuleRelativePath", "CartGameCppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACartGameCppGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACartGameCppGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACartGameCppGameMode_Statics::ClassParams = {
		&ACartGameCppGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACartGameCppGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACartGameCppGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACartGameCppGameMode()
	{
		if (!Z_Registration_Info_UClass_ACartGameCppGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACartGameCppGameMode.OuterSingleton, Z_Construct_UClass_ACartGameCppGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACartGameCppGameMode.OuterSingleton;
	}
	template<> CARTGAMECPP_API UClass* StaticClass<ACartGameCppGameMode>()
	{
		return ACartGameCppGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACartGameCppGameMode);
	struct Z_CompiledInDeferFile_FID_CartGameCpp_Source_CartGameCpp_CartGameCppGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CartGameCpp_Source_CartGameCpp_CartGameCppGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACartGameCppGameMode, ACartGameCppGameMode::StaticClass, TEXT("ACartGameCppGameMode"), &Z_Registration_Info_UClass_ACartGameCppGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACartGameCppGameMode), 2553768194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CartGameCpp_Source_CartGameCpp_CartGameCppGameMode_h_275366829(TEXT("/Script/CartGameCpp"),
		Z_CompiledInDeferFile_FID_CartGameCpp_Source_CartGameCpp_CartGameCppGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CartGameCpp_Source_CartGameCpp_CartGameCppGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
