// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"

bool UMyUserWidget::Initialize()
{
	if (!Super::Initialize()) {
		return false;
	}
	ButtonStart->OnClicked.AddDynamic(this, &UMyUserWidget::Start);
	ButtonQuit->OnClicked.AddDynamic(this, &UMyUserWidget::Quit);
	return true;
}

void UMyUserWidget::Start()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Start"));
	UpdateHealth();
}

void UMyUserWidget::Quit()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Quit"));
}

void UMyUserWidget::UpdateHealth()
{
	if (CurrentHealth <= 0) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Death"));
	}
	else {
		CurrentHealth -= 10;
	}
}
