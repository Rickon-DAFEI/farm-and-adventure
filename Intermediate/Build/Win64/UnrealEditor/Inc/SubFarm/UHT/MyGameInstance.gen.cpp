// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/MyGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	SUBFARM_API UClass* Z_Construct_UClass_UMyGameInstance();
	SUBFARM_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstance);
	UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
	{
		return UMyGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyAppID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MyAppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyUserID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MyUserID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyAppID_MetaData[] = {
		{ "Category", "MyInstance" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyAppID = { "MyAppID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, MyAppID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyAppID_MetaData), Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyAppID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyUserID_MetaData[] = {
		{ "Category", "MyInstance" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyUserID = { "MyUserID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, MyUserID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyUserID_MetaData), Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyUserID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyName_MetaData[] = {
		{ "Category", "MyInstance" },
		{ "ModuleRelativePath", "Public/MyGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyName = { "MyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, MyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyName_MetaData), Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyUserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
		&UMyGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyGameInstance()
	{
		if (!Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<UMyGameInstance>()
	{
		return UMyGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
	UMyGameInstance::~UMyGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstance, UMyGameInstance::StaticClass, TEXT("UMyGameInstance"), &Z_Registration_Info_UClass_UMyGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstance), 2861550206U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyGameInstance_h_2241908428(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
