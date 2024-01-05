// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/MyUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUserWidget() {}
// Cross Module References
	SUBFARM_API UClass* Z_Construct_UClass_UMyUserWidget();
	SUBFARM_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	DEFINE_FUNCTION(UMyUserWidget::execCloseHint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseHint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyUserWidget::execUpdateHint)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_HintMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHint(Z_Param_HintMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyUserWidget::execUpdateMoneyWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMoneyWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyUserWidget::execAlterMoney)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_alterNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AlterMoney(Z_Param_alterNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyUserWidget::execOpenBackpack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenBackpack();
		P_NATIVE_END;
	}
	void UMyUserWidget::StaticRegisterNativesUMyUserWidget()
	{
		UClass* Class = UMyUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AlterMoney", &UMyUserWidget::execAlterMoney },
			{ "CloseHint", &UMyUserWidget::execCloseHint },
			{ "OpenBackpack", &UMyUserWidget::execOpenBackpack },
			{ "UpdateHint", &UMyUserWidget::execUpdateHint },
			{ "UpdateMoneyWidget", &UMyUserWidget::execUpdateMoneyWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyUserWidget_AlterMoney_Statics
	{
		struct MyUserWidget_eventAlterMoney_Parms
		{
			int32 alterNumber;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_alterNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyUserWidget_AlterMoney_Statics::NewProp_alterNumber = { "alterNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyUserWidget_eventAlterMoney_Parms, alterNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyUserWidget_AlterMoney_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserWidget_AlterMoney_Statics::NewProp_alterNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_AlterMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_AlterMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "AlterMoney", nullptr, nullptr, Z_Construct_UFunction_UMyUserWidget_AlterMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_AlterMoney_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyUserWidget_AlterMoney_Statics::MyUserWidget_eventAlterMoney_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_AlterMoney_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_AlterMoney_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_AlterMoney_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyUserWidget_AlterMoney_Statics::MyUserWidget_eventAlterMoney_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyUserWidget_AlterMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_AlterMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyUserWidget_CloseHint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_CloseHint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_CloseHint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "CloseHint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_CloseHint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_CloseHint_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_CloseHint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_CloseHint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyUserWidget_OpenBackpack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_OpenBackpack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_OpenBackpack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "OpenBackpack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_OpenBackpack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_OpenBackpack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_OpenBackpack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_OpenBackpack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyUserWidget_UpdateHint_Statics
	{
		struct MyUserWidget_eventUpdateHint_Parms
		{
			FText HintMessage;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_HintMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMyUserWidget_UpdateHint_Statics::NewProp_HintMessage = { "HintMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyUserWidget_eventUpdateHint_Parms, HintMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyUserWidget_UpdateHint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserWidget_UpdateHint_Statics::NewProp_HintMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_UpdateHint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_UpdateHint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "UpdateHint", nullptr, nullptr, Z_Construct_UFunction_UMyUserWidget_UpdateHint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_UpdateHint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyUserWidget_UpdateHint_Statics::MyUserWidget_eventUpdateHint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_UpdateHint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_UpdateHint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_UpdateHint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyUserWidget_UpdateHint_Statics::MyUserWidget_eventUpdateHint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyUserWidget_UpdateHint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_UpdateHint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyUserWidget_UpdateMoneyWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_UpdateMoneyWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_UpdateMoneyWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "UpdateMoneyWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_UpdateMoneyWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_UpdateMoneyWidget_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_UpdateMoneyWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_UpdateMoneyWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyUserWidget);
	UClass* Z_Construct_UClass_UMyUserWidget_NoRegister()
	{
		return UMyUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoneyText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoneyText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoneyImageWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoneyImageWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackpackImageWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackpackImageWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackpackButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackpackButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HintImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HintImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HintWord_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HintWord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Money_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Money;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyUserWidget_AlterMoney, "AlterMoney" }, // 2266376994
		{ &Z_Construct_UFunction_UMyUserWidget_CloseHint, "CloseHint" }, // 924412316
		{ &Z_Construct_UFunction_UMyUserWidget_OpenBackpack, "OpenBackpack" }, // 2901656152
		{ &Z_Construct_UFunction_UMyUserWidget_UpdateHint, "UpdateHint" }, // 242705038
		{ &Z_Construct_UFunction_UMyUserWidget_UpdateMoneyWidget, "UpdateMoneyWidget" }, // 888305304
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyUserWidget.h" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MoneyText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(meta = (BindWidget))\n//UButton* ButtonStart;\n//UPROPERTY(meta = (BindWidget))\n//UButton* ButtonQuit;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(meta = (BindWidget))\nUButton* ButtonStart;\nUPROPERTY(meta = (BindWidget))\nUButton* ButtonQuit;" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MoneyText = { "MoneyText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, MoneyText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MoneyText_MetaData), Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MoneyText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MoneyImageWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MoneyImageWidget = { "MoneyImageWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, MoneyImageWidget), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MoneyImageWidget_MetaData), Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MoneyImageWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_BackpackImageWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_BackpackImageWidget = { "BackpackImageWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, BackpackImageWidget), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_BackpackImageWidget_MetaData), Z_Construct_UClass_UMyUserWidget_Statics::NewProp_BackpackImageWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_BackpackButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_BackpackButton = { "BackpackButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, BackpackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_BackpackButton_MetaData), Z_Construct_UClass_UMyUserWidget_Statics::NewProp_BackpackButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HintImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HintImage = { "HintImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, HintImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HintImage_MetaData), Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HintImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HintWord_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HintWord = { "HintWord", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, HintWord), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HintWord_MetaData), Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HintWord_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_Money_MetaData[] = {
		{ "Category", "MyUserWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"MyHealth\")\n//float MaxHealth = 100.0f;\n" },
#endif
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"MyHealth\")\nfloat MaxHealth = 100.0f;" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_Money = { "Money", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, Money), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_Money_MetaData), Z_Construct_UClass_UMyUserWidget_Statics::NewProp_Money_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MoneyText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MoneyImageWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_BackpackImageWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_BackpackButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HintImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_HintWord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_Money,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyUserWidget_Statics::ClassParams = {
		&UMyUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyUserWidget()
	{
		if (!Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton, Z_Construct_UClass_UMyUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<UMyUserWidget>()
	{
		return UMyUserWidget::StaticClass();
	}
	UMyUserWidget::UMyUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyUserWidget);
	UMyUserWidget::~UMyUserWidget() {}
	struct Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyUserWidget, UMyUserWidget::StaticClass, TEXT("UMyUserWidget"), &Z_Registration_Info_UClass_UMyUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyUserWidget), 3017786823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyUserWidget_h_3941626711(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
