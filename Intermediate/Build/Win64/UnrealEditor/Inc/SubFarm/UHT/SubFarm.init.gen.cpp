// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubFarm_init() {}
	SUBFARM_API UFunction* Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SubFarm;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SubFarm()
	{
		if (!Z_Registration_Info_UPackage__Script_SubFarm.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SubFarm_DynamicMultiDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SubFarm",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7F76440C,
				0x0D83A3DD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SubFarm.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SubFarm.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SubFarm(Z_Construct_UPackage__Script_SubFarm, TEXT("/Script/SubFarm"), Z_Registration_Info_UPackage__Script_SubFarm, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7F76440C, 0x0D83A3DD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
