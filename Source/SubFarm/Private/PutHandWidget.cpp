// Fill out your copyright notice in the Description page of Project Settings.


#include "PutHandWidget.h"

void UPutHandWidget::SetHashIndex(int HashIndex)
{
	ItemIndex = HashIndex;
}

void UPutHandWidget::ConfirmPutOnHand()
{

    RemoveFromViewport();
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
