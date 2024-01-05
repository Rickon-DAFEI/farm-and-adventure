// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/MyPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawn() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	SUBFARM_API UClass* Z_Construct_UClass_AMyPawn();
	SUBFARM_API UClass* Z_Construct_UClass_AMyPawn_NoRegister();
	SUBFARM_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	SUBFARM_API UClass* Z_Construct_UClass_UMyObject_NoRegister();
	SUBFARM_API UEnum* Z_Construct_UEnum_SubFarm_EMyEnumType();
	SUBFARM_API UEnum* Z_Construct_UEnum_SubFarm_MyEnumType();
	SUBFARM_API UScriptStruct* Z_Construct_UScriptStruct_FMyTestStruct();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_MyEnumType;
	static UEnum* MyEnumType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_MyEnumType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_MyEnumType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubFarm_MyEnumType, (UObject*)Z_Construct_UPackage__Script_SubFarm(), TEXT("MyEnumType"));
		}
		return Z_Registration_Info_UEnum_MyEnumType.OuterSingleton;
	}
	template<> SUBFARM_API UEnum* StaticEnum<MyEnumType::MyCustomEnum>()
	{
		return MyEnumType_StaticEnum();
	}
	struct Z_Construct_UEnum_SubFarm_MyEnumType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SubFarm_MyEnumType_Statics::Enumerators[] = {
		{ "MyEnumType::Type1", (int64)MyEnumType::Type1 },
		{ "MyEnumType::Type2", (int64)MyEnumType::Type2 },
		{ "MyEnumType::Type3", (int64)MyEnumType::Type3 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SubFarm_MyEnumType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
		{ "Type1.Name", "MyEnumType::Type1" },
		{ "Type2.Name", "MyEnumType::Type2" },
		{ "Type3.Name", "MyEnumType::Type3" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubFarm_MyEnumType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SubFarm,
		nullptr,
		"MyEnumType",
		"MyEnumType::MyCustomEnum",
		Z_Construct_UEnum_SubFarm_MyEnumType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SubFarm_MyEnumType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SubFarm_MyEnumType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SubFarm_MyEnumType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SubFarm_MyEnumType()
	{
		if (!Z_Registration_Info_UEnum_MyEnumType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_MyEnumType.InnerSingleton, Z_Construct_UEnum_SubFarm_MyEnumType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_MyEnumType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMyEnumType;
	static UEnum* EMyEnumType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMyEnumType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMyEnumType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubFarm_EMyEnumType, (UObject*)Z_Construct_UPackage__Script_SubFarm(), TEXT("EMyEnumType"));
		}
		return Z_Registration_Info_UEnum_EMyEnumType.OuterSingleton;
	}
	template<> SUBFARM_API UEnum* StaticEnum<EMyEnumType>()
	{
		return EMyEnumType_StaticEnum();
	}
	struct Z_Construct_UEnum_SubFarm_EMyEnumType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SubFarm_EMyEnumType_Statics::Enumerators[] = {
		{ "EMyEnumType::OneType", (int64)EMyEnumType::OneType },
		{ "EMyEnumType::TwoType", (int64)EMyEnumType::TwoType },
		{ "EMyEnumType::ThreeType", (int64)EMyEnumType::ThreeType },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SubFarm_EMyEnumType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
		{ "OneType.DisplayName", "OneType" },
		{ "OneType.Name", "EMyEnumType::OneType" },
		{ "ThreeType.DisplayName", "ThreeType" },
		{ "ThreeType.Name", "EMyEnumType::ThreeType" },
		{ "TwoType.DisplayName", "TwoType" },
		{ "TwoType.Name", "EMyEnumType::TwoType" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubFarm_EMyEnumType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SubFarm,
		nullptr,
		"EMyEnumType",
		"EMyEnumType",
		Z_Construct_UEnum_SubFarm_EMyEnumType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SubFarm_EMyEnumType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SubFarm_EMyEnumType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SubFarm_EMyEnumType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SubFarm_EMyEnumType()
	{
		if (!Z_Registration_Info_UEnum_EMyEnumType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMyEnumType.InnerSingleton, Z_Construct_UEnum_SubFarm_EMyEnumType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMyEnumType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyTestStruct;
class UScriptStruct* FMyTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyTestStruct, (UObject*)Z_Construct_UPackage__Script_SubFarm(), TEXT("MyTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MyTestStruct.OuterSingleton;
}
template<> SUBFARM_API UScriptStruct* StaticStruct<FMyTestStruct>()
{
	return FMyTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMyTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyTestStruct_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "MyTestStruct" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyTestStruct_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyTestStruct, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyTestStruct_Statics::NewProp_Health_MetaData), Z_Construct_UScriptStruct_FMyTestStruct_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyTestStruct_Statics::NewProp_MyName_MetaData[] = {
		{ "Category", "MyTestStruct" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyTestStruct_Statics::NewProp_MyName = { "MyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyTestStruct, MyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyTestStruct_Statics::NewProp_MyName_MetaData), Z_Construct_UScriptStruct_FMyTestStruct_Statics::NewProp_MyName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyTestStruct_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyTestStruct_Statics::NewProp_MyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
		nullptr,
		&NewStructOps,
		"MyTestStruct",
		Z_Construct_UScriptStruct_FMyTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyTestStruct_Statics::PropPointers),
		sizeof(FMyTestStruct),
		alignof(FMyTestStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyTestStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyTestStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyTestStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMyTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_MyTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FMyTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MyTestStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(AMyPawn::execPrintTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintTest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawn::execTestD)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MyString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->TestD_Implementation(Z_Param_MyString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawn::execTestC)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MyString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestC_Implementation(Z_Param_MyString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawn::execTestB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->TestB_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawn::execTestA)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestA_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawn::execPrintF2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PrintF2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawn::execPrintF1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintF1();
		P_NATIVE_END;
	}
	struct MyPawn_eventTest11_Parms
	{
		FString MyString;
	};
	struct MyPawn_eventTest2_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		MyPawn_eventTest2_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct MyPawn_eventTest22_Parms
	{
		FString MyString;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		MyPawn_eventTest22_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct MyPawn_eventTestB_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		MyPawn_eventTestB_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct MyPawn_eventTestC_Parms
	{
		FString MyString;
	};
	struct MyPawn_eventTestD_Parms
	{
		FString MyString;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		MyPawn_eventTestD_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_AMyPawn_Test1 = FName(TEXT("Test1"));
	void AMyPawn::Test1()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyPawn_Test1),NULL);
	}
	static FName NAME_AMyPawn_Test11 = FName(TEXT("Test11"));
	void AMyPawn::Test11(const FString& MyString)
	{
		MyPawn_eventTest11_Parms Parms;
		Parms.MyString=MyString;
		ProcessEvent(FindFunctionChecked(NAME_AMyPawn_Test11),&Parms);
	}
	static FName NAME_AMyPawn_Test2 = FName(TEXT("Test2"));
	int32 AMyPawn::Test2()
	{
		MyPawn_eventTest2_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AMyPawn_Test2),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMyPawn_Test22 = FName(TEXT("Test22"));
	int32 AMyPawn::Test22(const FString& MyString)
	{
		MyPawn_eventTest22_Parms Parms;
		Parms.MyString=MyString;
		ProcessEvent(FindFunctionChecked(NAME_AMyPawn_Test22),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMyPawn_TestA = FName(TEXT("TestA"));
	void AMyPawn::TestA()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyPawn_TestA),NULL);
	}
	static FName NAME_AMyPawn_TestB = FName(TEXT("TestB"));
	int32 AMyPawn::TestB()
	{
		MyPawn_eventTestB_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AMyPawn_TestB),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMyPawn_TestC = FName(TEXT("TestC"));
	void AMyPawn::TestC(const FString& MyString)
	{
		MyPawn_eventTestC_Parms Parms;
		Parms.MyString=MyString;
		ProcessEvent(FindFunctionChecked(NAME_AMyPawn_TestC),&Parms);
	}
	static FName NAME_AMyPawn_TestD = FName(TEXT("TestD"));
	int32 AMyPawn::TestD(const FString& MyString)
	{
		MyPawn_eventTestD_Parms Parms;
		Parms.MyString=MyString;
		ProcessEvent(FindFunctionChecked(NAME_AMyPawn_TestD),&Parms);
		return Parms.ReturnValue;
	}
	void AMyPawn::StaticRegisterNativesAMyPawn()
	{
		UClass* Class = AMyPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrintF1", &AMyPawn::execPrintF1 },
			{ "PrintF2", &AMyPawn::execPrintF2 },
			{ "PrintTest", &AMyPawn::execPrintTest },
			{ "TestA", &AMyPawn::execTestA },
			{ "TestB", &AMyPawn::execTestB },
			{ "TestC", &AMyPawn::execTestC },
			{ "TestD", &AMyPawn::execTestD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPawn_PrintF1_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_PrintF1_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyFunction" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_PrintF1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "PrintF1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_PrintF1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_PrintF1_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyPawn_PrintF1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_PrintF1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_PrintF2_Statics
	{
		struct MyPawn_eventPrintF2_Parms
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
	void Z_Construct_UFunction_AMyPawn_PrintF2_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyPawn_eventPrintF2_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyPawn_PrintF2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyPawn_eventPrintF2_Parms), &Z_Construct_UFunction_AMyPawn_PrintF2_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_PrintF2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_PrintF2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_PrintF2_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// virtual function BluePrintPure\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "virtual function BluePrintPure" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_PrintF2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "PrintF2", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_PrintF2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_PrintF2_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_PrintF2_Statics::MyPawn_eventPrintF2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_PrintF2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_PrintF2_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_PrintF2_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyPawn_PrintF2_Statics::MyPawn_eventPrintF2_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyPawn_PrintF2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_PrintF2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_PrintTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_PrintTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//meta \n" },
#endif
		{ "DisplayName", "MyPrintTest" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "meta" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_PrintTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "PrintTest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_PrintTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_PrintTest_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyPawn_PrintTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_PrintTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_Test1_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_Test1_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintimplementableEvent\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintimplementableEvent" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_Test1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "Test1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_Test1_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyPawn_Test1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_Test1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_Test11_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MyString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_Test11_Statics::NewProp_MyString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyPawn_Test11_Statics::NewProp_MyString = { "MyString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventTest11_Parms, MyString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test11_Statics::NewProp_MyString_MetaData), Z_Construct_UFunction_AMyPawn_Test11_Statics::NewProp_MyString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_Test11_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_Test11_Statics::NewProp_MyString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_Test11_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_Test11_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "Test11", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_Test11_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test11_Statics::PropPointers), sizeof(MyPawn_eventTest11_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test11_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_Test11_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test11_Statics::PropPointers) < 2048);
	static_assert(sizeof(MyPawn_eventTest11_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyPawn_Test11()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_Test11_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_Test2_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPawn_Test2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventTest2_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_Test2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_Test2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_Test2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_Test2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "Test2", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_Test2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test2_Statics::PropPointers), sizeof(MyPawn_eventTest2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_Test2_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test2_Statics::PropPointers) < 2048);
	static_assert(sizeof(MyPawn_eventTest2_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyPawn_Test2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_Test2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_Test22_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MyString;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_Test22_Statics::NewProp_MyString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyPawn_Test22_Statics::NewProp_MyString = { "MyString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventTest22_Parms, MyString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test22_Statics::NewProp_MyString_MetaData), Z_Construct_UFunction_AMyPawn_Test22_Statics::NewProp_MyString_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPawn_Test22_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventTest22_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_Test22_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_Test22_Statics::NewProp_MyString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_Test22_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_Test22_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_Test22_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "Test22", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_Test22_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test22_Statics::PropPointers), sizeof(MyPawn_eventTest22_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test22_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_Test22_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test22_Statics::PropPointers) < 2048);
	static_assert(sizeof(MyPawn_eventTest22_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyPawn_Test22()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_Test22_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_TestA_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_TestA_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintNativeEvent blueprint can overwrite or not\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintNativeEvent blueprint can overwrite or not" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_TestA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "TestA", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestA_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_TestA_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyPawn_TestA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_TestA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_TestB_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPawn_TestB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventTestB_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_TestB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_TestB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_TestB_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintNativeEvent blueprint can overwrite or not\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintNativeEvent blueprint can overwrite or not" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_TestB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "TestB", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_TestB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestB_Statics::PropPointers), sizeof(MyPawn_eventTestB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestB_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_TestB_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestB_Statics::PropPointers) < 2048);
	static_assert(sizeof(MyPawn_eventTestB_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyPawn_TestB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_TestB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_TestC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MyString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_TestC_Statics::NewProp_MyString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyPawn_TestC_Statics::NewProp_MyString = { "MyString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventTestC_Parms, MyString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestC_Statics::NewProp_MyString_MetaData), Z_Construct_UFunction_AMyPawn_TestC_Statics::NewProp_MyString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_TestC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_TestC_Statics::NewProp_MyString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_TestC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_TestC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "TestC", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_TestC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestC_Statics::PropPointers), sizeof(MyPawn_eventTestC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_TestC_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestC_Statics::PropPointers) < 2048);
	static_assert(sizeof(MyPawn_eventTestC_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyPawn_TestC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_TestC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_TestD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MyString;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_TestD_Statics::NewProp_MyString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyPawn_TestD_Statics::NewProp_MyString = { "MyString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventTestD_Parms, MyString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestD_Statics::NewProp_MyString_MetaData), Z_Construct_UFunction_AMyPawn_TestD_Statics::NewProp_MyString_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPawn_TestD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventTestD_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_TestD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_TestD_Statics::NewProp_MyString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_TestD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_TestD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_TestD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "TestD", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_TestD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestD_Statics::PropPointers), sizeof(MyPawn_eventTestD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestD_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_TestD_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestD_Statics::PropPointers) < 2048);
	static_assert(sizeof(MyPawn_eventTestD_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyPawn_TestD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_TestD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPawn);
	UClass* Z_Construct_UClass_AMyPawn_NoRegister()
	{
		return AMyPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleDefaultsOnlyInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VisibleDefaultsOnlyInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleInstranceString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VisibleInstranceString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleAnywhereVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisibleAnywhereVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditDefaultsOnlyInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EditDefaultsOnlyInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditInstanceOnlyString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EditInstanceOnlyString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditAnywhereVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditAnywhereVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintReadOnlyInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlueprintReadOnlyInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintReadWriteInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlueprintReadWriteInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value1_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value2_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyValue3_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MyValue3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isController_MetaData[];
#endif
		static void NewProp_isController_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value3_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isTrue_MetaData[];
#endif
		static void NewProp_isTrue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isTrue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCustomEnum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MyCustomEnum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCustomeStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyCustomeStruct;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MyCustom1_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCustom1_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MyCustom1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MyHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTestObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyTestObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MySpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MySpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPawn_PrintF1, "PrintF1" }, // 2240422831
		{ &Z_Construct_UFunction_AMyPawn_PrintF2, "PrintF2" }, // 3575616449
		{ &Z_Construct_UFunction_AMyPawn_PrintTest, "PrintTest" }, // 1351179813
		{ &Z_Construct_UFunction_AMyPawn_Test1, "Test1" }, // 2672269280
		{ &Z_Construct_UFunction_AMyPawn_Test11, "Test11" }, // 3692417439
		{ &Z_Construct_UFunction_AMyPawn_Test2, "Test2" }, // 830393622
		{ &Z_Construct_UFunction_AMyPawn_Test22, "Test22" }, // 3971154985
		{ &Z_Construct_UFunction_AMyPawn_TestA, "TestA" }, // 672113189
		{ &Z_Construct_UFunction_AMyPawn_TestB, "TestB" }, // 649271586
		{ &Z_Construct_UFunction_AMyPawn_TestC, "TestC" }, // 3305173866
		{ &Z_Construct_UFunction_AMyPawn_TestD, "TestD" }, // 3830738363
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPawn.h" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleDefaultsOnlyInt_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// only visible in default setting\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "only visible in default setting" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleDefaultsOnlyInt = { "VisibleDefaultsOnlyInt", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, VisibleDefaultsOnlyInt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleDefaultsOnlyInt_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleDefaultsOnlyInt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleInstranceString_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// only visible in instance detail \n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "only visible in instance detail" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleInstranceString = { "VisibleInstranceString", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, VisibleInstranceString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleInstranceString_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleInstranceString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleAnywhereVector_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// only visible in instance detail \n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "only visible in instance detail" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleAnywhereVector = { "VisibleAnywhereVector", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, VisibleAnywhereVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleAnywhereVector_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleAnywhereVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_EditDefaultsOnlyInt_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//edit default setting\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "edit default setting" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_EditDefaultsOnlyInt = { "EditDefaultsOnlyInt", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, EditDefaultsOnlyInt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_EditDefaultsOnlyInt_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_EditDefaultsOnlyInt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_EditInstanceOnlyString_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//edit default setting\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "edit default setting" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_EditInstanceOnlyString = { "EditInstanceOnlyString", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, EditInstanceOnlyString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_EditInstanceOnlyString_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_EditInstanceOnlyString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_EditAnywhereVector_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_EditAnywhereVector = { "EditAnywhereVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, EditAnywhereVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_EditAnywhereVector_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_EditAnywhereVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_BlueprintReadOnlyInt_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_BlueprintReadOnlyInt = { "BlueprintReadOnlyInt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, BlueprintReadOnlyInt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_BlueprintReadOnlyInt_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_BlueprintReadOnlyInt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_BlueprintReadWriteInt_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_BlueprintReadWriteInt = { "BlueprintReadWriteInt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, BlueprintReadWriteInt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_BlueprintReadWriteInt_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_BlueprintReadWriteInt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_Value1_MetaData[] = {
		{ "Category", "MyIntValue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Category\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Category" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_Value1 = { "Value1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, Value1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_Value1_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_Value1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_Value2_MetaData[] = {
		{ "Category", "MyIntValue|MySubIntValue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Category\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Category" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_Value2 = { "Value2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, Value2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_Value2_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_Value2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_MyValue3_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// meta\n// DisplayName\n" },
#endif
		{ "DisplayName", "MyValue3DisplayName" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "meta\nDisplayName" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyValue3 = { "MyValue3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyValue3), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_MyValue3_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_MyValue3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_isController_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "DisplayName", "MyController" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Controller of value3" },
#endif
	};
#endif
	void Z_Construct_UClass_AMyPawn_Statics::NewProp_isController_SetBit(void* Obj)
	{
		((AMyPawn*)Obj)->isController = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_isController = { "isController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPawn), &Z_Construct_UClass_AMyPawn_Statics::NewProp_isController_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_isController_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_isController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_value3_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "EditCondition", "isController" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_value3 = { "value3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, value3), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_value3_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_value3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_isTrue_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "isControllerTrue" },
#endif
	};
#endif
	void Z_Construct_UClass_AMyPawn_Statics::NewProp_isTrue_SetBit(void* Obj)
	{
		((AMyPawn*)Obj)->isTrue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_isTrue = { "isTrue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPawn), &Z_Construct_UClass_AMyPawn_Statics::NewProp_isTrue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_isTrue_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_isTrue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustomEnum_MetaData[] = {
		{ "Category", "MyEnum" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustomEnum = { "MyCustomEnum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyCustomEnum), Z_Construct_UEnum_SubFarm_MyEnumType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustomEnum_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustomEnum_MetaData) }; // 2631697124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustomeStruct_MetaData[] = {
		{ "Category", "MyCustomStruct" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustomeStruct = { "MyCustomeStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyCustomeStruct), Z_Construct_UScriptStruct_FMyTestStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustomeStruct_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustomeStruct_MetaData) }; // 3999909366
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustom1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustom1_MetaData[] = {
		{ "Category", "MyEnum" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustom1 = { "MyCustom1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyCustom1), Z_Construct_UEnum_SubFarm_EMyEnumType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustom1_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustom1_MetaData) }; // 3770400874
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_MyHealth_MetaData[] = {
		{ "Category", "MyExposeOnSpawn" },
		{ "ExposeOnSpawn", "ExposeOnSpawnValue" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyHealth = { "MyHealth", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_MyHealth_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_MyHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_MyTestObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyTestObject = { "MyTestObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyTestObject), Z_Construct_UClass_UMyObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_MyTestObject_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_MyTestObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_MyInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyInstance = { "MyInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyInstance), Z_Construct_UClass_UMyGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_MyInstance_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_MyInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_MyRoot_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyRoot = { "MyRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_MyRoot_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_MyRoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_MySpringArm_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MySpringArm = { "MySpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MySpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_MySpringArm_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_MySpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCamera_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCamera = { "MyCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCamera_MetaData), Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCamera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleDefaultsOnlyInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleInstranceString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleAnywhereVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_EditDefaultsOnlyInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_EditInstanceOnlyString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_EditAnywhereVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_BlueprintReadOnlyInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_BlueprintReadWriteInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_Value1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_Value2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyValue3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_isController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_value3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_isTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustomEnum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustomeStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustom1_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCustom1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyTestObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MySpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPawn_Statics::ClassParams = {
		&AMyPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyPawn()
	{
		if (!Z_Registration_Info_UClass_AMyPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPawn.OuterSingleton, Z_Construct_UClass_AMyPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPawn.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<AMyPawn>()
	{
		return AMyPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn);
	AMyPawn::~AMyPawn() {}
	struct Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPawn_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPawn_h_Statics::EnumInfo[] = {
		{ MyEnumType_StaticEnum, TEXT("MyEnumType"), &Z_Registration_Info_UEnum_MyEnumType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2631697124U) },
		{ EMyEnumType_StaticEnum, TEXT("EMyEnumType"), &Z_Registration_Info_UEnum_EMyEnumType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3770400874U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPawn_h_Statics::ScriptStructInfo[] = {
		{ FMyTestStruct::StaticStruct, Z_Construct_UScriptStruct_FMyTestStruct_Statics::NewStructOps, TEXT("MyTestStruct"), &Z_Registration_Info_UScriptStruct_MyTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyTestStruct), 3999909366U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPawn, AMyPawn::StaticClass, TEXT("AMyPawn"), &Z_Registration_Info_UClass_AMyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPawn), 1097333851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPawn_h_2669458059(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPawn_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPawn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPawn_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPawn_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyPawn_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
