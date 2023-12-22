// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/MyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	SUBFARM_API UClass* Z_Construct_UClass_AMyGameMode();
	SUBFARM_API UClass* Z_Construct_UClass_AMyGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	void AMyGameMode::StaticRegisterNativesAMyGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameMode);
	UClass* Z_Construct_UClass_AMyGameMode_NoRegister()
	{
		return AMyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameMode.h" },
		{ "ModuleRelativePath", "Public/MyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameMode_Statics::ClassParams = {
		&AMyGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyGameMode()
	{
		if (!Z_Registration_Info_UClass_AMyGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameMode.OuterSingleton, Z_Construct_UClass_AMyGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyGameMode.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<AMyGameMode>()
	{
		return AMyGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameMode);
	AMyGameMode::~AMyGameMode() {}
	struct Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameMode, AMyGameMode::StaticClass, TEXT("AMyGameMode"), &Z_Registration_Info_UClass_AMyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameMode), 758687747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyGameMode_h_2188386261(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
