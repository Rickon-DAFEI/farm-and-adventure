// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBackpackWidget.h"
#include "MyCharacter.h"
#include "MyPlayerController.h"
#include "MyItemObject.h"
#include <Kismet/GameplayStatics.h>



bool UMyBackpackWidget::Initialize()
{
	if (!Super::Initialize()) {


		//BackpackItems.Add(newItem);

		return false;
	}

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
                        NewWidget->SetItemContentImage(ImageReference);
                        NewWidget->SetItemNumber(Value);
                        WrapBox->AddChildToWrapBox(NewWidget);
                        
                    }
                }
            }
        }
    }
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
