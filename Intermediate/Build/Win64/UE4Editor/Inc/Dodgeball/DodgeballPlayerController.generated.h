// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DODGEBALL_DodgeballPlayerController_generated_h
#error "DodgeballPlayerController.generated.h already included, missing '#pragma once' in DodgeballPlayerController.h"
#endif
#define DODGEBALL_DodgeballPlayerController_generated_h

#define Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_SPARSE_DATA
#define Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_RPC_WRAPPERS
#define Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADodgeballPlayerController(); \
	friend struct Z_Construct_UClass_ADodgeballPlayerController_Statics; \
public: \
	DECLARE_CLASS(ADodgeballPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(ADodgeballPlayerController)


#define Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADodgeballPlayerController(); \
	friend struct Z_Construct_UClass_ADodgeballPlayerController_Statics; \
public: \
	DECLARE_CLASS(ADodgeballPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(ADodgeballPlayerController)


#define Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADodgeballPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADodgeballPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADodgeballPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADodgeballPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADodgeballPlayerController(ADodgeballPlayerController&&); \
	NO_API ADodgeballPlayerController(const ADodgeballPlayerController&); \
public:


#define Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADodgeballPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADodgeballPlayerController(ADodgeballPlayerController&&); \
	NO_API ADodgeballPlayerController(const ADodgeballPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADodgeballPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADodgeballPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADodgeballPlayerController)


#define Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RestartWidget() { return STRUCT_OFFSET(ADodgeballPlayerController, RestartWidget); } \
	FORCEINLINE static uint32 __PPO__HUDWidget() { return STRUCT_OFFSET(ADodgeballPlayerController, HUDWidget); }


#define Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_12_PROLOG
#define Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_SPARSE_DATA \
	Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_RPC_WRAPPERS \
	Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_INCLASS \
	Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_SPARSE_DATA \
	Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DODGEBALL_API UClass* StaticClass<class ADodgeballPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dodgeball_Source_Dodgeball_DodgeballPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
