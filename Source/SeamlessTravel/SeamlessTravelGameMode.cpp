// Copyright Epic Games, Inc. All Rights Reserved.

#include "SeamlessTravelGameMode.h"
#include "SeamlessTravelCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASeamlessTravelGameMode::ASeamlessTravelGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
