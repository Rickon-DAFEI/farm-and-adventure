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
    if (BackpackItemList.Contains(ItemHashIndex))
    {
        BackpackItemList[ItemHashIndex] += Number;

        if (BackpackItemList[ItemHashIndex] <= 0)
        {
            BackpackItemList.Remove(ItemHashIndex);
        }
    }
    else if (Number > 0)
    {
        BackpackItemList.Add(ItemHashIndex, Number);
    }

}

