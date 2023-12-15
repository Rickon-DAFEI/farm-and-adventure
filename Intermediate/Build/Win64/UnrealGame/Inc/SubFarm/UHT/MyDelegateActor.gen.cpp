// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/MyDelegateActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDelegateActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SUBFARM_API UClass* Z_Construct_UClass_AMyDelegateActor();
	SUBFARM_API UClass* Z_Construct_UClass_AMyDelegateActor_NoRegister();
	SUBFARM_API UFunction* Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature_Statics
	{
		struct _Script_SubFarm_eventDynamicMultiDelegate_Parms
		{
			FString param;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_param;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature_Statics::NewProp_param = { "param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SubFarm_eventDynamicMultiDelegate_Parms, param), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature_Statics::NewProp_param,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyDelegateActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SubFarm, nullptr, "DynamicMultiDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature_Statics::_Script_SubFarm_eventDynamicMultiDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature_Statics::_Script_SubFarm_eventDynamicMultiDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDynamicMultiDelegate_DelegateWrapper(const FMulticastScriptDelegate& DynamicMultiDelegate, const FString& param)
{
	struct _Script_SubFarm_eventDynamicMultiDelegate_Parms
	{
		FString param;
	};
	_Script_SubFarm_eventDynamicMultiDelegate_Parms Parms;
	Parms.param=param;
	DynamicMultiDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AMyDelegateActor::execMultiFunctionThird)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_str);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MultiFunctionThird(Z_Param_str);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyDelegateActor::execMultiFunctionSecond)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_str);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MultiFunctionSecond(Z_Param_str);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyDelegateActor::execMultiFunctionFirst)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_str);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MultiFunctionFirst(Z_Param_str);
		P_NATIVE_END;
	}
	void AMyDelegateActor::StaticRegisterNativesAMyDelegateActor()
	{
		UClass* Class = AMyDelegateActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MultiFunctionFirst", &AMyDelegateActor::execMultiFunctionFirst },
			{ "MultiFunctionSecond", &AMyDelegateActor::execMultiFunctionSecond },
			{ "MultiFunctionThird", &AMyDelegateActor::execMultiFunctionThird },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst_Statics
	{
		struct MyDelegateActor_eventMultiFunctionFirst_Parms
		{
			FString str;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_str;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyDelegateActor_eventMultiFunctionFirst_Parms, str), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst_Statics::NewProp_str,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyDelegateActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyDelegateActor, nullptr, "MultiFunctionFirst", nullptr, nullptr, Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst_Statics::MyDelegateActor_eventMultiFunctionFirst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst_Statics::MyDelegateActor_eventMultiFunctionFirst_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond_Statics
	{
		struct MyDelegateActor_eventMultiFunctionSecond_Parms
		{
			FString str;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_str;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyDelegateActor_eventMultiFunctionSecond_Parms, str), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond_Statics::NewProp_str,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyDelegateActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyDelegateActor, nullptr, "MultiFunctionSecond", nullptr, nullptr, Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond_Statics::MyDelegateActor_eventMultiFunctionSecond_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond_Statics::MyDelegateActor_eventMultiFunctionSecond_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird_Statics
	{
		struct MyDelegateActor_eventMultiFunctionThird_Parms
		{
			FString str;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_str;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyDelegateActor_eventMultiFunctionThird_Parms, str), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird_Statics::NewProp_str,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyDelegateActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyDelegateActor, nullptr, "MultiFunctionThird", nullptr, nullptr, Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird_Statics::MyDelegateActor_eventMultiFunctionThird_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird_Statics::MyDelegateActor_eventMultiFunctionThird_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyDelegateActor);
	UClass* Z_Construct_UClass_AMyDelegateActor_NoRegister()
	{
		return AMyDelegateActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyDelegateActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMultiDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DynamicMultiDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyDelegateActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDelegateActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyDelegateActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyDelegateActor_MultiFunctionFirst, "MultiFunctionFirst" }, // 1896616463
		{ &Z_Construct_UFunction_AMyDelegateActor_MultiFunctionSecond, "MultiFunctionSecond" }, // 3849757821
		{ &Z_Construct_UFunction_AMyDelegateActor_MultiFunctionThird, "MultiFunctionThird" }, // 3841413311
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDelegateActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDelegateActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyDelegateActor.h" },
		{ "ModuleRelativePath", "Public/MyDelegateActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDelegateActor_Statics::NewProp_DynamicMultiDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyDelegateActor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMyDelegateActor_Statics::NewProp_DynamicMultiDelegate = { "DynamicMultiDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDelegateActor, DynamicMultiDelegate), Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDelegateActor_Statics::NewProp_DynamicMultiDelegate_MetaData), Z_Construct_UClass_AMyDelegateActor_Statics::NewProp_DynamicMultiDelegate_MetaData) }; // 475248130
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyDelegateActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDelegateActor_Statics::NewProp_DynamicMultiDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyDelegateActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyDelegateActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyDelegateActor_Statics::ClassParams = {
		&AMyDelegateActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyDelegateActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyDelegateActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDelegateActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyDelegateActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDelegateActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyDelegateActor()
	{
		if (!Z_Registration_Info_UClass_AMyDelegateActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyDelegateActor.OuterSingleton, Z_Construct_UClass_AMyDelegateActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyDelegateActor.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<AMyDelegateActor>()
	{
		return AMyDelegateActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDelegateActor);
	AMyDelegateActor::~AMyDelegateActor() {}
	struct Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyDelegateActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyDelegateActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyDelegateActor, AMyDelegateActor::StaticClass, TEXT("AMyDelegateActor"), &Z_Registration_Info_UClass_AMyDelegateActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyDelegateActor), 603411819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyDelegateActor_h_3772508814(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyDelegateActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_farm_and_advanture_Source_SubFarm_Public_MyDelegateActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
