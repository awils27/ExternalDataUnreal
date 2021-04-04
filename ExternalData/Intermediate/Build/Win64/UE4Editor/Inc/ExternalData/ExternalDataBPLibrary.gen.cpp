// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExternalData/Public/ExternalDataBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalDataBPLibrary() {}
// Cross Module References
	EXTERNALDATA_API UClass* Z_Construct_UClass_UExternalDataBPLibrary_NoRegister();
	EXTERNALDATA_API UClass* Z_Construct_UClass_UExternalDataBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ExternalData();
// End Cross Module References
	DEFINE_FUNCTION(UExternalDataBPLibrary::execSaveFloatData)
	{
		P_GET_TARRAY(float,Z_Param_SaveFloat);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UExternalDataBPLibrary::SaveFloatData(Z_Param_SaveFloat,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExternalDataBPLibrary::execLoadFloatData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SaveText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->LoadFloatData(Z_Param_FileName,Z_Param_Out_SaveText);
		P_NATIVE_END;
	}
	void UExternalDataBPLibrary::StaticRegisterNativesUExternalDataBPLibrary()
	{
		UClass* Class = UExternalDataBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadFloatData", &UExternalDataBPLibrary::execLoadFloatData },
			{ "SaveFloatData", &UExternalDataBPLibrary::execSaveFloatData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics
	{
		struct ExternalDataBPLibrary_eventLoadFloatData_Parms
		{
			FString FileName;
			FString SaveText;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveText;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExternalDataBPLibrary_eventLoadFloatData_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::NewProp_SaveText = { "SaveText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExternalDataBPLibrary_eventLoadFloatData_Parms, SaveText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExternalDataBPLibrary_eventLoadFloatData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::NewProp_SaveText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aiden Blueprint Libary" },
		{ "Keywords", "Load Float Data" },
		{ "ModuleRelativePath", "Public/ExternalDataBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExternalDataBPLibrary, nullptr, "LoadFloatData", nullptr, nullptr, sizeof(ExternalDataBPLibrary_eventLoadFloatData_Parms), Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics
	{
		struct ExternalDataBPLibrary_eventSaveFloatData_Parms
		{
			TArray<float> SaveFloat;
			FString FileName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SaveFloat_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SaveFloat;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::NewProp_SaveFloat_Inner = { "SaveFloat", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::NewProp_SaveFloat = { "SaveFloat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExternalDataBPLibrary_eventSaveFloatData_Parms, SaveFloat), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExternalDataBPLibrary_eventSaveFloatData_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExternalDataBPLibrary_eventSaveFloatData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExternalDataBPLibrary_eventSaveFloatData_Parms), &Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::NewProp_SaveFloat_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::NewProp_SaveFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aiden Blueprint Libary" },
		{ "Keywords", "Save Float Data" },
		{ "ModuleRelativePath", "Public/ExternalDataBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExternalDataBPLibrary, nullptr, "SaveFloatData", nullptr, nullptr, sizeof(ExternalDataBPLibrary_eventSaveFloatData_Parms), Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExternalDataBPLibrary_NoRegister()
	{
		return UExternalDataBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UExternalDataBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExternalDataBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ExternalData,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExternalDataBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExternalDataBPLibrary_LoadFloatData, "LoadFloatData" }, // 1729217436
		{ &Z_Construct_UFunction_UExternalDataBPLibrary_SaveFloatData, "SaveFloatData" }, // 4293160738
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExternalDataBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "ExternalDataBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ExternalDataBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExternalDataBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExternalDataBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExternalDataBPLibrary_Statics::ClassParams = {
		&UExternalDataBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UExternalDataBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExternalDataBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExternalDataBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExternalDataBPLibrary, 3354671276);
	template<> EXTERNALDATA_API UClass* StaticClass<UExternalDataBPLibrary>()
	{
		return UExternalDataBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExternalDataBPLibrary(Z_Construct_UClass_UExternalDataBPLibrary, &UExternalDataBPLibrary::StaticClass, TEXT("/Script/ExternalData"), TEXT("UExternalDataBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExternalDataBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
