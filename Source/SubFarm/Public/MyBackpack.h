// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

struct ItemDetailMessage {
	FString Name;
	FString ImageReference;
	int Type; // 0:Pet 1:Only for sale 2:Tool that can interactive with map 3:property can interactive with pet
};

struct ItemNumber {
	int HashIndex;
	int Number;
};



/**
 *
 */
class SUBFARM_API MyBackpack
{
private:
	TMap<int, int> BackpackItemList;
	TMap<int, ItemDetailMessage> ItemDetailMap;
public:

	MyBackpack();
	~MyBackpack();

	void AlterItemNumber(int ItemHashIndex, int Number);
	
	TMap<int, int> GetBackpackItemList() const { return BackpackItemList; }
};
