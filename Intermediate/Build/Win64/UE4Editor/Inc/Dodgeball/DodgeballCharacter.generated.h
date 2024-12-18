// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DODGEBALL_DodgeballCharacter_generated_h
#error "DodgeballCharacter.generated.h already included, missing '#pragma once' in DodgeballCharacter.h"
#endif
#define DODGEBALL_DodgeballCharacter_generated_h

#define Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_SPARSE_DATA
#define Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_RPC_WRAPPERS
#define Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADodgeballCharacter(); \
	friend struct Z_Construct_UClass_ADodgeballCharacter_Statics; \
public: \
	DECLARE_CLASS(ADodgeballCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(ADodgeballCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ADodgeballCharacter*>(this); }


#define Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADodgeballCharacter(); \
	friend struct Z_Construct_UClass_ADodgeballCharacter_Statics; \
public: \
	DECLARE_CLASS(ADodgeballCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(ADodgeballCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ADodgeballCharacter*>(this); }


#define Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADodgeballCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADodgeballCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADodgeballCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADodgeballCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADodgeballCharacter(ADodgeballCharacter&&); \
	NO_API ADodgeballCharacter(const ADodgeballCharacter&); \
public:


#define Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADodgeballCharacter(ADodgeballCharacter&&); \
	NO_API ADodgeballCharacter(const ADodgeballCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADodgeballCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADodgeballCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADodgeballCharacter)


#define Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ADodgeballCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ADodgeballCharacter, FollowCamera); }


#define Dodgeball_Source_Dodgeball_DodgeballCharacter_h_10_PROLOG
#define Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_SPARSE_DATA \
	Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_RPC_WRAPPERS \
	Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_INCLASS \
	Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_SPARSE_DATA \
	Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_INCLASS_NO_PURE_DECLS \
	Dodgeball_Source_Dodgeball_DodgeballCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DODGEBALL_API UClass* StaticClass<class ADodgeballCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dodgeball_Source_Dodgeball_DodgeballCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS