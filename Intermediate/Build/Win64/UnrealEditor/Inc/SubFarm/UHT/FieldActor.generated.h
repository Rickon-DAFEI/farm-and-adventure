// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FieldActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOutcomeStruct;
#ifdef SUBFARM_FieldActor_generated_h
#error "FieldActor.generated.h already included, missing '#pragma once' in FieldActor.h"
#endif
#define SUBFARM_FieldActor_generated_h

#define FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_SPARSE_DATA
#define FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishHarvest); \
	DECLARE_FUNCTION(execFinishCultivate); \
	DECLARE_FUNCTION(execFinishPlant); \
	DECLARE_FUNCTION(execCultivate); \
	DECLARE_FUNCTION(execCheckCanHarvest); \
	DECLARE_FUNCTION(execCheckHasPlant); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execHarvest); \
	DECLARE_FUNCTION(execGrowth); \
	DECLARE_FUNCTION(execPlant); \
	DECLARE_FUNCTION(execBuyField);


#define FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_ACCESSORS
#define FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFieldActor(); \
	friend struct Z_Construct_UClass_AFieldActor_Statics; \
public: \
	DECLARE_CLASS(AFieldActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SubFarm"), NO_API) \
	DECLARE_SERIALIZER(AFieldActor) \
	virtual UObject* _getUObject() const override { return const_cast<AFieldActor*>(this); }


#define FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFieldActor(AFieldActor&&); \
	NO_API AFieldActor(const AFieldActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFieldActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFieldActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFieldActor) \
	NO_API virtual ~AFieldActor();


#define FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_24_PROLOG
#define FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_SPARSE_DATA \
	FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_ACCESSORS \
	FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_INCLASS_NO_PURE_DECLS \
	FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBFARM_API UClass* StaticClass<class AFieldActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_farm_and_adventure_Source_SubFarm_Public_FieldActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
