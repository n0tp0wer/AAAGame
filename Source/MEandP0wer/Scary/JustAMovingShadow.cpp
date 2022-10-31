// Fill out your copyright notice in the Description page of Project Settings.


#include "JustAMovingShadow.h"

// Sets default values
AJustAMovingShadow::AJustAMovingShadow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}

// Called when the game starts or when spawned
void AJustAMovingShadow::BeginPlay()
{
	Super::BeginPlay();
	
	targetPos = targetPos * GetActorTransform() ;
	
}

// Called every frame
void AJustAMovingShadow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	SetActorLocation(FMath::Lerp(GetActorLocation(), targetPos.GetLocation(), alpha));

	if (GetActorLocation() == targetPos.GetLocation())
	{
		Destroy();
	}

}

