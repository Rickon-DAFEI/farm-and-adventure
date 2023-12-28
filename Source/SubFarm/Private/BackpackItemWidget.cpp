// Fill out your copyright notice in the Description page of Project Settings.


#include "BackpackItemWidget.h"


void UBackpackItemWidget::SetItemContentImage(const FString& AssetPath, UImage* ImageWidget) {
    if (!ImageWidget)
    {
        return;
    }

    UTexture2D* ImageTexture = LoadObject<UTexture2D>(nullptr, *AssetPath);
    if (ImageTexture)
    {
        ImageWidget->SetBrushFromTexture(ImageTexture);
    }
}

void UBackpackItemWidget::SetItemContentImage(const FString& AssetPath)
{
    UTexture2D* ImageTexture = LoadObject<UTexture2D>(nullptr, *AssetPath);
    if (ImageTexture)
    {
        ItemContentUrl->SetBrushFromTexture(ImageTexture);
    }
}
