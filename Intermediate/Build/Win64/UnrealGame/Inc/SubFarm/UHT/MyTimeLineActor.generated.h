// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTimeLineActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SUBFARM_MyTimeLineActor_generated_h
#error "MyTimeLineActor.generated.h already included, missing '#pragma once' in MyTimeLineActor.h"
#endif
#define SUBFARM_MyTimeLineActor_generated_h

#define FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_SPARSE_DATA
#define FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTimelineFinished); \
	DECLARE_FUNCTION(execTimelineStart); \
	DECLARE_FUNCTION(execEndOverlapFunciton); \
	DECLARE_FUNCTION(execBeginOverlapFunciton);


#define FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_ACCESSORS
#define FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTimeLineActor(); \
	friend struct Z_Construct_UClass_AMyTimeLineActor_Statics; \
public: \
	DECLARE_CLASS(AMyTimeLineActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SubFarm"), NO_API) \
	DECLARE_SERIALIZER(AMyTimeLineActor)


#define FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTimeLineActor(AMyTimeLineActor&&); \
	NO_API AMyTimeLineActor(const AMyTimeLineActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTimeLineActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTimeLineActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTimeLineActor) \
	NO_API virtual ~AMyTimeLineActor();


#define FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_12_PROLOG
#define FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_SPARSE_DATA \
	FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_ACCESSORS \
	FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBFARM_API UClass* StaticClass<class AMyTimeLineActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_farm_and_adventure_Source_SubFarm_Public_MyTimeLineActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
