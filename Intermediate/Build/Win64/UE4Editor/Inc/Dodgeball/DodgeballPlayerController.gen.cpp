// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/DodgeballPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDodgeballPlayerController() {}
// Cross Module References
	DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballPlayerController_NoRegister();
	DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Dodgeball();
	DODGEBALL_API UClass* Z_Construct_UClass_UHUDWidget_NoRegister();
	DODGEBALL_API UClass* Z_Construct_UClass_URestartWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ADodgeballPlayerController::StaticRegisterNativesADodgeballPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ADodgeballPlayerController_NoRegister()
	{
		return ADodgeballPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ADodgeballPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestartWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_HUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BP_HUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_RestartWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BP_RestartWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADodgeballPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DodgeballPlayerController.h" },
		{ "ModuleRelativePath", "DodgeballPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DodgeballPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADodgeballPlayerController, HUDWidget), Z_Construct_UClass_UHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_HUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_HUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_RestartWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DodgeballPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_RestartWidget = { "RestartWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADodgeballPlayerController, RestartWidget), Z_Construct_UClass_URestartWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_RestartWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_RestartWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_HUDWidget_MetaData[] = {
		{ "Category", "DodgeballPlayerController" },
		{ "ModuleRelativePath", "DodgeballPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_HUDWidget = { "BP_HUDWidget", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADodgeballPlayerController, BP_HUDWidget), Z_Construct_UClass_UHUDWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_HUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_HUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_RestartWidget_MetaData[] = {
		{ "Category", "DodgeballPlayerController" },
		{ "ModuleRelativePath", "DodgeballPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_RestartWidget = { "BP_RestartWidget", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADodgeballPlayerController, BP_RestartWidget), Z_Construct_UClass_URestartWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_RestartWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_RestartWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADodgeballPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_HUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_RestartWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_HUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_RestartWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADodgeballPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADodgeballPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADodgeballPlayerController_Statics::ClassParams = {
		&ADodgeballPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADodgeballPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADodgeballPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADodgeballPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADodgeballPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADodgeballPlayerController, 3274899596);
	template<> DODGEBALL_API UClass* StaticClass<ADodgeballPlayerController>()
	{
		return ADodgeballPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADodgeballPlayerController(Z_Construct_UClass_ADodgeballPlayerController, &ADodgeballPlayerController::StaticClass, TEXT("/Script/Dodgeball"), TEXT("ADodgeballPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADodgeballPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
