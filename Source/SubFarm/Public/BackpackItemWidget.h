// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "PutHandWidget.h"
#include "MyItemObject.h"
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

	UPROPERTY(meta = (BindWidget))
	UButton* InteractiveButton;

	FMyItemTableStruct ItemDetail;


public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UBackpackItemWidget> BackpackItemWidgetClass;
	
	UFUNCTION()
	void SetItemContentImage(const FString& AssetPath);

	UFUNCTION()
	void ShowPanel();

	UFUNCTION()
	void SetItemNumber(int32 Number);
	UFUNCTION()
	void initItemMessage(FMyItemTableStruct ItemDetail, const FString& AssetPath, int32 Number);

	virtual bool Initialize() override;

	UPutHandWidget* PutHandWidget;


};
