// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/MyBackpackWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBackpackWidget() {}
// Cross Module References
	SUBFARM_API UClass* Z_Construct_UClass_UMyBackpackWidget();
	SUBFARM_API UClass* Z_Construct_UClass_UMyBackpackWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	DEFINE_FUNCTION(UMyBackpackWidget::execCloseBackpack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseBackpack();
		P_NATIVE_END;
	}
	void UMyBackpackWidget::StaticRegisterNativesUMyBackpackWidget()
	{
		UClass* Class = UMyBackpackWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseBackpack", &UMyBackpackWidget::execCloseBackpack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyBackpackWidget_CloseBackpack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBackpackWidget_CloseBackpack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyBackpackWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBackpackWidget_CloseBackpack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBackpackWidget, nullptr, "CloseBackpack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBackpackWidget_CloseBackpack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBackpackWidget_CloseBackpack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyBackpackWidget_CloseBackpack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBackpackWidget_CloseBackpack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBackpackWidget);
	UClass* Z_Construct_UClass_UMyBackpackWidget_NoRegister()
	{
		return UMyBackpackWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyBackpackWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PetImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PetImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlantImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlantImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrapBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WrapBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBackpackWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBackpackWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyBackpackWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyBackpackWidget_CloseBackpack, "CloseBackpack" }, // 3712678927
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBackpackWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBackpackWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyBackpackWidget.h" },
		{ "ModuleRelativePath", "Public/MyBackpackWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_PetImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyBackpackWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_PetImage = { "PetImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBackpackWidget, PetImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_PetImage_MetaData), Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_PetImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_MainImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyBackpackWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_MainImage = { "MainImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBackpackWidget, MainImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_MainImage_MetaData), Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_MainImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_PlantImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyBackpackWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_PlantImage = { "PlantImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBackpackWidget, PlantImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_PlantImage_MetaData), Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_PlantImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_SwitchButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyBackpackWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_SwitchButton = { "SwitchButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBackpackWidget, SwitchButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_SwitchButton_MetaData), Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_SwitchButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_CloseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyBackpackWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_CloseButton = { "CloseButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBackpackWidget, CloseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_CloseButton_MetaData), Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_CloseButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_CloseImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyBackpackWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_CloseImage = { "CloseImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBackpackWidget, CloseImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_CloseImage_MetaData), Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_CloseImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_WrapBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyBackpackWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_WrapBox = { "WrapBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBackpackWidget, WrapBox), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_WrapBox_MetaData), Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_WrapBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBackpackWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_PetImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_MainImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_PlantImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_SwitchButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_CloseButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_CloseImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBackpackWidget_Statics::NewProp_WrapBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBackpackWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBackpackWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBackpackWidget_Statics::ClassParams = {
		&UMyBackpackWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyBackpackWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyBackpackWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBackpackWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBackpackWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBackpackWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyBackpackWidget()
	{
		if (!Z_Registration_Info_UClass_UMyBackpackWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBackpackWidget.OuterSingleton, Z_Construct_UClass_UMyBackpackWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyBackpackWidget.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<UMyBackpackWidget>()
	{
		return UMyBackpackWidget::StaticClass();
	}
	UMyBackpackWidget::UMyBackpackWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBackpackWidget);
	UMyBackpackWidget::~UMyBackpackWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyBackpackWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyBackpackWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyBackpackWidget, UMyBackpackWidget::StaticClass, TEXT("UMyBackpackWidget"), &Z_Registration_Info_UClass_UMyBackpackWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBackpackWidget), 1395170860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyBackpackWidget_h_1062347756(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyBackpackWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyBackpackWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
