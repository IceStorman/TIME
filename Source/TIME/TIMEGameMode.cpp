// Copyright Epic Games, Inc. All Rights Reserved.

#include "TIMEGameMode.h"
#include "TIMECharacter.h"
#include "UObject/ConstructorHelpers.h"

ATIMEGameMode::ATIMEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
