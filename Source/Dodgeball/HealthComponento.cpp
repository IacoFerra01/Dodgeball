// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponento.h"
#include "HealthInterface.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UHealthComponento::UHealthComponento()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


void UHealthComponento::LoseHealth(float Amount)
{
	Health -= Amount;
	if (GetOwner()->Implements<UHealthInterface>())
	{
		IHealthInterface::Execute_OnTakeDamage(GetOwner());
	}
	if (Health <= 0.f)
	{
		Health = 0.f;
		if (GetOwner()->Implements<UHealthInterface>())
		{
			
			IHealthInterface::Execute_OnDeath(GetOwner());
		}
	}
}

// Called when the game starts
void UHealthComponento::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealthComponento::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

	

