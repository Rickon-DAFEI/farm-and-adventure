// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/MyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	SUBFARM_API UClass* Z_Construct_UClass_AMyCharacter();
	SUBFARM_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	SUBFARM_API UClass* Z_Construct_UClass_UMyInterface_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	DEFINE_FUNCTION(AMyCharacter::execGiveInitalItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GiveInitalItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCharacter::execPutOnHand)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_HashIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PutOnHand(Z_Param_HashIndex);
		P_NATIVE_END;
	}
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
		UClass* Class = AMyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GiveInitalItems", &AMyCharacter::execGiveInitalItems },
			{ "PutOnHand", &AMyCharacter::execPutOnHand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCharacter_GiveInitalItems_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_GiveInitalItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_GiveInitalItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "GiveInitalItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GiveInitalItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_GiveInitalItems_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyCharacter_GiveInitalItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_GiveInitalItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_PutOnHand_Statics
	{
		struct MyCharacter_eventPutOnHand_Parms
		{
			int32 HashIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_HashIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyCharacter_PutOnHand_Statics::NewProp_HashIndex = { "HashIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventPutOnHand_Parms, HashIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_PutOnHand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_PutOnHand_Statics::NewProp_HashIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_PutOnHand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_PutOnHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "PutOnHand", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_PutOnHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PutOnHand_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_PutOnHand_Statics::MyCharacter_eventPutOnHand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PutOnHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_PutOnHand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PutOnHand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_PutOnHand_Statics::MyCharacter_eventPutOnHand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyCharacter_PutOnHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_PutOnHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacter);
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MySpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MySpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyWidgetHealth_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyWidgetHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDigging_MetaData[];
#endif
		static void NewProp_IsDigging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDigging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPlanting_MetaData[];
#endif
		static void NewProp_IsPlanting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlanting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsHarvesting_MetaData[];
#endif
		static void NewProp_IsHarvesting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHarvesting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacter_GiveInitalItems, "GiveInitalItems" }, // 2125966723
		{ &Z_Construct_UFunction_AMyCharacter_PutOnHand, "PutOnHand" }, // 1939769698
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_MySpringArm_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MySpringArm = { "MySpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MySpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_MySpringArm_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_MySpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyCamera_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyCamera = { "MyCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MyCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyCamera_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = \"MySceneComponent\")\n//class UStaticMeshComponent* ToolMesh;\n" },
#endif
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = \"MySceneComponent\")\nclass UStaticMeshComponent* ToolMesh;" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyWidgetHealth_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyWidgetHealth = { "MyWidgetHealth", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MyWidgetHealth), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyWidgetHealth_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyWidgetHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDigging_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDigging_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->IsDigging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDigging = { "IsDigging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDigging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDigging_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDigging_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsPlanting_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsPlanting_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->IsPlanting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsPlanting = { "IsPlanting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsPlanting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsPlanting_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsPlanting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsHarvesting_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsHarvesting_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->IsHarvesting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsHarvesting = { "IsHarvesting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsHarvesting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsHarvesting_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsHarvesting_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MySpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyWidgetHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsDigging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsPlanting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsHarvesting,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMyCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMyInterface_NoRegister, (int32)VTABLE_OFFSET(AMyCharacter, IMyInterface), false },  // 3521627962
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
		&AMyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		if (!Z_Registration_Info_UClass_AMyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacter.OuterSingleton, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyCharacter.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<AMyCharacter>()
	{
		return AMyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
	AMyCharacter::~AMyCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacter, AMyCharacter::StaticClass, TEXT("AMyCharacter"), &Z_Registration_Info_UClass_AMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacter), 2245642569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_2183873008(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
