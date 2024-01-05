// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/BackpackItemWidget.h"
#include "SubFarm/Public/MyItemObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackpackItemWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SUBFARM_API UClass* Z_Construct_UClass_UBackpackItemWidget();
	SUBFARM_API UClass* Z_Construct_UClass_UBackpackItemWidget_NoRegister();
	SUBFARM_API UScriptStruct* Z_Construct_UScriptStruct_FMyItemTableStruct();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	DEFINE_FUNCTION(UBackpackItemWidget::execinitItemMessage)
	{
		P_GET_STRUCT(FMyItemTableStruct,Z_Param_ItemDetail);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_GET_PROPERTY(FIntProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->initItemMessage(Z_Param_ItemDetail,Z_Param_AssetPath,Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackpackItemWidget::execSetItemNumber)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemNumber(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackpackItemWidget::execShowPanel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowPanel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackpackItemWidget::execSetItemContentImage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemContentImage(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	void UBackpackItemWidget::StaticRegisterNativesUBackpackItemWidget()
	{
		UClass* Class = UBackpackItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "initItemMessage", &UBackpackItemWidget::execinitItemMessage },
			{ "SetItemContentImage", &UBackpackItemWidget::execSetItemContentImage },
			{ "SetItemNumber", &UBackpackItemWidget::execSetItemNumber },
			{ "ShowPanel", &UBackpackItemWidget::execShowPanel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics
	{
		struct BackpackItemWidget_eventinitItemMessage_Parms
		{
			FMyItemTableStruct ItemDetail;
			FString AssetPath;
			int32 Number;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDetail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::NewProp_ItemDetail = { "ItemDetail", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemWidget_eventinitItemMessage_Parms, ItemDetail), Z_Construct_UScriptStruct_FMyItemTableStruct, METADATA_PARAMS(0, nullptr) }; // 1881805372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemWidget_eventinitItemMessage_Parms, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::NewProp_AssetPath_MetaData), Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::NewProp_AssetPath_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemWidget_eventinitItemMessage_Parms, Number), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::NewProp_ItemDetail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BackpackItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackpackItemWidget, nullptr, "initItemMessage", nullptr, nullptr, Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::BackpackItemWidget_eventinitItemMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::BackpackItemWidget_eventinitItemMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBackpackItemWidget_initItemMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackItemWidget_initItemMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics
	{
		struct BackpackItemWidget_eventSetItemContentImage_Parms
		{
			FString AssetPath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemWidget_eventSetItemContentImage_Parms, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::NewProp_AssetPath_MetaData), Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::NewProp_AssetPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::NewProp_AssetPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BackpackItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackpackItemWidget, nullptr, "SetItemContentImage", nullptr, nullptr, Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::BackpackItemWidget_eventSetItemContentImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::BackpackItemWidget_eventSetItemContentImage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber_Statics
	{
		struct BackpackItemWidget_eventSetItemNumber_Parms
		{
			int32 Number;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemWidget_eventSetItemNumber_Parms, Number), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BackpackItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackpackItemWidget, nullptr, "SetItemNumber", nullptr, nullptr, Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber_Statics::BackpackItemWidget_eventSetItemNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber_Statics::BackpackItemWidget_eventSetItemNumber_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackpackItemWidget_ShowPanel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackpackItemWidget_ShowPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BackpackItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackItemWidget_ShowPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackpackItemWidget, nullptr, "ShowPanel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemWidget_ShowPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackItemWidget_ShowPanel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBackpackItemWidget_ShowPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackItemWidget_ShowPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBackpackItemWidget);
	UClass* Z_Construct_UClass_UBackpackItemWidget_NoRegister()
	{
		return UBackpackItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBackpackItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemBkgUrl_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBkgUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemContentUrl_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemContentUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NumberText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractiveButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractiveButton;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UBackpackItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackpackItemWidget_initItemMessage, "initItemMessage" }, // 1528518452
		{ &Z_Construct_UFunction_UBackpackItemWidget_SetItemContentImage, "SetItemContentImage" }, // 4076607757
		{ &Z_Construct_UFunction_UBackpackItemWidget_SetItemNumber, "SetItemNumber" }, // 2239525662
		{ &Z_Construct_UFunction_UBackpackItemWidget_ShowPanel, "ShowPanel" }, // 464043090
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemWidget_Statics::FuncInfo) < 2048);
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
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackpackItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemBkgUrl = { "ItemBkgUrl", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemWidget, ItemBkgUrl), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemBkgUrl_MetaData), Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemBkgUrl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemContentUrl_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackpackItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemContentUrl = { "ItemContentUrl", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemWidget, ItemContentUrl), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemContentUrl_MetaData), Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_ItemContentUrl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_NumberText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackpackItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_NumberText = { "NumberText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemWidget, NumberText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_NumberText_MetaData), Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_NumberText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_InteractiveButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackpackItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_InteractiveButton = { "InteractiveButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemWidget, InteractiveButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_InteractiveButton_MetaData), Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_InteractiveButton_MetaData) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemWidget_Statics::NewProp_InteractiveButton,
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
		FuncInfo,
		Z_Construct_UClass_UBackpackItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UBackpackItemWidget, UBackpackItemWidget::StaticClass, TEXT("UBackpackItemWidget"), &Z_Registration_Info_UClass_UBackpackItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackItemWidget), 2072028402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_BackpackItemWidget_h_1432386190(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_BackpackItemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_BackpackItemWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
