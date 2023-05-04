// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AOV_CryptomattePRO/Public/CryptomattePROBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCryptomattePROBPLibrary() {}
// Cross Module References
	CRYPTOMATTEPRO_API UClass* Z_Construct_UClass_UCryptomattePROFunctionLibrary_NoRegister();
	CRYPTOMATTEPRO_API UClass* Z_Construct_UClass_UCryptomattePROFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CryptomattePRO();
// End Cross Module References
	DEFINE_FUNCTION(UCryptomattePROFunctionLibrary::execCryptomattePROSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UCryptomattePROFunctionLibrary::CryptomattePROSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UCryptomattePROFunctionLibrary::StaticRegisterNativesUCryptomattePROFunctionLibrary()
	{
		UClass* Class = UCryptomattePROFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CryptomattePROSampleFunction", &UCryptomattePROFunctionLibrary::execCryptomattePROSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction_Statics
	{
		struct CryptomattePROFunctionLibrary_eventCryptomattePROSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CryptomattePROFunctionLibrary_eventCryptomattePROSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CryptomattePROFunctionLibrary_eventCryptomattePROSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "CryptomattePROTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "CryptomattePRO sample test testing" },
		{ "ModuleRelativePath", "Public/CryptomattePROBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCryptomattePROFunctionLibrary, nullptr, "CryptomattePROSampleFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction_Statics::CryptomattePROFunctionLibrary_eventCryptomattePROSampleFunction_Parms), Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCryptomattePROFunctionLibrary);
	UClass* Z_Construct_UClass_UCryptomattePROFunctionLibrary_NoRegister()
	{
		return UCryptomattePROFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCryptomattePROFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCryptomattePROFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptomattePRO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCryptomattePROFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCryptomattePROFunctionLibrary_CryptomattePROSampleFunction, "CryptomattePROSampleFunction" }, // 2630053128
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptomattePROFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "CryptomattePROBPLibrary.h" },
		{ "ModuleRelativePath", "Public/CryptomattePROBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCryptomattePROFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCryptomattePROFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCryptomattePROFunctionLibrary_Statics::ClassParams = {
		&UCryptomattePROFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCryptomattePROFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptomattePROFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCryptomattePROFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UCryptomattePROFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCryptomattePROFunctionLibrary.OuterSingleton, Z_Construct_UClass_UCryptomattePROFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCryptomattePROFunctionLibrary.OuterSingleton;
	}
	template<> CRYPTOMATTEPRO_API UClass* StaticClass<UCryptomattePROFunctionLibrary>()
	{
		return UCryptomattePROFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCryptomattePROFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_CryptomattePROBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_CryptomattePROBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCryptomattePROFunctionLibrary, UCryptomattePROFunctionLibrary::StaticClass, TEXT("UCryptomattePROFunctionLibrary"), &Z_Registration_Info_UClass_UCryptomattePROFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCryptomattePROFunctionLibrary), 21863923U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_CryptomattePROBPLibrary_h_3873056613(TEXT("/Script/CryptomattePRO"),
		Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_CryptomattePROBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_CryptomattePROBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
