// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBackpack.h"

MyBackpack::MyBackpack()
{
	ItemDetailMap.Add(2002, { TEXT("Tomato Seeds"), TEXT("TEST TOMATO PATH"), 2 });
	ItemDetailMap.Add(2003, { TEXT("Tomato"), TEXT("TEST TOMATO PATH"), 1 });
	//ItemDetailMessage newItemMessage;
	//newItemMessage.ImageReference = TEXT("TEST TOMATO PATH");
	//newItemMessage.Name = TEXT("Tomato Seeds");
	//newItemMessage.Type = 2;

	//ItemDetailMap.Add(2002, newItemMessage);

}

MyBackpack::~MyBackpack()
{
}

void MyBackpack::AlterItemNumber(int ItemHashIndex, int Number)
{
    int* ItemTemp = BackpackItemList.Find(ItemHashIndex);
    if (ItemTemp) {
        *ItemTemp += Number;
        if (*ItemTemp < 0) {
            *ItemTemp = 0;
        }
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Add Item %s %d"), *ItemDetailMap[ItemHashIndex].Name, *ItemTemp));
    }
    else {
        BackpackItemList.Add(ItemHashIndex, Number > 0 ? Number : 0);
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("New Item %s %d"), *ItemDetailMap[ItemHashIndex].Name, Number > 0 ? Number : 0));
    }
}

