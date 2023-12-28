// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


/**
 *
 */
class SUBFARM_API MyBackpack
{
private:
	TMap<int, int> BackpackItemList;
public:

	MyBackpack();
	~MyBackpack();

	void AlterItemNumber(int ItemHashIndex, int Number);
	
	TMap<int, int> GetBackpackItemList() const { return BackpackItemList; }
};
