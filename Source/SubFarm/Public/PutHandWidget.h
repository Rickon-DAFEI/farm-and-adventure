// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "MyPlayerController.h"
#include "PutHandWidget.generated.h"
/**
 * 
 */
UCLASS()
class SUBFARM_API UPutHandWidget : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))

	UButton* ConfirmButton;

	int32 ItemIndex;

	virtual bool Initialize() override;


public:
	UFUNCTION()
	void SetHashIndex(int HashIndex);

	UFUNCTION()
	void ConfirmPutOnHand();

};
