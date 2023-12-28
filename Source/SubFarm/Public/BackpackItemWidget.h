// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "BackpackItemWidget.generated.h"

/**
 * 
 */
UCLASS()
class SUBFARM_API UBackpackItemWidget : public UUserWidget
{
	GENERATED_BODY()
	UPROPERTY(meta = (BindWidget))
	UImage* ItemBkgUrl;

	UPROPERTY(meta = (BindWidget))
	UImage* ItemContentUrl;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* NumberText;
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UBackpackItemWidget> BackpackItemWidgetClass;
	
	UFUNCTION()
	void SetItemContentImage(const FString& AssetPath, UImage* ImageWidget);
	UFUNCTION()
	void SetItemContentImage(const FString& AssetPath);
};
