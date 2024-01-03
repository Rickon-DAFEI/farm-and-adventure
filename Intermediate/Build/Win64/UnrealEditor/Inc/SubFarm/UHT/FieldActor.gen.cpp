// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/FieldActor.h"
#include "SubFarm/Public/MyItemObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SUBFARM_API UClass* Z_Construct_UClass_AFieldActor();
	SUBFARM_API UClass* Z_Construct_UClass_AFieldActor_NoRegister();
	SUBFARM_API UClass* Z_Construct_UClass_UMyInterface_NoRegister();
	SUBFARM_API UScriptStruct* Z_Construct_UScriptStruct_FOutcomeStruct();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	DEFINE_FUNCTION(AFieldActor::execCheckCanHarvest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCanHarvest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFieldActor::execCheckHasPlant)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckHasPlant();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFieldActor::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFieldActor::execHarvest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOutcomeStruct>*)Z_Param__Result=P_THIS->Harvest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFieldActor::execGrowth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Growth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFieldActor::execPlant)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_HashIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Plant(Z_Param_HashIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFieldActor::execBuyField)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->BuyField();
		P_NATIVE_END;
	}
	void AFieldActor::StaticRegisterNativesAFieldActor()
	{
		UClass* Class = AFieldActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuyField", &AFieldActor::execBuyField },
			{ "CheckCanHarvest", &AFieldActor::execCheckCanHarvest },
			{ "CheckHasPlant", &AFieldActor::execCheckHasPlant },
			{ "GetState", &AFieldActor::execGetState },
			{ "Growth", &AFieldActor::execGrowth },
			{ "Harvest", &AFieldActor::execHarvest },
			{ "Plant", &AFieldActor::execPlant },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFieldActor_BuyField_Statics
	{
		struct FieldActor_eventBuyField_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFieldActor_BuyField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldActor_eventBuyField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFieldActor_BuyField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFieldActor_BuyField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFieldActor_BuyField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FieldActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFieldActor_BuyField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFieldActor, nullptr, "BuyField", nullptr, nullptr, Z_Construct_UFunction_AFieldActor_BuyField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_BuyField_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFieldActor_BuyField_Statics::FieldActor_eventBuyField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_BuyField_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFieldActor_BuyField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_BuyField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFieldActor_BuyField_Statics::FieldActor_eventBuyField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFieldActor_BuyField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFieldActor_BuyField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics
	{
		struct FieldActor_eventCheckCanHarvest_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FieldActor_eventCheckCanHarvest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldActor_eventCheckCanHarvest_Parms), &Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FieldActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFieldActor, nullptr, "CheckCanHarvest", nullptr, nullptr, Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::FieldActor_eventCheckCanHarvest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::FieldActor_eventCheckCanHarvest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFieldActor_CheckCanHarvest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFieldActor_CheckCanHarvest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics
	{
		struct FieldActor_eventCheckHasPlant_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FieldActor_eventCheckHasPlant_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldActor_eventCheckHasPlant_Parms), &Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FieldActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFieldActor, nullptr, "CheckHasPlant", nullptr, nullptr, Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::FieldActor_eventCheckHasPlant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::FieldActor_eventCheckHasPlant_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFieldActor_CheckHasPlant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFieldActor_CheckHasPlant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFieldActor_GetState_Statics
	{
		struct FieldActor_eventGetState_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFieldActor_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldActor_eventGetState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFieldActor_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFieldActor_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFieldActor_GetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FieldActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFieldActor_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFieldActor, nullptr, "GetState", nullptr, nullptr, Z_Construct_UFunction_AFieldActor_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_GetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFieldActor_GetState_Statics::FieldActor_eventGetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFieldActor_GetState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_GetState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFieldActor_GetState_Statics::FieldActor_eventGetState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFieldActor_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFieldActor_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFieldActor_Growth_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFieldActor_Growth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FieldActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFieldActor_Growth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFieldActor, nullptr, "Growth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_Growth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFieldActor_Growth_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFieldActor_Growth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFieldActor_Growth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFieldActor_Harvest_Statics
	{
		struct FieldActor_eventHarvest_Parms
		{
			TArray<FOutcomeStruct> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFieldActor_Harvest_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOutcomeStruct, METADATA_PARAMS(0, nullptr) }; // 505815615
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFieldActor_Harvest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldActor_eventHarvest_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 505815615
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFieldActor_Harvest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFieldActor_Harvest_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFieldActor_Harvest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFieldActor_Harvest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FieldActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFieldActor_Harvest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFieldActor, nullptr, "Harvest", nullptr, nullptr, Z_Construct_UFunction_AFieldActor_Harvest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_Harvest_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFieldActor_Harvest_Statics::FieldActor_eventHarvest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_Harvest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFieldActor_Harvest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_Harvest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFieldActor_Harvest_Statics::FieldActor_eventHarvest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFieldActor_Harvest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFieldActor_Harvest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFieldActor_Plant_Statics
	{
		struct FieldActor_eventPlant_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFieldActor_Plant_Statics::NewProp_HashIndex = { "HashIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldActor_eventPlant_Parms, HashIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFieldActor_Plant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFieldActor_Plant_Statics::NewProp_HashIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFieldActor_Plant_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//void PlantTomato();\n" },
#endif
		{ "ModuleRelativePath", "Public/FieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "void PlantTomato();" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFieldActor_Plant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFieldActor, nullptr, "Plant", nullptr, nullptr, Z_Construct_UFunction_AFieldActor_Plant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_Plant_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFieldActor_Plant_Statics::FieldActor_eventPlant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_Plant_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFieldActor_Plant_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_Plant_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFieldActor_Plant_Statics::FieldActor_eventPlant_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFieldActor_Plant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFieldActor_Plant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFieldActor);
	UClass* Z_Construct_UClass_AFieldActor_NoRegister()
	{
		return AFieldActor::StaticClass();
	}
	struct Z_Construct_UClass_AFieldActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FieldMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlantMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlantMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFieldActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFieldActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFieldActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFieldActor_BuyField, "BuyField" }, // 4221596185
		{ &Z_Construct_UFunction_AFieldActor_CheckCanHarvest, "CheckCanHarvest" }, // 2258740047
		{ &Z_Construct_UFunction_AFieldActor_CheckHasPlant, "CheckHasPlant" }, // 780961622
		{ &Z_Construct_UFunction_AFieldActor_GetState, "GetState" }, // 1275319023
		{ &Z_Construct_UFunction_AFieldActor_Growth, "Growth" }, // 3871956682
		{ &Z_Construct_UFunction_AFieldActor_Harvest, "Harvest" }, // 2091654410
		{ &Z_Construct_UFunction_AFieldActor_Plant, "Plant" }, // 664384533
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFieldActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFieldActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FieldActor.h" },
		{ "ModuleRelativePath", "Public/FieldActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFieldActor_Statics::NewProp_MyScene_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FieldActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFieldActor_Statics::NewProp_MyScene = { "MyScene", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFieldActor, MyScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFieldActor_Statics::NewProp_MyScene_MetaData), Z_Construct_UClass_AFieldActor_Statics::NewProp_MyScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFieldActor_Statics::NewProp_FieldMesh_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FieldActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFieldActor_Statics::NewProp_FieldMesh = { "FieldMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFieldActor, FieldMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFieldActor_Statics::NewProp_FieldMesh_MetaData), Z_Construct_UClass_AFieldActor_Statics::NewProp_FieldMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFieldActor_Statics::NewProp_PlantMesh_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FieldActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFieldActor_Statics::NewProp_PlantMesh = { "PlantMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFieldActor, PlantMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFieldActor_Statics::NewProp_PlantMesh_MetaData), Z_Construct_UClass_AFieldActor_Statics::NewProp_PlantMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFieldActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFieldActor_Statics::NewProp_MyScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFieldActor_Statics::NewProp_FieldMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFieldActor_Statics::NewProp_PlantMesh,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFieldActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMyInterface_NoRegister, (int32)VTABLE_OFFSET(AFieldActor, IMyInterface), false },  // 3521627962
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFieldActor_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFieldActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFieldActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFieldActor_Statics::ClassParams = {
		&AFieldActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFieldActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFieldActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFieldActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFieldActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFieldActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFieldActor()
	{
		if (!Z_Registration_Info_UClass_AFieldActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFieldActor.OuterSingleton, Z_Construct_UClass_AFieldActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFieldActor.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<AFieldActor>()
	{
		return AFieldActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFieldActor);
	AFieldActor::~AFieldActor() {}
	struct Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_FieldActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_FieldActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFieldActor, AFieldActor::StaticClass, TEXT("AFieldActor"), &Z_Registration_Info_UClass_AFieldActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFieldActor), 4005142444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_FieldActor_h_1352492881(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_FieldActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_FieldActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
