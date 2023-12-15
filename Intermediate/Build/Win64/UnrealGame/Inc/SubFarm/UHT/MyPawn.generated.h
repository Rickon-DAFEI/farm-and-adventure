// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBFARM_MyPawn_generated_h
#error "MyPawn.generated.h already included, missing '#pragma once' in MyPawn.h"
#endif
#define SUBFARM_MyPawn_generated_h

#define FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyTestStruct_Statics; \
	SUBFARM_API static class UScriptStruct* StaticStruct();


template<> SUBFARM_API UScriptStruct* StaticStruct<struct FMyTestStruct>();

#define FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_SPARSE_DATA
#define FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 TestD_Implementation(const FString& MyString); \
	virtual void TestC_Implementation(const FString& MyString); \
	virtual int32 TestB_Implementation(); \
	virtual void TestA_Implementation(); \
 \
	DECLARE_FUNCTION(execPrintTest); \
	DECLARE_FUNCTION(execTestD); \
	DECLARE_FUNCTION(execTestC); \
	DECLARE_FUNCTION(execTestB); \
	DECLARE_FUNCTION(execTestA); \
	DECLARE_FUNCTION(execPrintF2); \
	DECLARE_FUNCTION(execPrintF1);


#define FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_ACCESSORS
#define FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_CALLBACK_WRAPPERS
#define FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SubFarm"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawn) \
	NO_API virtual ~AMyPawn();


#define FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_38_PROLOG
#define FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_SPARSE_DATA \
	FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_ACCESSORS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_CALLBACK_WRAPPERS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_INCLASS_NO_PURE_DECLS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBFARM_API UClass* StaticClass<class AMyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_farm_and_advanture_Source_SubFarm_Public_MyPawn_h


#define FOREACH_ENUM_MYENUMTYPE(op) \
	op(MyEnumType::Type1) \
	op(MyEnumType::Type2) \
	op(MyEnumType::Type3) 
#define FOREACH_ENUM_EMYENUMTYPE(op) \
	op(EMyEnumType::OneType) \
	op(EMyEnumType::TwoType) \
	op(EMyEnumType::ThreeType) 

enum class EMyEnumType : uint8;
template<> struct TIsUEnumClass<EMyEnumType> { enum { Value = true }; };
template<> SUBFARM_API UEnum* StaticEnum<EMyEnumType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
