// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/MyObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SUBFARM_API UClass* Z_Construct_UClass_UMyObject();
	SUBFARM_API UClass* Z_Construct_UClass_UMyObject_NoRegister();
	SUBFARM_API UScriptStruct* Z_Construct_UScriptStruct_FMyDataTableStruct();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References

static_assert(std::is_polymorphic<FMyDataTableStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMyDataTableStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyDataTableStruct;
class UScriptStruct* FMyDataTableStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyDataTableStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyDataTableStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyDataTableStruct, (UObject*)Z_Construct_UPackage__Script_SubFarm(), TEXT("MyDataTableStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MyDataTableStruct.OuterSingleton;
}
template<> SUBFARM_API UScriptStruct* StaticStruct<FMyDataTableStruct>()
{
	return FMyDataTableStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMyDataTableStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MyObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyDataTableStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "MyTestDataTableStruct" },
		{ "ModuleRelativePath", "Public/MyObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyDataTableStruct, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Health_MetaData), Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MyTestDataTableStruct" },
		{ "ModuleRelativePath", "Public/MyObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyDataTableStruct, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "MyTestDataTableStruct" },
		{ "ModuleRelativePath", "Public/MyObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyDataTableStruct, Level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Level_MetaData), Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Level_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Level,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MyDataTableStruct",
		Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::PropPointers),
		sizeof(FMyDataTableStruct),
		alignof(FMyDataTableStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMyDataTableStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_MyDataTableStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyDataTableStruct.InnerSingleton, Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MyDataTableStruct.InnerSingleton;
	}
	void UMyObject::StaticRegisterNativesUMyObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyObject);
	UClass* Z_Construct_UClass_UMyObject_NoRegister()
	{
		return UMyObject::StaticClass();
	}
	struct Z_Construct_UClass_UMyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyDataTableStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyDataTableStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyObject.h" },
		{ "ModuleRelativePath", "Public/MyObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyObject_Statics::NewProp_MyDataTableStruct_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyObject_Statics::NewProp_MyDataTableStruct = { "MyDataTableStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyObject, MyDataTableStruct), Z_Construct_UScriptStruct_FMyDataTableStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::NewProp_MyDataTableStruct_MetaData), Z_Construct_UClass_UMyObject_Statics::NewProp_MyDataTableStruct_MetaData) }; // 3579879503
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyObject_Statics::NewProp_MyDataTableStruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyObject_Statics::ClassParams = {
		&UMyObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyObject()
	{
		if (!Z_Registration_Info_UClass_UMyObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyObject.OuterSingleton, Z_Construct_UClass_UMyObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyObject.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<UMyObject>()
	{
		return UMyObject::StaticClass();
	}
	UMyObject::UMyObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyObject);
	UMyObject::~UMyObject() {}
	struct Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyObject_h_Statics::ScriptStructInfo[] = {
		{ FMyDataTableStruct::StaticStruct, Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewStructOps, TEXT("MyDataTableStruct"), &Z_Registration_Info_UScriptStruct_MyDataTableStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyDataTableStruct), 3579879503U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyObject, UMyObject::StaticClass, TEXT("UMyObject"), &Z_Registration_Info_UClass_UMyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyObject), 698931776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyObject_h_1940066044(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
