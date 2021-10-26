// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModBase.h"
#include "AcidMod.generated.h"

/**
 * 
 */
UCLASS()
class RLFPS_API UAcidMod : public UModBase
{
	GENERATED_BODY()
	

public:
	UAcidMod();
	~UAcidMod();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<AActor> acidActorClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float chance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float additionalchancePerStack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float strength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float additionalStrengthPerStack;



	void OnHit(AActor* actor);

};