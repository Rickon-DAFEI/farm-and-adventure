// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/MyPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	SUBFARM_API UClass* Z_Construct_UClass_AMyPlayerState();
	SUBFARM_API UClass* Z_Construct_UClass_AMyPlayerState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	void AMyPlayerState::StaticRegisterNativesAMyPlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerState);
	UClass* Z_Construct_UClass_AMyPlayerState_NoRegister()
	{
		return AMyPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyPlayerState.h" },
		{ "ModuleRelativePath", "Public/MyPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerState_Statics::ClassParams = {
		&AMyPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyPlayerState()
	{
		if (!Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton, Z_Construct_UClass_AMyPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<AMyPlayerState>()
	{
		return AMyPlayerState::StaticClass();
	}
	AMyPlayerState::AMyPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerState);
	AMyPlayerState::~AMyPlayerState() {}
	struct Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerState, AMyPlayerState::StaticClass, TEXT("AMyPlayerState"), &Z_Registration_Info_UClass_AMyPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerState), 3776132610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPlayerState_h_3485487374(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
