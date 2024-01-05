// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubFarm/Public/MyTimeLineActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTimeLineActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SUBFARM_API UClass* Z_Construct_UClass_AMyTimeLineActor();
	SUBFARM_API UClass* Z_Construct_UClass_AMyTimeLineActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SubFarm();
// End Cross Module References
	DEFINE_FUNCTION(AMyTimeLineActor::execTimelineFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyTimeLineActor::execTimelineStart)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineStart(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyTimeLineActor::execEndOverlapFunciton)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndOverlapFunciton(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyTimeLineActor::execBeginOverlapFunciton)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginOverlapFunciton(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AMyTimeLineActor::StaticRegisterNativesAMyTimeLineActor()
	{
		UClass* Class = AMyTimeLineActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginOverlapFunciton", &AMyTimeLineActor::execBeginOverlapFunciton },
			{ "EndOverlapFunciton", &AMyTimeLineActor::execEndOverlapFunciton },
			{ "TimelineFinished", &AMyTimeLineActor::execTimelineFinished },
			{ "TimelineStart", &AMyTimeLineActor::execTimelineStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics
	{
		struct MyTimeLineActor_eventBeginOverlapFunciton_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTimeLineActor_eventBeginOverlapFunciton_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTimeLineActor_eventBeginOverlapFunciton_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTimeLineActor_eventBeginOverlapFunciton_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTimeLineActor_eventBeginOverlapFunciton_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MyTimeLineActor_eventBeginOverlapFunciton_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyTimeLineActor_eventBeginOverlapFunciton_Parms), &Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTimeLineActor_eventBeginOverlapFunciton_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyTimeLineActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTimeLineActor, nullptr, "BeginOverlapFunciton", nullptr, nullptr, Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::MyTimeLineActor_eventBeginOverlapFunciton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::MyTimeLineActor_eventBeginOverlapFunciton_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics
	{
		struct MyTimeLineActor_eventEndOverlapFunciton_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTimeLineActor_eventEndOverlapFunciton_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTimeLineActor_eventEndOverlapFunciton_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTimeLineActor_eventEndOverlapFunciton_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTimeLineActor_eventEndOverlapFunciton_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyTimeLineActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTimeLineActor, nullptr, "EndOverlapFunciton", nullptr, nullptr, Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::MyTimeLineActor_eventEndOverlapFunciton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::MyTimeLineActor_eventEndOverlapFunciton_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyTimeLineActor_TimelineFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTimeLineActor_TimelineFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyTimeLineActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTimeLineActor_TimelineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTimeLineActor, nullptr, "TimelineFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_TimelineFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyTimeLineActor_TimelineFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyTimeLineActor_TimelineFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyTimeLineActor_TimelineFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyTimeLineActor_TimelineStart_Statics
	{
		struct MyTimeLineActor_eventTimelineStart_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyTimeLineActor_TimelineStart_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTimeLineActor_eventTimelineStart_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyTimeLineActor_TimelineStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTimeLineActor_TimelineStart_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTimeLineActor_TimelineStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyTimeLineActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTimeLineActor_TimelineStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTimeLineActor, nullptr, "TimelineStart", nullptr, nullptr, Z_Construct_UFunction_AMyTimeLineActor_TimelineStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_TimelineStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyTimeLineActor_TimelineStart_Statics::MyTimeLineActor_eventTimelineStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_TimelineStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyTimeLineActor_TimelineStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTimeLineActor_TimelineStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyTimeLineActor_TimelineStart_Statics::MyTimeLineActor_eventTimelineStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyTimeLineActor_TimelineStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyTimeLineActor_TimelineStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTimeLineActor);
	UClass* Z_Construct_UClass_AMyTimeLineActor_NoRegister()
	{
		return AMyTimeLineActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyTimeLineActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCurveFloat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCurveFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTimeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyTimeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTimeLineActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SubFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTimeLineActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyTimeLineActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyTimeLineActor_BeginOverlapFunciton, "BeginOverlapFunciton" }, // 3440531327
		{ &Z_Construct_UFunction_AMyTimeLineActor_EndOverlapFunciton, "EndOverlapFunciton" }, // 1219545754
		{ &Z_Construct_UFunction_AMyTimeLineActor_TimelineFinished, "TimelineFinished" }, // 2654268811
		{ &Z_Construct_UFunction_AMyTimeLineActor_TimelineStart, "TimelineStart" }, // 3101569740
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTimeLineActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTimeLineActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyTimeLineActor.h" },
		{ "ModuleRelativePath", "Public/MyTimeLineActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyCurveFloat_MetaData[] = {
		{ "Category", "MyCurve" },
		{ "ModuleRelativePath", "Public/MyTimeLineActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyCurveFloat = { "MyCurveFloat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTimeLineActor, MyCurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyCurveFloat_MetaData), Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyCurveFloat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyTimeline_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyTimeLineActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyTimeline = { "MyTimeline", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTimeLineActor, MyTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyTimeline_MetaData), Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyTimeline_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyScene_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyTimeLineActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyScene = { "MyScene", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTimeLineActor, MyScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyScene_MetaData), Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyStaticMesh_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyTimeLineActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyStaticMesh = { "MyStaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTimeLineActor, MyStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyStaticMesh_MetaData), Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyStaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyBox_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyTimeLineActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyBox = { "MyBox", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTimeLineActor, MyBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyBox_MetaData), Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTimeLineActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyCurveFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyTimeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTimeLineActor_Statics::NewProp_MyBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTimeLineActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTimeLineActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTimeLineActor_Statics::ClassParams = {
		&AMyTimeLineActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyTimeLineActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyTimeLineActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTimeLineActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTimeLineActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTimeLineActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyTimeLineActor()
	{
		if (!Z_Registration_Info_UClass_AMyTimeLineActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTimeLineActor.OuterSingleton, Z_Construct_UClass_AMyTimeLineActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyTimeLineActor.OuterSingleton;
	}
	template<> SUBFARM_API UClass* StaticClass<AMyTimeLineActor>()
	{
		return AMyTimeLineActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTimeLineActor);
	AMyTimeLineActor::~AMyTimeLineActor() {}
	struct Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyTimeLineActor, AMyTimeLineActor::StaticClass, TEXT("AMyTimeLineActor"), &Z_Registration_Info_UClass_AMyTimeLineActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTimeLineActor), 2132226832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_1208269708(TEXT("/Script/SubFarm"),
		Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
