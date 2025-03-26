// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBall/Public/BassBallGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBassBallGameMode() {}

// Begin Cross Module References
BASEBALL_API UClass* Z_Construct_UClass_ABassBallGameMode();
BASEBALL_API UClass* Z_Construct_UClass_ABassBallGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_BaseBall();
// End Cross Module References

// Begin Class ABassBallGameMode Function CheckBaseBallGame
struct Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics
{
	struct BassBallGameMode_eventCheckBaseBallGame_Parms
	{
		FString PlayerInput;
		FString userid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseBallGame" },
		{ "ModuleRelativePath", "Public/BassBallGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_userid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerInput;
	static const UECodeGen_Private::FStrPropertyParams NewProp_userid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BassBallGameMode_eventCheckBaseBallGame_Parms, PlayerInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInput_MetaData), NewProp_PlayerInput_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics::NewProp_userid = { "userid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BassBallGameMode_eventCheckBaseBallGame_Parms, userid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_userid_MetaData), NewProp_userid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics::NewProp_PlayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics::NewProp_userid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABassBallGameMode, nullptr, "CheckBaseBallGame", nullptr, nullptr, Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics::BassBallGameMode_eventCheckBaseBallGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics::BassBallGameMode_eventCheckBaseBallGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABassBallGameMode::execCheckBaseBallGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerInput);
	P_GET_PROPERTY(FStrProperty,Z_Param_userid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckBaseBallGame(Z_Param_PlayerInput,Z_Param_userid);
	P_NATIVE_END;
}
// End Class ABassBallGameMode Function CheckBaseBallGame

// Begin Class ABassBallGameMode Function GenerateNewNumbers
struct Z_Construct_UFunction_ABassBallGameMode_GenerateNewNumbers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Logic" },
		{ "ModuleRelativePath", "Public/BassBallGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABassBallGameMode_GenerateNewNumbers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABassBallGameMode, nullptr, "GenerateNewNumbers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABassBallGameMode_GenerateNewNumbers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABassBallGameMode_GenerateNewNumbers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABassBallGameMode_GenerateNewNumbers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABassBallGameMode_GenerateNewNumbers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABassBallGameMode::execGenerateNewNumbers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateNewNumbers();
	P_NATIVE_END;
}
// End Class ABassBallGameMode Function GenerateNewNumbers

// Begin Class ABassBallGameMode
void ABassBallGameMode::StaticRegisterNativesABassBallGameMode()
{
	UClass* Class = ABassBallGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckBaseBallGame", &ABassBallGameMode::execCheckBaseBallGame },
		{ "GenerateNewNumbers", &ABassBallGameMode::execGenerateNewNumbers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABassBallGameMode);
UClass* Z_Construct_UClass_ABassBallGameMode_NoRegister()
{
	return ABassBallGameMode::StaticClass();
}
struct Z_Construct_UClass_ABassBallGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BassBallGameMode.h" },
		{ "ModuleRelativePath", "Public/BassBallGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecretNumbers_MetaData[] = {
		{ "Category", "Game Set" },
		{ "ModuleRelativePath", "Public/BassBallGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Isvictory_MetaData[] = {
		{ "Category", "victory check" },
		{ "ModuleRelativePath", "Public/BassBallGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecretNumbers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SecretNumbers;
	static void NewProp_Isvictory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Isvictory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABassBallGameMode_CheckBaseBallGame, "CheckBaseBallGame" }, // 635535625
		{ &Z_Construct_UFunction_ABassBallGameMode_GenerateNewNumbers, "GenerateNewNumbers" }, // 1668677209
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABassBallGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABassBallGameMode_Statics::NewProp_SecretNumbers_Inner = { "SecretNumbers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABassBallGameMode_Statics::NewProp_SecretNumbers = { "SecretNumbers", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABassBallGameMode, SecretNumbers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecretNumbers_MetaData), NewProp_SecretNumbers_MetaData) };
void Z_Construct_UClass_ABassBallGameMode_Statics::NewProp_Isvictory_SetBit(void* Obj)
{
	((ABassBallGameMode*)Obj)->Isvictory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABassBallGameMode_Statics::NewProp_Isvictory = { "Isvictory", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABassBallGameMode), &Z_Construct_UClass_ABassBallGameMode_Statics::NewProp_Isvictory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Isvictory_MetaData), NewProp_Isvictory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABassBallGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABassBallGameMode_Statics::NewProp_SecretNumbers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABassBallGameMode_Statics::NewProp_SecretNumbers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABassBallGameMode_Statics::NewProp_Isvictory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABassBallGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABassBallGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABassBallGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABassBallGameMode_Statics::ClassParams = {
	&ABassBallGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABassBallGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABassBallGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABassBallGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABassBallGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABassBallGameMode()
{
	if (!Z_Registration_Info_UClass_ABassBallGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABassBallGameMode.OuterSingleton, Z_Construct_UClass_ABassBallGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABassBallGameMode.OuterSingleton;
}
template<> BASEBALL_API UClass* StaticClass<ABassBallGameMode>()
{
	return ABassBallGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABassBallGameMode);
ABassBallGameMode::~ABassBallGameMode() {}
// End Class ABassBallGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_Public_BassBallGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABassBallGameMode, ABassBallGameMode::StaticClass, TEXT("ABassBallGameMode"), &Z_Registration_Info_UClass_ABassBallGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABassBallGameMode), 62165377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_Public_BassBallGameMode_h_1509263764(TEXT("/Script/BaseBall"),
	Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_Public_BassBallGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BaseBall_Source_BaseBall_Public_BassBallGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
