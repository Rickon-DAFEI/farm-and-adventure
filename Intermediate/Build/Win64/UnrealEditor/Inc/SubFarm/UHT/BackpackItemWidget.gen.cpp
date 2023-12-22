// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/BackpackItemWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackpackItemWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SUBFARM_API UClass* Z_Construct_UClass_UBackpackItemWidget();
	SUBFARM_API UClass* Z_Construct_UClass_UBackpackItemWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	void UBackpackItemWidget::StaticRegisterNativesUBackpackItemWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBackpackItemWidget);
	UClass* Z_Construct_UClass_UBackpackItemWidget_NoRegister()
	{
		return UBackpackItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBackpackItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemBkgUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemBkgUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemContentUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemContentUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NumberText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackpackItemWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BackpackItemWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBackpackItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackpackItemWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BackpackItemWidget.h" },
		{ "ModuleRelativePath", "Public/BackpackItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemBkgUrl_MetaData[] = {
		{ "BindWidget", "" },
		{ "ModuleRelativePath", "Public/BackpackItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemBkgUrl = { "ItemBkgUrl", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemWidget, ItemBkgUrl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemBkgUrl_MetaData), Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemBkgUrl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemContentUrl_MetaData[] = {
		{ "BindWidget", "" },
		{ "ModuleRelativePath", "Public/BackpackItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemContentUrl = { "ItemContentUrl", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemWidget, ItemContentUrl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemContentUrl_MetaData), Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemContentUrl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_NumberText_MetaData[] = {
		{ "BindWidget", "" },
		{ "ModuleRelativePath", "Public/BackpackItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_NumberText = { "NumberText", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemWidget, NumberText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_NumberText_MetaData), Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_NumberText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_BackpackItemWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/BackpackItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_BackpackItemWidgetClass = { "BackpackItemWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemWidget, BackpackItemWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBackpackItemWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_BackpackItemWidgetClass_MetaData), Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_BackpackItemWidgetClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackItemWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemBkgUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemContentUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_NumberText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_BackpackItemWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBackpackItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackItemWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackItemWidget_Statics::ClassParams = {
		&UBackpackItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBackpackItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackItemWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBackpackItemWidget()
	{
		if (!Z_Registration_Info_UClass_UBackpackItemWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackItemWidget.OuterSingleton, Z_Construct_UClass_UBackpackItemWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBackpackItemWidget.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<UBackpackItemWidget>()
	{
		return UBackpackItemWidget::StaticClass();
	}
	UBackpackItemWidget::UBackpackItemWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackItemWidget);
	UBackpackItemWidget::~UBackpackItemWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_BackpackItemWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_BackpackItemWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackItemWidget, UBackpackItemWidget::StaticClass, TEXT("UBackpackItemWidget"), &Z_Registration_Info_UClass_UBackpackItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackItemWidget), 3505948074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_BackpackItemWidget_h_2945587191(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_BackpackItemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_BackpackItemWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
