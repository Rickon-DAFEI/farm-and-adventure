// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBackpackWidget.h"
#include "MyCharacter.h"
#include "MyPlayerController.h"
#include <Kismet/GameplayStatics.h>

bool UMyBackpackWidget::Initialize()
{
	if (!Super::Initialize()) {


		//BackpackItems.Add(newItem);



		return false;
	}
    AMyCharacter* PlayerCharacter = Cast<AMyCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    if (PlayerCharacter)
    {
        TMap<int, int> BackpackItemList = PlayerCharacter->PlayerBackpack.GetBackpackItemList();
        for (auto& Elem : BackpackItemList)
        {
            int Key = Elem.Key;
            int Value = Elem.Value;

        }
    }
    // Load the UBackpackItemWidget class
    TSubclassOf<UBackpackItemWidget> ItemWidgetClass = LoadClass<UBackpackItemWidget>(nullptr, TEXT("/Game/BP_BackpackItemWidget.BP_BackpackItemWidget_C"));

    if (ItemWidgetClass != nullptr)
    {
        // Create an instance of UBackpackItemWidget
        UBackpackItemWidget* NewWidget = CreateWidget<UBackpackItemWidget>(this, ItemWidgetClass);
        // Assuming WrapBox is a valid pointer to a UWrapBox
        if (WrapBox && NewWidget)
        {
            // Add the new widget to the WrapBox
            WrapBox->AddChildToWrapBox(NewWidget);
        }
    }
    CloseButton->OnClicked.AddDynamic(this, &UMyBackpackWidget::CloseBackpack);

	return true;
}

void UMyBackpackWidget::CloseBackpack()
{
    AMyPlayerController* MyController = Cast<AMyPlayerController>(GetWorld()->GetFirstPlayerController());
    if (MyController)
    {

        MyController->RemoveBackpackWidgetToViewport();
    }
}
