// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBackpack.h"

MyBackpack::MyBackpack()
{
}

MyBackpack::~MyBackpack()
{
}

void MyBackpack::AlterItemNumber(int ItemHashIndex, int Number)
{
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Add Item %d %d"), ItemHashIndex, Number));
  /*  int* ItemTemp = BackpackItemList.Find(ItemHashIndex);
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
    }*/
}

