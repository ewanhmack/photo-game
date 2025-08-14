// PhotoWidget.cpp

#include "PhotoWidget.h"
#include "Components/Image.h"
#include "Engine/Texture2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

void UPhotoWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Load and display the photos
	FString Directory = TEXT("C:/Users/ewanm/Documents/Unreal Projects/Photography/Saved/Screenshots/WindowsEditor/");
	TArray<FString> Files;
	IFileManager& FileManager = IFileManager::Get();

	// Find all PNG files in the directory
	FileManager.FindFiles(Files, *(Directory + "*.png"), true, false);

	// For simplicity, display the first photo (you can add logic to cycle through them)
	if (Files.Num() > 0)
	{
		FString FilePath = Directory + Files[0];
		SetPhoto(FilePath);
	}
}

void UPhotoWidget::SetPhoto(const FString& FilePath)
{
	UTexture2D* LoadedTexture = LoadTextureFromFile(FilePath);

	if (LoadedTexture && ImageWidget)
	{
		ImageWidget->SetBrushFromTexture(LoadedTexture);
	}
}

UTexture2D* UPhotoWidget::LoadTextureFromFile(const FString& FilePath)
{
	// Load the image into a texture
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (!PlatformFile.FileExists(*FilePath))
	{
		return nullptr;
	}

	TArray<uint8> RawFileData;

	if (FFileHelper::LoadFileToArray(RawFileData, *FilePath))
	{
		return UKismetRenderingLibrary::ImportBufferAsTexture2D(this, RawFileData);
	}

	return nullptr;
}
