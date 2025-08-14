// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Photography/PhotoWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoWidget() {}

// Begin Cross Module References
PHOTOGRAPHY_API UClass* Z_Construct_UClass_UPhotoWidget();
PHOTOGRAPHY_API UClass* Z_Construct_UClass_UPhotoWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Photography();
// End Cross Module References

// Begin Class UPhotoWidget Function SetPhoto
struct Z_Construct_UFunction_UPhotoWidget_SetPhoto_Statics
{
	struct PhotoWidget_eventSetPhoto_Parms
	{
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Photo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to set the image from the file path\n" },
#endif
		{ "ModuleRelativePath", "PhotoWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to set the image from the file path" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPhotoWidget_SetPhoto_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotoWidget_eventSetPhoto_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoWidget_SetPhoto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoWidget_SetPhoto_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoWidget_SetPhoto_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoWidget_SetPhoto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoWidget, nullptr, "SetPhoto", nullptr, nullptr, Z_Construct_UFunction_UPhotoWidget_SetPhoto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoWidget_SetPhoto_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhotoWidget_SetPhoto_Statics::PhotoWidget_eventSetPhoto_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoWidget_SetPhoto_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoWidget_SetPhoto_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhotoWidget_SetPhoto_Statics::PhotoWidget_eventSetPhoto_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhotoWidget_SetPhoto()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoWidget_SetPhoto_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhotoWidget::execSetPhoto)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPhoto(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UPhotoWidget Function SetPhoto

// Begin Class UPhotoWidget
void UPhotoWidget::StaticRegisterNativesUPhotoWidget()
{
	UClass* Class = UPhotoWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetPhoto", &UPhotoWidget::execSetPhoto },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhotoWidget);
UClass* Z_Construct_UClass_UPhotoWidget_NoRegister()
{
	return UPhotoWidget::StaticClass();
}
struct Z_Construct_UClass_UPhotoWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PhotoWidget.h" },
		{ "ModuleRelativePath", "PhotoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageWidget_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the Image widget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PhotoWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Image widget" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoWidget_SetPhoto, "SetPhoto" }, // 1581689341
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoWidget_Statics::NewProp_ImageWidget = { "ImageWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoWidget, ImageWidget), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageWidget_MetaData), NewProp_ImageWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoWidget_Statics::NewProp_ImageWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhotoWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Photography,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhotoWidget_Statics::ClassParams = {
	&UPhotoWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPhotoWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhotoWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhotoWidget()
{
	if (!Z_Registration_Info_UClass_UPhotoWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhotoWidget.OuterSingleton, Z_Construct_UClass_UPhotoWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhotoWidget.OuterSingleton;
}
template<> PHOTOGRAPHY_API UClass* StaticClass<UPhotoWidget>()
{
	return UPhotoWidget::StaticClass();
}
UPhotoWidget::UPhotoWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoWidget);
UPhotoWidget::~UPhotoWidget() {}
// End Class UPhotoWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Photography_Source_Photography_PhotoWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhotoWidget, UPhotoWidget::StaticClass, TEXT("UPhotoWidget"), &Z_Registration_Info_UClass_UPhotoWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhotoWidget), 2691949334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Photography_Source_Photography_PhotoWidget_h_260184294(TEXT("/Script/Photography"),
	Z_CompiledInDeferFile_FID_Photography_Source_Photography_PhotoWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Photography_Source_Photography_PhotoWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
