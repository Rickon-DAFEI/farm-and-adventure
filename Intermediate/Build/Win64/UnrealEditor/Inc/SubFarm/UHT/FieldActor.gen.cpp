// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/FieldActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SUBFARM_API UClass* Z_Construct_UClass_AFieldActor();
	SUBFARM_API UClass* Z_Construct_UClass_AFieldActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	DEFINE_FUNCTION(AFieldActor::execHarvest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Harvest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFieldActor::execGrowth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Growth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFieldActor::execBuyField)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuyField();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFieldActor::execClickFunction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CurrentTool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClickFunction(Z_Param_CurrentTool);
		P_NATIVE_END;
	}
	void AFieldActor::StaticRegisterNativesAFieldActor()
	{
		UClass* Class = AFieldActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuyField", &AFieldActor::execBuyField },
			{ "ClickFunction", &AFieldActor::execClickFunction },
			{ "Growth", &AFieldActor::execGrowth },
			{ "Harvest", &AFieldActor::execHarvest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFieldActor_BuyField_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFieldActor_BuyField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FieldActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFieldActor_BuyField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFieldActor, nullptr, "BuyField", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_BuyField_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFieldActor_BuyField_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFieldActor_BuyField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFieldActor_BuyField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFieldActor_ClickFunction_Statics
	{
		struct FieldActor_eventClickFunction_Parms
		{
			FString CurrentTool;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFieldActor_ClickFunction_Statics::NewProp_CurrentTool = { "CurrentTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldActor_eventClickFunction_Parms, CurrentTool), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFieldActor_ClickFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFieldActor_ClickFunction_Statics::NewProp_CurrentTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFieldActor_ClickFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FieldActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFieldActor_ClickFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFieldActor, nullptr, "ClickFunction", nullptr, nullptr, Z_Construct_UFunction_AFieldActor_ClickFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_ClickFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFieldActor_ClickFunction_Statics::FieldActor_eventClickFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_ClickFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFieldActor_ClickFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_ClickFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFieldActor_ClickFunction_Statics::FieldActor_eventClickFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFieldActor_ClickFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFieldActor_ClickFunction_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFieldActor_Harvest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FieldActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFieldActor_Harvest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFieldActor, nullptr, "Harvest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFieldActor_Harvest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFieldActor_Harvest_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFieldActor_Harvest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFieldActor_Harvest_Statics::FuncParams);
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFieldActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFieldActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFieldActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFieldActor_BuyField, "BuyField" }, // 2143471755
		{ &Z_Construct_UFunction_AFieldActor_ClickFunction, "ClickFunction" }, // 1011962261
		{ &Z_Construct_UFunction_AFieldActor_Growth, "Growth" }, // 3871956682
		{ &Z_Construct_UFunction_AFieldActor_Harvest, "Harvest" }, // 2302071424
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
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFieldActor_Statics::PropPointers),
		0,
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
		{ Z_Construct_UClass_AFieldActor, AFieldActor::StaticClass, TEXT("AFieldActor"), &Z_Registration_Info_UClass_AFieldActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFieldActor), 2619243932U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_FieldActor_h_1638291997(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_FieldActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_FieldActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
