// Fill out your copyright notice in the Description page of Project Settings.
#include "MyUserWidget.h"
#include "MyPlayerController.h"

bool UMyUserWidget::Initialize()
{
	if (!Super::Initialize()) {
		return false;
	}
	BackpackButton->OnClicked.AddDynamic(this, &UMyUserWidget::OpenBackpack);
	Money = 1000;
	UpdateMoneyWidget();
	CloseHint();
	return true;
}

void UMyUserWidget::OpenBackpack()
{
	AMyPlayerController* MyController = Cast<AMyPlayerController>(GetWorld()->GetFirstPlayerController());
	if (MyController)
	{
		MyController->AddBackpackWidgetToViewport();
	}
}

void UMyUserWidget::AlterMoney(int alterNumber)
{
	FString TextString = FString::Printf(TEXT("%d %d"), Money, alterNumber);
	FText TextValue = FText::FromString(TextString);
	Money += alterNumber;
	MoneyText->SetText(TextValue);
	GetWorld()->GetTimerManager().SetTimer(MoneyTimerHandle, this, &UMyUserWidget::UpdateMoneyWidget, 3.0f, false);
}

void UMyUserWidget::UpdateMoneyWidget()
{
	MoneyText->SetText(FText::AsNumber(Money));
}

void UMyUserWidget::UpdateHint(FText HintMessage)
{

	HintWord->SetText(HintMessage);

	HintImage->SetVisibility(ESlateVisibility::Visible);
	HintWord->SetVisibility(ESlateVisibility::Visible);
	
	GetWorld()->GetTimerManager().SetTimer(HintTimerHandle, this, &UMyUserWidget::CloseHint, 3.0f, false);
}

void UMyUserWidget::CloseHint()
{
	HintImage->SetVisibility(ESlateVisibility::Collapsed);
	HintWord->SetVisibility(ESlateVisibility::Collapsed);
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
