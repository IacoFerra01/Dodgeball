// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/Enemycharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemycharacter() {}
// Cross Module References
	DODGEBALL_API UClass* Z_Construct_UClass_AEnemycharacter_NoRegister();
	DODGEBALL_API UClass* Z_Construct_UClass_AEnemycharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Dodgeball();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballProjectile_NoRegister();
	DODGEBALL_API UClass* Z_Construct_UClass_ULookAtActorComponent_NoRegister();
// End Cross Module References
	void AEnemycharacter::StaticRegisterNativesAEnemycharacter()
	{
	}
	UClass* Z_Construct_UClass_AEnemycharacter_NoRegister()
	{
		return AEnemycharacter::StaticClass();
	}
	struct Z_Construct_UClass_AEnemycharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeballClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DodgeballClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtActorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LookAtActorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemycharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemycharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemycharacter.h" },
		{ "ModuleRelativePath", "Enemycharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemycharacter_Statics::NewProp_DodgeballClass_MetaData[] = {
		{ "Category", "Dodgeball" },
		{ "Comment", "//The class used to spawn a dodgeball object\n" },
		{ "ModuleRelativePath", "Enemycharacter.h" },
		{ "ToolTip", "The class used to spawn a dodgeball object" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemycharacter_Statics::NewProp_DodgeballClass = { "DodgeballClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemycharacter, DodgeballClass), Z_Construct_UClass_ADodgeballProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemycharacter_Statics::NewProp_DodgeballClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemycharacter_Statics::NewProp_DodgeballClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemycharacter_Statics::NewProp_LookAtActorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LookAt" },
		{ "Comment", "/*\n\x09UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = LookAt, meta = (AllowPrivateAccess = \"true\"))\n\x09\x09""class USceneComponent* SightSource;*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemycharacter.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = LookAt, meta = (AllowPrivateAccess = \"true\"))\n        class USceneComponent* SightSource;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemycharacter_Statics::NewProp_LookAtActorComponent = { "LookAtActorComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemycharacter, LookAtActorComponent), Z_Construct_UClass_ULookAtActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemycharacter_Statics::NewProp_LookAtActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemycharacter_Statics::NewProp_LookAtActorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemycharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemycharacter_Statics::NewProp_DodgeballClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemycharacter_Statics::NewProp_LookAtActorComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemycharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemycharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemycharacter_Statics::ClassParams = {
		&AEnemycharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemycharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemycharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemycharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemycharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemycharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemycharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemycharacter, 231014774);
	template<> DODGEBALL_API UClass* StaticClass<AEnemycharacter>()
	{
		return AEnemycharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemycharacter(Z_Construct_UClass_AEnemycharacter, &AEnemycharacter::StaticClass, TEXT("/Script/Dodgeball"), TEXT("AEnemycharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemycharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
