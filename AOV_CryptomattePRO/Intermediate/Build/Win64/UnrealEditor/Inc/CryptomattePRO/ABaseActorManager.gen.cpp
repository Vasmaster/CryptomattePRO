// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AOV_CryptomattePRO/Public/ABaseActorManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABaseActorManager() {}
// Cross Module References
	CRYPTOMATTEPRO_API UScriptStruct* Z_Construct_UScriptStruct_FTagData();
	UPackage* Z_Construct_UPackage__Script_CryptomattePRO();
	CRYPTOMATTEPRO_API UScriptStruct* Z_Construct_UScriptStruct_FTagColorData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	CRYPTOMATTEPRO_API UClass* Z_Construct_UClass_AABaseActorManager_NoRegister();
	CRYPTOMATTEPRO_API UClass* Z_Construct_UClass_AABaseActorManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TagData;
class UScriptStruct* FTagData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TagData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TagData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTagData, Z_Construct_UPackage__Script_CryptomattePRO(), TEXT("TagData"));
	}
	return Z_Registration_Info_UScriptStruct_TagData.OuterSingleton;
}
template<> CRYPTOMATTEPRO_API UScriptStruct* StaticStruct<FTagData>()
{
	return FTagData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTagData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ABaseActorManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTagData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTagData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagData_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "TagData" },
		{ "ModuleRelativePath", "Public/ABaseActorManager.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTagData_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTagData, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FTagData_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagData_Statics::NewProp_Tag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTagData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagData_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTagData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CryptomattePRO,
		nullptr,
		&NewStructOps,
		"TagData",
		sizeof(FTagData),
		alignof(FTagData),
		Z_Construct_UScriptStruct_FTagData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTagData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTagData()
	{
		if (!Z_Registration_Info_UScriptStruct_TagData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TagData.InnerSingleton, Z_Construct_UScriptStruct_FTagData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TagData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TagColorData;
class UScriptStruct* FTagColorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TagColorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TagColorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTagColorData, Z_Construct_UPackage__Script_CryptomattePRO(), TEXT("TagColorData"));
	}
	return Z_Registration_Info_UScriptStruct_TagColorData.OuterSingleton;
}
template<> CRYPTOMATTEPRO_API UScriptStruct* StaticStruct<FTagColorData>()
{
	return FTagColorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTagColorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagColorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ABaseActorManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTagColorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTagColorData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagColorData_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "TagColorData" },
		{ "ModuleRelativePath", "Public/ABaseActorManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagColorData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTagColorData, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTagColorData_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagColorData_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTagColorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagColorData_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTagColorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CryptomattePRO,
		nullptr,
		&NewStructOps,
		"TagColorData",
		sizeof(FTagColorData),
		alignof(FTagColorData),
		Z_Construct_UScriptStruct_FTagColorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagColorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTagColorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagColorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTagColorData()
	{
		if (!Z_Registration_Info_UScriptStruct_TagColorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TagColorData.InnerSingleton, Z_Construct_UScriptStruct_FTagColorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TagColorData.InnerSingleton;
	}
	void AABaseActorManager::StaticRegisterNativesAABaseActorManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABaseActorManager);
	UClass* Z_Construct_UClass_AABaseActorManager_NoRegister()
	{
		return AABaseActorManager::StaticClass();
	}
	struct Z_Construct_UClass_AABaseActorManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagsList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagsList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TagsList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaggedColor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaggedColor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaggedColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABaseActorManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptomattePRO,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABaseActorManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ABaseActorManager.h" },
		{ "ModuleRelativePath", "Public/ABaseActorManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AABaseActorManager_Statics::NewProp_TagsList_Inner = { "TagsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTagData, METADATA_PARAMS(nullptr, 0) }; // 2109629397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABaseActorManager_Statics::NewProp_TagsList_MetaData[] = {
		{ "Category", "Scene Manager" },
		{ "Comment", "// The TagsList array\n" },
		{ "ModuleRelativePath", "Public/ABaseActorManager.h" },
		{ "ToolTip", "The TagsList array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AABaseActorManager_Statics::NewProp_TagsList = { "TagsList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABaseActorManager, TagsList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AABaseActorManager_Statics::NewProp_TagsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABaseActorManager_Statics::NewProp_TagsList_MetaData)) }; // 2109629397
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AABaseActorManager_Statics::NewProp_TaggedColor_Inner = { "TaggedColor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTagColorData, METADATA_PARAMS(nullptr, 0) }; // 1534898262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABaseActorManager_Statics::NewProp_TaggedColor_MetaData[] = {
		{ "Category", "Scene Manager" },
		{ "Comment", "// The TaggedColor array\n" },
		{ "ModuleRelativePath", "Public/ABaseActorManager.h" },
		{ "ToolTip", "The TaggedColor array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AABaseActorManager_Statics::NewProp_TaggedColor = { "TaggedColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABaseActorManager, TaggedColor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AABaseActorManager_Statics::NewProp_TaggedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABaseActorManager_Statics::NewProp_TaggedColor_MetaData)) }; // 1534898262
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABaseActorManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABaseActorManager_Statics::NewProp_TagsList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABaseActorManager_Statics::NewProp_TagsList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABaseActorManager_Statics::NewProp_TaggedColor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABaseActorManager_Statics::NewProp_TaggedColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABaseActorManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABaseActorManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABaseActorManager_Statics::ClassParams = {
		&AABaseActorManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABaseActorManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABaseActorManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABaseActorManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABaseActorManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABaseActorManager()
	{
		if (!Z_Registration_Info_UClass_AABaseActorManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABaseActorManager.OuterSingleton, Z_Construct_UClass_AABaseActorManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABaseActorManager.OuterSingleton;
	}
	template<> CRYPTOMATTEPRO_API UClass* StaticClass<AABaseActorManager>()
	{
		return AABaseActorManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABaseActorManager);
	struct Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_ABaseActorManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_ABaseActorManager_h_Statics::ScriptStructInfo[] = {
		{ FTagData::StaticStruct, Z_Construct_UScriptStruct_FTagData_Statics::NewStructOps, TEXT("TagData"), &Z_Registration_Info_UScriptStruct_TagData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTagData), 2109629397U) },
		{ FTagColorData::StaticStruct, Z_Construct_UScriptStruct_FTagColorData_Statics::NewStructOps, TEXT("TagColorData"), &Z_Registration_Info_UScriptStruct_TagColorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTagColorData), 1534898262U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_ABaseActorManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABaseActorManager, AABaseActorManager::StaticClass, TEXT("AABaseActorManager"), &Z_Registration_Info_UClass_AABaseActorManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABaseActorManager), 1321275285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_ABaseActorManager_h_2371938037(TEXT("/Script/CryptomattePRO"),
		Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_ABaseActorManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_ABaseActorManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_ABaseActorManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_ABaseActorManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
