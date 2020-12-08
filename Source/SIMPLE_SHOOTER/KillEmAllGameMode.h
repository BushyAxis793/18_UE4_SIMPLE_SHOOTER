// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SIMPLE_SHOOTERGameModeBase.h"
#include "KillEmAllGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLE_SHOOTER_API AKillEmAllGameMode : public ASIMPLE_SHOOTERGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn *PawnKilled) override;

private:
	void EndGame(bool bIsPlayerWinner);
};
