// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AOV_CryptomattePRO/Public/CryptomattePROSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCryptomattePROSetting() {}
// Cross Module References
	CRYPTOMATTEPRO_API UEnum* Z_Construct_UEnum_CryptomattePRO_ECryptomatteIdType();
	UPackage* Z_Construct_UPackage__Script_CryptomattePRO();
	CRYPTOMATTEPRO_API UClass* Z_Construct_UClass_UCryptomattePROSetting_NoRegister();
	CRYPTOMATTEPRO_API UClass* Z_Construct_UClass_UCryptomattePROSetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineRenderPass();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineOutputData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECryptomatteIdType;
	static UEnum* ECryptomatteIdType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECryptomatteIdType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECryptomatteIdType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CryptomattePRO_ECryptomatteIdType, Z_Construct_UPackage__Script_CryptomattePRO(), TEXT("ECryptomatteIdType"));
		}
		return Z_Registration_Info_UEnum_ECryptomatteIdType.OuterSingleton;
	}
	template<> CRYPTOMATTEPRO_API UEnum* StaticEnum<ECryptomatteIdType>()
	{
		return ECryptomatteIdType_StaticEnum();
	}
	struct Z_Construct_UEnum_CryptomattePRO_ECryptomatteIdType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CryptomattePRO_ECryptomatteIdType_Statics::Enumerators[] = {
		{ "ECryptomatteIdType::Tag", (int64)ECryptomatteIdType::Tag },
		{ "ECryptomatteIdType::Material", (int64)ECryptomatteIdType::Material },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CryptomattePRO_ECryptomatteIdType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Material.Comment", "// Grouped by material name. This means different objects that use the same material will be merged. */\n" },
		{ "Material.Name", "ECryptomatteIdType::Material" },
		{ "Material.ToolTip", "Grouped by material name. This means different objects that use the same material will be merged. */" },
		{ "ModuleRelativePath", "Public/CryptomattePROSetting.h" },
		{ "Tag.Comment", "//pick the tag of the actors in scene and assing an ID map to those groups\n" },
		{ "Tag.Name", "ECryptomatteIdType::Tag" },
		{ "Tag.ToolTip", "pick the tag of the actors in scene and assing an ID map to those groups" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CryptomattePRO_ECryptomatteIdType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CryptomattePRO,
		nullptr,
		"ECryptomatteIdType",
		"ECryptomatteIdType",
		Z_Construct_UEnum_CryptomattePRO_ECryptomatteIdType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CryptomattePRO_ECryptomatteIdType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CryptomattePRO_ECryptomatteIdType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CryptomattePRO_ECryptomatteIdType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CryptomattePRO_ECryptomatteIdType()
	{
		if (!Z_Registration_Info_UEnum_ECryptomatteIdType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECryptomatteIdType.InnerSingleton, Z_Construct_UEnum_CryptomattePRO_ECryptomatteIdType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECryptomatteIdType.InnerSingleton;
	}
	DEFINE_FUNCTION(UCryptomattePROSetting::execOnRenderMovieStopped)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_MoviePipeline);
		P_GET_STRUCT(FMoviePipelineOutputData,Z_Param_OutputData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRenderMovieStopped(Z_Param_MoviePipeline,Z_Param_OutputData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCryptomattePROSetting::execGetOutputDirectoryDisplayText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetOutputDirectoryDisplayText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCryptomattePROSetting::execUpdateOutputDirectoryFromOutputSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOutputDirectoryFromOutputSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCryptomattePROSetting::execProcessRenderPasses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessRenderPasses();
		P_NATIVE_END;
	}
	void UCryptomattePROSetting::StaticRegisterNativesUCryptomattePROSetting()
	{
		UClass* Class = UCryptomattePROSetting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOutputDirectoryDisplayText", &UCryptomattePROSetting::execGetOutputDirectoryDisplayText },
			{ "OnRenderMovieStopped", &UCryptomattePROSetting::execOnRenderMovieStopped },
			{ "ProcessRenderPasses", &UCryptomattePROSetting::execProcessRenderPasses },
			{ "UpdateOutputDirectoryFromOutputSetting", &UCryptomattePROSetting::execUpdateOutputDirectoryFromOutputSetting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCryptomattePROSetting_GetOutputDirectoryDisplayText_Statics
	{
		struct CryptomattePROSetting_eventGetOutputDirectoryDisplayText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCryptomattePROSetting_GetOutputDirectoryDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CryptomattePROSetting_eventGetOutputDirectoryDisplayText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCryptomattePROSetting_GetOutputDirectoryDisplayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCryptomattePROSetting_GetOutputDirectoryDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCryptomattePROSetting_GetOutputDirectoryDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "File Directory" },
		{ "ModuleRelativePath", "Public/CryptomattePROSetting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCryptomattePROSetting_GetOutputDirectoryDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCryptomattePROSetting, nullptr, "GetOutputDirectoryDisplayText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCryptomattePROSetting_GetOutputDirectoryDisplayText_Statics::CryptomattePROSetting_eventGetOutputDirectoryDisplayText_Parms), Z_Construct_UFunction_UCryptomattePROSetting_GetOutputDirectoryDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCryptomattePROSetting_GetOutputDirectoryDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCryptomattePROSetting_GetOutputDirectoryDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCryptomattePROSetting_GetOutputDirectoryDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCryptomattePROSetting_GetOutputDirectoryDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCryptomattePROSetting_GetOutputDirectoryDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped_Statics
	{
		struct CryptomattePROSetting_eventOnRenderMovieStopped_Parms
		{
			UMoviePipeline* MoviePipeline;
			FMoviePipelineOutputData OutputData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoviePipeline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped_Statics::NewProp_MoviePipeline = { "MoviePipeline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CryptomattePROSetting_eventOnRenderMovieStopped_Parms, MoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped_Statics::NewProp_OutputData = { "OutputData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CryptomattePROSetting_eventOnRenderMovieStopped_Parms, OutputData), Z_Construct_UScriptStruct_FMoviePipelineOutputData, METADATA_PARAMS(nullptr, 0) }; // 3777809621
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped_Statics::NewProp_MoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped_Statics::NewProp_OutputData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CryptomattePROSetting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCryptomattePROSetting, nullptr, "OnRenderMovieStopped", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped_Statics::CryptomattePROSetting_eventOnRenderMovieStopped_Parms), Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCryptomattePROSetting_ProcessRenderPasses_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCryptomattePROSetting_ProcessRenderPasses_Statics::Function_MetaDataParams[] = {
		{ "Category", "CryptomattePRO" },
		{ "ModuleRelativePath", "Public/CryptomattePROSetting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCryptomattePROSetting_ProcessRenderPasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCryptomattePROSetting, nullptr, "ProcessRenderPasses", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCryptomattePROSetting_ProcessRenderPasses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCryptomattePROSetting_ProcessRenderPasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCryptomattePROSetting_ProcessRenderPasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCryptomattePROSetting_ProcessRenderPasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCryptomattePROSetting_UpdateOutputDirectoryFromOutputSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCryptomattePROSetting_UpdateOutputDirectoryFromOutputSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "File Directory" },
		{ "ModuleRelativePath", "Public/CryptomattePROSetting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCryptomattePROSetting_UpdateOutputDirectoryFromOutputSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCryptomattePROSetting, nullptr, "UpdateOutputDirectoryFromOutputSetting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCryptomattePROSetting_UpdateOutputDirectoryFromOutputSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCryptomattePROSetting_UpdateOutputDirectoryFromOutputSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCryptomattePROSetting_UpdateOutputDirectoryFromOutputSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCryptomattePROSetting_UpdateOutputDirectoryFromOutputSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCryptomattePROSetting);
	UClass* Z_Construct_UClass_UCryptomattePROSetting_NoRegister()
	{
		return UCryptomattePROSetting::StaticClass();
	}
	struct Z_Construct_UClass_UCryptomattePROSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_IdType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IdType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileNameFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomFrameRate_MetaData[];
#endif
		static void NewProp_bUseCustomFrameRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCryptomatte_MetaData[];
#endif
		static void NewProp_bEnableCryptomatte_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCryptomatte;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCryptomattePROSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineRenderPass,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptomattePRO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCryptomattePROSetting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCryptomattePROSetting_GetOutputDirectoryDisplayText, "GetOutputDirectoryDisplayText" }, // 2130748161
		{ &Z_Construct_UFunction_UCryptomattePROSetting_OnRenderMovieStopped, "OnRenderMovieStopped" }, // 3775869946
		{ &Z_Construct_UFunction_UCryptomattePROSetting_ProcessRenderPasses, "ProcessRenderPasses" }, // 4243502356
		{ &Z_Construct_UFunction_UCryptomattePROSetting_UpdateOutputDirectoryFromOutputSetting, "UpdateOutputDirectoryFromOutputSetting" }, // 1740185345
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptomattePROSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CryptomattePROSetting.h" },
		{ "ModuleRelativePath", "Public/CryptomattePROSetting.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_IdType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_IdType_MetaData[] = {
		{ "Category", "CryptomattePRO" },
		{ "ModuleRelativePath", "Public/CryptomattePROSetting.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_IdType = { "IdType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCryptomattePROSetting, IdType), Z_Construct_UEnum_CryptomattePRO_ECryptomatteIdType, METADATA_PARAMS(Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_IdType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_IdType_MetaData)) }; // 940074392
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_FileNameFormat_MetaData[] = {
		{ "Category", "File Output" },
		{ "Comment", "// Additional properties for utilizing MoviePipelineOutputSetting properties\n" },
		{ "ModuleRelativePath", "Public/CryptomattePROSetting.h" },
		{ "ToolTip", "Additional properties for utilizing MoviePipelineOutputSetting properties" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_FileNameFormat = { "FileNameFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCryptomattePROSetting, FileNameFormat), METADATA_PARAMS(Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_FileNameFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_FileNameFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputResolution_MetaData[] = {
		{ "Category", "File Output" },
		{ "ModuleRelativePath", "Public/CryptomattePROSetting.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputResolution = { "OutputResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCryptomattePROSetting, OutputResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_bUseCustomFrameRate_MetaData[] = {
		{ "Category", "File Output" },
		{ "ModuleRelativePath", "Public/CryptomattePROSetting.h" },
	};
#endif
	void Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_bUseCustomFrameRate_SetBit(void* Obj)
	{
		((UCryptomattePROSetting*)Obj)->bUseCustomFrameRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_bUseCustomFrameRate = { "bUseCustomFrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCryptomattePROSetting), &Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_bUseCustomFrameRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_bUseCustomFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_bUseCustomFrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputFrameRate_MetaData[] = {
		{ "Category", "File Output" },
		{ "EditCondition", "bUseCustomFrameRate" },
		{ "ModuleRelativePath", "Public/CryptomattePROSetting.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputFrameRate = { "OutputFrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCryptomattePROSetting, OutputFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputFrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputDirectory_MetaData[] = {
		{ "Category", "File Directory" },
		{ "ModuleRelativePath", "Public/CryptomattePROSetting.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCryptomattePROSetting, OutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_bEnableCryptomatte_MetaData[] = {
		{ "Category", "Cryptomatte PRO" },
		{ "ModuleRelativePath", "Public/CryptomattePROSetting.h" },
	};
#endif
	void Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_bEnableCryptomatte_SetBit(void* Obj)
	{
		((UCryptomattePROSetting*)Obj)->bEnableCryptomatte = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_bEnableCryptomatte = { "bEnableCryptomatte", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCryptomattePROSetting), &Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_bEnableCryptomatte_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_bEnableCryptomatte_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_bEnableCryptomatte_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCryptomattePROSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_IdType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_IdType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_FileNameFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_bUseCustomFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_OutputDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptomattePROSetting_Statics::NewProp_bEnableCryptomatte,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCryptomattePROSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCryptomattePROSetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCryptomattePROSetting_Statics::ClassParams = {
		&UCryptomattePROSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCryptomattePROSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCryptomattePROSetting_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCryptomattePROSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptomattePROSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCryptomattePROSetting()
	{
		if (!Z_Registration_Info_UClass_UCryptomattePROSetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCryptomattePROSetting.OuterSingleton, Z_Construct_UClass_UCryptomattePROSetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCryptomattePROSetting.OuterSingleton;
	}
	template<> CRYPTOMATTEPRO_API UClass* StaticClass<UCryptomattePROSetting>()
	{
		return UCryptomattePROSetting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCryptomattePROSetting);
	struct Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_CryptomattePROSetting_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_CryptomattePROSetting_h_Statics::EnumInfo[] = {
		{ ECryptomatteIdType_StaticEnum, TEXT("ECryptomatteIdType"), &Z_Registration_Info_UEnum_ECryptomatteIdType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 940074392U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_CryptomattePROSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCryptomattePROSetting, UCryptomattePROSetting::StaticClass, TEXT("UCryptomattePROSetting"), &Z_Registration_Info_UClass_UCryptomattePROSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCryptomattePROSetting), 1466190106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_CryptomattePROSetting_h_1174257624(TEXT("/Script/CryptomattePRO"),
		Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_CryptomattePROSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_CryptomattePROSetting_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_CryptomattePROSetting_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CryptomattePlugin_Plugins_AOV_CryptomattePRO_Source_AOV_CryptomattePRO_Public_CryptomattePROSetting_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
