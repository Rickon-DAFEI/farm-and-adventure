// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyDelegateActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBFARM_MyDelegateActor_generated_h
#error "MyDelegateActor.generated.h already included, missing '#pragma once' in MyDelegateActor.h"
#endif
#define SUBFARM_MyDelegateActor_generated_h

#define FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_18_DELEGATE \
SUBFARM_API void FDynamicMultiDelegate_DelegateWrapper(const FMulticastScriptDelegate& DynamicMultiDelegate, const FString& param);


#define FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_SPARSE_DATA
#define FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMultiFunctionThird); \
	DECLARE_FUNCTION(execMultiFunctionSecond); \
	DECLARE_FUNCTION(execMultiFunctionFirst);


#define FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_ACCESSORS
#define FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyDelegateActor(); \
	friend struct Z_Construct_UClass_AMyDelegateActor_Statics; \
public: \
	DECLARE_CLASS(AMyDelegateActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SubFarm"), NO_API) \
	DECLARE_SERIALIZER(AMyDelegateActor)


#define FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyDelegateActor(AMyDelegateActor&&); \
	NO_API AMyDelegateActor(const AMyDelegateActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyDelegateActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyDelegateActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyDelegateActor) \
	NO_API virtual ~AMyDelegateActor();


#define FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_20_PROLOG
#define FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_SPARSE_DATA \
	FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_ACCESSORS \
	FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_INCLASS_NO_PURE_DECLS \
	FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBFARM_API UClass* StaticClass<class AMyDelegateActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_farm_and_adventure_Source_SubFarm_Public_MyDelegateActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
