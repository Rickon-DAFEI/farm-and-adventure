// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class SUBFARM_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	//UPROPERTY(meta = (BindWidget))
	//UButton* ButtonStart;
	//UPROPERTY(meta = (BindWidget))
	//UButton* ButtonQuit;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* MoneyText;

	UPROPERTY(meta = (BindWidget))
	UImage* MoneyImageWidget;

	UPROPERTY(meta = (BindWidget))
	UImage* BackpackImageWidget;

	UPROPERTY(meta = (BindWidget))
	UButton* BackpackButton;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyHealth")
	//float CurrentHealth = 100.0f;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyHealth")
	//float MaxHealth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyUserWidget")
	int Money;
	//void UpdateHealth();

	virtual bool Initialize() override;

	UFUNCTION()
	void OpenBackpack();
	//UFUNCTION()
	//void Quit();


};
