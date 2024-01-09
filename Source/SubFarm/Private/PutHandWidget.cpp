// Fill out your copyright notice in the Description page of Project Settings.


#include "PutHandWidget.h"
#include "MyPlayerController.h"

void UPutHandWidget::SetHashIndex(int HashIndex)
{
	ItemIndex = HashIndex;
}

void UPutHandWidget::ConfirmPutOnHand()
{
    AMyPlayerController* MyController = Cast<AMyPlayerController>(GetWorld()->GetFirstPlayerController());
    if (MyController)
    {
        MyController->PutOnHand(ItemIndex);
    }
    RemoveFromParent();
}
bool UPutHandWidget::Initialize()
{
    if (!Super::Initialize()) {


        //BackpackItems.Add(newItem);

        return false;
    }

    ConfirmButton->OnClicked.AddDynamic(this, &UPutHandWidget::ConfirmPutOnHand);
    return true;

}
