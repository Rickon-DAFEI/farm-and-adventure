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
	if (BackpackItemList.Find(ItemHashIndex)) {
		BackPackItem* ItemTemp = &BackpackItemList[ItemHashIndex];
		ItemTemp->Number += Number;
		ItemTemp->Number = fmax(0, ItemTemp->Number);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Add Item"));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("New Item"));
	}

	//for (const TPair<KeyType, ValueType>& Pair : MyMap)
	//{
	//	KeyType Key = Pair.Key;
	//	ValueType Value = Pair.Value;
	//}
}

