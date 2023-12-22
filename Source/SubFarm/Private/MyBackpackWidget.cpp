// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBackpackWidget.h"
#include "MyCharacter.h"
#include <Kismet/GameplayStatics.h>

bool UMyBackpackWidget::Initialize()
{
	if (!Super::Initialize()) {


		//BackpackItems.Add(newItem);



		return false;
	}
	return false;
}

void UMyBackpackWidget::FreshBackPack()
{
    AMyCharacter* PlayerCharacter = Cast<AMyCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    if (PlayerCharacter)
    {
        TMap<int, int> BackpackItemList = PlayerCharacter->PlayerBackpack.GetBackpackItemList();
        for (auto& Elem : BackpackItemList)
        {
            int Key = Elem.Key;
            int Value = Elem.Value;
            // 在这里处理每个键值对
            // 例如，打印键和值
            UE_LOG(LogTemp, Warning, TEXT("Item: %d, Quantity: %d"), Key, Value);
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
}
