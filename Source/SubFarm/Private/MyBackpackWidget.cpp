// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBackpackWidget.h"
#include "MyPlayerController.h"
#include "MyCharacter.h"
#include "BackpackItemWidget.h"
#include "MyItemObject.h"
#include <Kismet/GameplayStatics.h>


bool UMyBackpackWidget::Initialize()
{
	if (!Super::Initialize()) {


		//BackpackItems.Add(newItem);

		return false;
	}
    CurrrentPage = 0;
    FetchItems();
    PlantImage->SetVisibility(ESlateVisibility::Collapsed);
    // Load the UBackpackItemWidget class
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

void UMyBackpackWidget::FetchItems()
{
    WrapBox->ClearChildren();
    if (CurrrentPage == 0) {
        TSubclassOf<UBackpackItemWidget> ItemWidgetClass = LoadClass<UBackpackItemWidget>(nullptr, TEXT("/Game/BP_BackpackItemWidget.BP_BackpackItemWidget_C"));
        AMyCharacter* PlayerCharacter = Cast<AMyCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
        if (PlayerCharacter)
        {
            TMap<int, int> BackpackItemList = PlayerCharacter->PlayerBackpack.GetBackpackItemList();
            for (auto& Elem : BackpackItemList)
            {
                int Key = Elem.Key;
                int Value = Elem.Value;
                const FMyItemTableStruct* TableRow = UMyItemObject::FindItemTableRow(Key);
                if (TableRow != nullptr) {
                    const FString& ImageReference = TableRow->ImageReference;
                    if (ItemWidgetClass != nullptr)
                    {
                        UBackpackItemWidget* NewWidget = CreateWidget<UBackpackItemWidget>(this, ItemWidgetClass);
                        if (WrapBox && NewWidget)
                        {
                            NewWidget->initItemMessage(*TableRow, ImageReference, Value);
                            //NewWidget->SetItemContentImage(ImageReference);
                            //NewWidget->SetItemNumber(Value);
                            WrapBox->AddChildToWrapBox(NewWidget);

                        }
                    }
                }
            }
        }
    }
    else {
        // ³èÎïÒ³
        PlantImage->SetVisibility(ESlateVisibility::Visible);
        PetImage->SetVisibility(ESlateVisibility::Collapsed);
    }

}
