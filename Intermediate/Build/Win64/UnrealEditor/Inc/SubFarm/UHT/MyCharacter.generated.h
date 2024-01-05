// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBFARM_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define SUBFARM_MyCharacter_generated_h

#define FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_SPARSE_DATA
#define FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGiveInitalItems); \
	DECLARE_FUNCTION(execPutOnHand);


#define FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_ACCESSORS
#define FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SubFarm"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMyCharacter*>(this); }


#define FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter) \
	NO_API virtual ~AMyCharacter();


#define FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_24_PROLOG
#define FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_SPARSE_DATA \
	FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_ACCESSORS \
	FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBFARM_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_10168_Documents_Unreal_Projects_farm_and_advanture_Source_SubFarm_Public_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
