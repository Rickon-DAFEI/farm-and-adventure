// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/MyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SUBFARM_API UClass* Z_Construct_UClass_UMyInterface();
	SUBFARM_API UClass* Z_Construct_UClass_UMyInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	void UMyInterface::StaticRegisterNativesUMyInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyInterface);
	UClass* Z_Construct_UClass_UMyInterface_NoRegister()
	{
		return UMyInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMyInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInterface_Statics::ClassParams = {
		&UMyInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyInterface()
	{
		if (!Z_Registration_Info_UClass_UMyInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInterface.OuterSingleton, Z_Construct_UClass_UMyInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyInterface.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<UMyInterface>()
	{
		return UMyInterface::StaticClass();
	}
	UMyInterface::UMyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInterface);
	UMyInterface::~UMyInterface() {}
	struct Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyInterface, UMyInterface::StaticClass, TEXT("UMyInterface"), &Z_Registration_Info_UClass_UMyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInterface), 3521627962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_2780824571(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
