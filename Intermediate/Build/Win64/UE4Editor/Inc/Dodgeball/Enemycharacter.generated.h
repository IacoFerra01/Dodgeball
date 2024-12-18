// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DODGEBALL_Enemycharacter_generated_h
#error "Enemycharacter.generated.h already included, missing '#pragma once' in Enemycharacter.h"
#endif
#define DODGEBALL_Enemycharacter_generated_h

#define Dodgeball_Source_Dodgeball_Enemycharacter_h_13_SPARSE_DATA
#define Dodgeball_Source_Dodgeball_Enemycharacter_h_13_RPC_WRAPPERS
#define Dodgeball_Source_Dodgeball_Enemycharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Dodgeball_Source_Dodgeball_Enemycharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemycharacter(); \
	friend struct Z_Construct_UClass_AEnemycharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemycharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(AEnemycharacter)


#define Dodgeball_Source_Dodgeball_Enemycharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemycharacter(); \
	friend struct Z_Construct_UClass_AEnemycharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemycharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(AEnemycharacter)


#define Dodgeball_Source_Dodgeball_Enemycharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemycharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemycharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemycharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemycharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemycharacter(AEnemycharacter&&); \
	NO_API AEnemycharacter(const AEnemycharacter&); \
public:


#define Dodgeball_Source_Dodgeball_Enemycharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemycharacter(AEnemycharacter&&); \
	NO_API AEnemycharacter(const AEnemycharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemycharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemycharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemycharacter)


#define Dodgeball_Source_Dodgeball_Enemycharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LookAtActorComponent() { return STRUCT_OFFSET(AEnemycharacter, LookAtActorComponent); } \
	FORCEINLINE static uint32 __PPO__DodgeballClass() { return STRUCT_OFFSET(AEnemycharacter, DodgeballClass); }


#define Dodgeball_Source_Dodgeball_Enemycharacter_h_10_PROLOG
#define Dodgeball_Source_Dodgeball_Enemycharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball_Source_Dodgeball_Enemycharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	Dodgeball_Source_Dodgeball_Enemycharacter_h_13_SPARSE_DATA \
	Dodgeball_Source_Dodgeball_Enemycharacter_h_13_RPC_WRAPPERS \
	Dodgeball_Source_Dodgeball_Enemycharacter_h_13_INCLASS \
	Dodgeball_Source_Dodgeball_Enemycharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dodgeball_Source_Dodgeball_Enemycharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball_Source_Dodgeball_Enemycharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	Dodgeball_Source_Dodgeball_Enemycharacter_h_13_SPARSE_DATA \
	Dodgeball_Source_Dodgeball_Enemycharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Dodgeball_Source_Dodgeball_Enemycharacter_h_13_INCLASS_NO_PURE_DECLS \
	Dodgeball_Source_Dodgeball_Enemycharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DODGEBALL_API UClass* StaticClass<class AEnemycharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dodgeball_Source_Dodgeball_Enemycharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
