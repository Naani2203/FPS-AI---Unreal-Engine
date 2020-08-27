// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSAI_FPSWeapon_generated_h
#error "FPSWeapon.generated.h already included, missing '#pragma once' in FPSWeapon.h"
#endif
#define FPSAI_FPSWeapon_generated_h

#define FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_SPARSE_DATA
#define FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire);


#define FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire);


#define FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSWeapon(); \
	friend struct Z_Construct_UClass_AFPSWeapon_Statics; \
public: \
	DECLARE_CLASS(AFPSWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSAI"), NO_API) \
	DECLARE_SERIALIZER(AFPSWeapon)


#define FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSWeapon(); \
	friend struct Z_Construct_UClass_AFPSWeapon_Statics; \
public: \
	DECLARE_CLASS(AFPSWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSAI"), NO_API) \
	DECLARE_SERIALIZER(AFPSWeapon)


#define FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSWeapon(AFPSWeapon&&); \
	NO_API AFPSWeapon(const AFPSWeapon&); \
public:


#define FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSWeapon(AFPSWeapon&&); \
	NO_API AFPSWeapon(const AFPSWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSWeapon)


#define FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AFPSWeapon, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AFPSWeapon, DamageType); }


#define FPSAI_Source_FPSAI_Public_FPSWeapon_h_11_PROLOG
#define FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_SPARSE_DATA \
	FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_RPC_WRAPPERS \
	FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_INCLASS \
	FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_SPARSE_DATA \
	FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_INCLASS_NO_PURE_DECLS \
	FPSAI_Source_FPSAI_Public_FPSWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSAI_API UClass* StaticClass<class AFPSWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSAI_Source_FPSAI_Public_FPSWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
