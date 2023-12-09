// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SUBFARM_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define SUBFARM_MyActor_generated_h

#define FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_SPARSE_DATA
#define FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHitFunction); \
	DECLARE_FUNCTION(execEndOverlapFunciton); \
	DECLARE_FUNCTION(execBeginOverlapFunciton);


#define FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_ACCESSORS
#define FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SubFarm"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor) \
	NO_API virtual ~AMyActor();


#define FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_18_PROLOG
#define FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_SPARSE_DATA \
	FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_ACCESSORS \
	FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBFARM_API UClass* StaticClass<class AMyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_10168_Documents_Unreal_Projects_SubFarm_Source_SubFarm_Public_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
