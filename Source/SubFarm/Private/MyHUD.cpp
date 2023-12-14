// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHUD.h"

void AMyHUD::DrawHUD()
{
    Super::DrawHUD();

    // 确定屏幕尺寸

    // 绘制金币图标
    if (CoinIconTexture)
    {
        FVector2D IconPos(10, 10); // 左上角位置
        FVector2D IconSize(64, 64); // 图标尺寸
        DrawTextureSimple(CoinIconTexture, IconPos.X, IconPos.Y, 1.0f, false);
        DrawText(FString::Printf(TEXT("%d"), Coins), FColor::White, IconPos.X + IconSize.X + 10, IconPos.Y, nullptr, 1.0f, false);
    }

    // 绘制背包图标
    if (BackpackIconTexture)
    {
        FVector2D IconSize(64, 64); // 图标尺寸
    }
}
