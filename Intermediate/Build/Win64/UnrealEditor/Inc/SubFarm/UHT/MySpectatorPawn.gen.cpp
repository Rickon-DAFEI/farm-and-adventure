// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/MySpectatorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySpectatorPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn();
	SUBFARM_API UClass* Z_Construct_UClass_AMySpectatorPawn();
	SUBFARM_API UClass* Z_Construct_UClass_AMySpectatorPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	void AMySpectatorPawn::StaticRegisterNativesAMySpectatorPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMySpectatorPawn);
	UClass* Z_Construct_UClass_AMySpectatorPawn_NoRegister()
	{
		return AMySpectatorPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMySpectatorPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMySpectatorPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpectatorPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMySpectatorPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMySpectatorPawn_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MySpectatorPawn.h" },
		{ "ModuleRelativePath", "Public/MySpectatorPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMySpectatorPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMySpectatorPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMySpectatorPawn_Statics::ClassParams = {
		&AMySpectatorPawn::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMySpectatorPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMySpectatorPawn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMySpectatorPawn()
	{
		if (!Z_Registration_Info_UClass_AMySpectatorPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMySpectatorPawn.OuterSingleton, Z_Construct_UClass_AMySpectatorPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMySpectatorPawn.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<AMySpectatorPawn>()
	{
		return AMySpectatorPawn::StaticClass();
	}
	AMySpectatorPawn::AMySpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMySpectatorPawn);
	AMySpectatorPawn::~AMySpectatorPawn() {}
	struct Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MySpectatorPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MySpectatorPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMySpectatorPawn, AMySpectatorPawn::StaticClass, TEXT("AMySpectatorPawn"), &Z_Registration_Info_UClass_AMySpectatorPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMySpectatorPawn), 1620024014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MySpectatorPawn_h_706714783(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MySpectatorPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MySpectatorPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
