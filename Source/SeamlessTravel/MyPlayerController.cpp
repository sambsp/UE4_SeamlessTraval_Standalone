// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

void AMyPlayerController::DoTravel(FString map) {
	UE_LOG(LogTemp, Warning, TEXT("Do the travel.........................."));
	ClientTravel(map, TRAVEL_Relative);
}