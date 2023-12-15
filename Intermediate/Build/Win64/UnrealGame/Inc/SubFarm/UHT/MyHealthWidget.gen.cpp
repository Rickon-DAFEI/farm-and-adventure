// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/MyHealthWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHealthWidget() {}
// Cross Module References
	SUBFARM_API UClass* Z_Construct_UClass_UMyHealthWidget();
	SUBFARM_API UClass* Z_Construct_UClass_UMyHealthWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	void UMyHealthWidget::StaticRegisterNativesUMyHealthWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyHealthWidget);
	UClass* Z_Construct_UClass_UMyHealthWidget_NoRegister()
	{
		return UMyHealthWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyHealthWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyHealthWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyHealthWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyHealthWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyHealthWidget.h" },
		{ "ModuleRelativePath", "Public/MyHealthWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyHealthWidget_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "MyWidget" },
		{ "ModuleRelativePath", "Public/MyHealthWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyHealthWidget_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyHealthWidget, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyHealthWidget_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_UMyHealthWidget_Statics::NewProp_CurrentHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyHealthWidget_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "MyWidget" },
		{ "ModuleRelativePath", "Public/MyHealthWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyHealthWidget_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyHealthWidget, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyHealthWidget_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UMyHealthWidget_Statics::NewProp_MaxHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyHealthWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyHealthWidget_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyHealthWidget_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyHealthWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyHealthWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyHealthWidget_Statics::ClassParams = {
		&UMyHealthWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyHealthWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyHealthWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyHealthWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyHealthWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyHealthWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyHealthWidget()
	{
		if (!Z_Registration_Info_UClass_UMyHealthWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyHealthWidget.OuterSingleton, Z_Construct_UClass_UMyHealthWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyHealthWidget.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<UMyHealthWidget>()
	{
		return UMyHealthWidget::StaticClass();
	}
	UMyHealthWidget::UMyHealthWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyHealthWidget);
	UMyHealthWidget::~UMyHealthWidget() {}
	struct Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyHealthWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyHealthWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyHealthWidget, UMyHealthWidget::StaticClass, TEXT("UMyHealthWidget"), &Z_Registration_Info_UClass_UMyHealthWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyHealthWidget), 2700769174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyHealthWidget_h_1402444392(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyHealthWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyHealthWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
