// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"

AMyGameMode::AMyGameMode() {
	DefaultPawnClass = AMyCharacter::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
	GameStateClass = AMyGameState::StaticClass();
	HUDClass = AMyHUD::StaticClass();
	PlayerStateClass = AMyPlayerState::StaticClass();
	SpectatorClass = AMySpectatorPawn::StaticClass();
}
