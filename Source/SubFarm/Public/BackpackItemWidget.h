// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BackpackItemWidget.generated.h"

/**
 * 
 */
UCLASS()
class SUBFARM_API UBackpackItemWidget : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	FString ItemBkgUrl;

	UPROPERTY(meta = (BindWidget))
	FString ItemContentUrl;

	UPROPERTY(meta = (BindWidget))
	FString NumberText;
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UBackpackItemWidget> BackpackItemWidgetClass;
};
