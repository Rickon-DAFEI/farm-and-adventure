// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBFARM_MyObject_generated_h
#error "MyObject.generated.h already included, missing '#pragma once' in MyObject.h"
#endif
#define SUBFARM_MyObject_generated_h

#define FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyDataTableStruct_Statics; \
	SUBFARM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SUBFARM_API UScriptStruct* StaticStruct<struct FMyDataTableStruct>();

#define FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_SPARSE_DATA
#define FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_ACCESSORS
#define FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyObject(); \
	friend struct Z_Construct_UClass_UMyObject_Statics; \
public: \
	DECLARE_CLASS(UMyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubFarm"), NO_API) \
	DECLARE_SERIALIZER(UMyObject)


#define FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyObject(UMyObject&&); \
	NO_API UMyObject(const UMyObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyObject) \
	NO_API virtual ~UMyObject();


#define FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_27_PROLOG
#define FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_SPARSE_DATA \
	FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_ACCESSORS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_INCLASS_NO_PURE_DECLS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBFARM_API UClass* StaticClass<class UMyObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_farm_and_advanture_Source_SubFarm_Public_MyObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS