// PhotoWidget.h

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PhotoWidget.generated.h"

UCLASS()
class YOURPROJECT_API UPhotoWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	// Function to set the image from the file path
	UFUNCTION(BlueprintCallable, Category = "Photo")
	void SetPhoto(const FString& FilePath);

private:
	// Reference to the Image widget
	UPROPERTY(meta = (BindWidget))
	class UImage* ImageWidget;

	// Helper function to load texture from file
	UTexture2D* LoadTextureFromFile(const FString& FilePath);
};
