// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/FiledActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFiledActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SUBFARM_API UClass* Z_Construct_UClass_AFiledActor();
	SUBFARM_API UClass* Z_Construct_UClass_AFiledActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	DEFINE_FUNCTION(AFiledActor::execGrowth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Growth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFiledActor::execBuyFiled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuyFiled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFiledActor::execClickFunction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CurrentTool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClickFunction(Z_Param_CurrentTool);
		P_NATIVE_END;
	}
	void AFiledActor::StaticRegisterNativesAFiledActor()
	{
		UClass* Class = AFiledActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuyFiled", &AFiledActor::execBuyFiled },
			{ "ClickFunction", &AFiledActor::execClickFunction },
			{ "Growth", &AFiledActor::execGrowth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFiledActor_BuyFiled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFiledActor_BuyFiled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FiledActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFiledActor_BuyFiled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFiledActor, nullptr, "BuyFiled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFiledActor_BuyFiled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFiledActor_BuyFiled_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFiledActor_BuyFiled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFiledActor_BuyFiled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFiledActor_ClickFunction_Statics
	{
		struct FiledActor_eventClickFunction_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFiledActor_ClickFunction_Statics::NewProp_CurrentTool = { "CurrentTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FiledActor_eventClickFunction_Parms, CurrentTool), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFiledActor_ClickFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFiledActor_ClickFunction_Statics::NewProp_CurrentTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFiledActor_ClickFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FiledActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFiledActor_ClickFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFiledActor, nullptr, "ClickFunction", nullptr, nullptr, Z_Construct_UFunction_AFiledActor_ClickFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFiledActor_ClickFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFiledActor_ClickFunction_Statics::FiledActor_eventClickFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFiledActor_ClickFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFiledActor_ClickFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFiledActor_ClickFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFiledActor_ClickFunction_Statics::FiledActor_eventClickFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFiledActor_ClickFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFiledActor_ClickFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFiledActor_Growth_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFiledActor_Growth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FiledActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFiledActor_Growth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFiledActor, nullptr, "Growth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFiledActor_Growth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFiledActor_Growth_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFiledActor_Growth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFiledActor_Growth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFiledActor);
	UClass* Z_Construct_UClass_AFiledActor_NoRegister()
	{
		return AFiledActor::StaticClass();
	}
	struct Z_Construct_UClass_AFiledActor_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiledMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FiledMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlantMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlantMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFiledActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFiledActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFiledActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFiledActor_BuyFiled, "BuyFiled" }, // 1493840280
		{ &Z_Construct_UFunction_AFiledActor_ClickFunction, "ClickFunction" }, // 1436796326
		{ &Z_Construct_UFunction_AFiledActor_Growth, "Growth" }, // 4102071988
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFiledActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFiledActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FiledActor.h" },
		{ "ModuleRelativePath", "Public/FiledActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFiledActor_Statics::NewProp_MyScene_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FiledActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFiledActor_Statics::NewProp_MyScene = { "MyScene", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFiledActor, MyScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFiledActor_Statics::NewProp_MyScene_MetaData), Z_Construct_UClass_AFiledActor_Statics::NewProp_MyScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFiledActor_Statics::NewProp_FiledMesh_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FiledActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFiledActor_Statics::NewProp_FiledMesh = { "FiledMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFiledActor, FiledMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFiledActor_Statics::NewProp_FiledMesh_MetaData), Z_Construct_UClass_AFiledActor_Statics::NewProp_FiledMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFiledActor_Statics::NewProp_PlantMesh_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FiledActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFiledActor_Statics::NewProp_PlantMesh = { "PlantMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFiledActor, PlantMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFiledActor_Statics::NewProp_PlantMesh_MetaData), Z_Construct_UClass_AFiledActor_Statics::NewProp_PlantMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFiledActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFiledActor_Statics::NewProp_MyScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFiledActor_Statics::NewProp_FiledMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFiledActor_Statics::NewProp_PlantMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFiledActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFiledActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFiledActor_Statics::ClassParams = {
		&AFiledActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFiledActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFiledActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFiledActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFiledActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFiledActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFiledActor()
	{
		if (!Z_Registration_Info_UClass_AFiledActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFiledActor.OuterSingleton, Z_Construct_UClass_AFiledActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFiledActor.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<AFiledActor>()
	{
		return AFiledActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFiledActor);
	AFiledActor::~AFiledActor() {}
	struct Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_FiledActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_FiledActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFiledActor, AFiledActor::StaticClass, TEXT("AFiledActor"), &Z_Registration_Info_UClass_AFiledActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFiledActor), 2296998843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_FiledActor_h_768243117(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_FiledActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_FiledActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
