// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBFARM_MyInterface_generated_h
#error "MyInterface.generated.h already included, missing '#pragma once' in MyInterface.h"
#endif
#define SUBFARM_MyInterface_generated_h

#define FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_SPARSE_DATA
#define FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_ACCESSORS
#define FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUBFARM_API UMyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SUBFARM_API UMyInterface(UMyInterface&&); \
	SUBFARM_API UMyInterface(const UMyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBFARM_API, UMyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyInterface) \
	SUBFARM_API virtual ~UMyInterface();


#define FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMyInterface(); \
	friend struct Z_Construct_UClass_UMyInterface_Statics; \
public: \
	DECLARE_CLASS(UMyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SubFarm"), SUBFARM_API) \
	DECLARE_SERIALIZER(UMyInterface)


#define FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMyInterface() {} \
public: \
	typedef UMyInterface UClassType; \
	typedef IMyInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_10_PROLOG
#define FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_SPARSE_DATA \
	FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_ACCESSORS \
	FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBFARM_API UClass* StaticClass<class UMyInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_farm_and_advanture_Source_SubFarm_Public_MyInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
