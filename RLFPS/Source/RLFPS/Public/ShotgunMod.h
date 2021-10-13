// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bullet.h"
#include "ModBase.h"
#include "ShotgunMod.generated.h"

class AGun;

/**
 * 
 */
UCLASS()
class RLFPS_API UShotgunMod : public UModBase
{
	GENERATED_BODY()
	
public:
	UShotgunMod();
	~UShotgunMod();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float offsetMultiplier = 2;

	void OnApply();
	void OnFire( AGun* gun);
	void OnHit(AActor* actor);
	
};