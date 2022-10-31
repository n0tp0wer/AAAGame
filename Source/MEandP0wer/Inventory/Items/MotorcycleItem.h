// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MEAndP0wer/Inventory/Item.h"
#include "MotorcycleItem.generated.h"

/**
 * 
 */
UCLASS()
class MEANDP0WER_API UMotorcycleItem : public UItem
{
	GENERATED_BODY()
	
protected:

	virtual void Use(class AFPSCharacter* Character) override;
};
