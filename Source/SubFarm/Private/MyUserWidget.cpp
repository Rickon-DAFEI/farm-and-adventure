// Fill out your copyright notice in the Description page of Project Settings.
#include "MyUserWidget.h"
#include "MyPlayerController.h"

bool UMyUserWidget::Initialize()
{
	if (!Super::Initialize()) {
		return false;
	}
	BackpackButton->OnClicked.AddDynamic(this, &UMyUserWidget::OpenBackpack);
	return true;
}

void UMyUserWidget::OpenBackpack()
{
	AMyPlayerController* MyController = Cast<AMyPlayerController>(GetWorld()->GetFirstPlayerController());
	if (MyController)
	{
		MyController->AddBackpackWidgetToViewport();
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("open backpack"));
}

//void UMyUserWidget::Start()
//{
//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Start"));
//	UpdateHealth();
//}
//
//void UMyUserWidget::Quit()
//{
//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Quit"));
//}
//
//void UMyUserWidget::UpdateHealth()
//{
//	if (CurrentHealth <= 0) {
//		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Death"));
//	}
//	else {
//		CurrentHealth -= 10;
//	}
//}
