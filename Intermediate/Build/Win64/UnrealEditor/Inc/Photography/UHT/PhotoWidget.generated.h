// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhotoWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHOTOGRAPHY_PhotoWidget_generated_h
#error "PhotoWidget.generated.h already included, missing '#pragma once' in PhotoWidget.h"
#endif
#define PHOTOGRAPHY_PhotoWidget_generated_h

#define FID_Photography_Source_Photography_PhotoWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPhoto);


#define FID_Photography_Source_Photography_PhotoWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhotoWidget(); \
	friend struct Z_Construct_UClass_UPhotoWidget_Statics; \
public: \
	DECLARE_CLASS(UPhotoWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Photography"), NO_API) \
	DECLARE_SERIALIZER(UPhotoWidget)


#define FID_Photography_Source_Photography_PhotoWidget_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhotoWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhotoWidget(UPhotoWidget&&); \
	UPhotoWidget(const UPhotoWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhotoWidget) \
	NO_API virtual ~UPhotoWidget();


#define FID_Photography_Source_Photography_PhotoWidget_h_9_PROLOG
#define FID_Photography_Source_Photography_PhotoWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Photography_Source_Photography_PhotoWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Photography_Source_Photography_PhotoWidget_h_12_INCLASS_NO_PURE_DECLS \
	FID_Photography_Source_Photography_PhotoWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHOTOGRAPHY_API UClass* StaticClass<class UPhotoWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Photography_Source_Photography_PhotoWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
