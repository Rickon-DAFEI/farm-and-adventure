
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/WrapBox.h"
#include "BackpackItemWidget.h"
#include "MyBackpackWidget.generated.h"


/**
 * 
 */
UCLASS()
class SUBFARM_API UMyBackpackWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(meta = (BindWidget))
	UImage* PetImage;

	UPROPERTY(meta = (BindWidget))
	UImage* MainImage;

	UPROPERTY(meta = (BindWidget))
	UImage* PlantImage;

	UPROPERTY(meta = (BindWidget))
	UButton* SwitchButton;

	UPROPERTY(meta = (BindWidget))
	UButton* CloseButton;

	UPROPERTY(meta = (BindWidget))
	UImage* CloseImage;

	UPROPERTY(meta = (BindWidget))
	UWrapBox* WrapBox;

	virtual bool Initialize() override;


	UFUNCTION()
	void CloseBackpack();
};
