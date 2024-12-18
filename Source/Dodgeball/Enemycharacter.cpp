// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "DodgeballProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "LookAtActorComponent.h"

// Sets default values
AEnemycharacter::AEnemycharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//SightSource = CreateDefaultSubobject<USceneComponent>(TEXT("Sight Source1"));
	//SightSource->SetupAttachment(RootComponent);
	LookAtActorComponent = CreateDefaultSubobject<ULookAtActorComponent>(TEXT("Look At Actor Component"));
	LookAtActorComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AEnemycharacter::BeginPlay()
{
	Super::BeginPlay();

	// Fetch the character currently being controlled by the player
	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	LookAtActorComponent->SetTarget(PlayerCharacter);

}

// Called every frame
void AEnemycharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Fetch the character currently being controlled by the player
	//ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	// Look at the player character every frame
	//bCanSeePlayer = LookAtActor(PlayerCharacter);
	bCanSeePlayer = LookAtActorComponent->CanSeeTarget();

	if (bCanSeePlayer != bPreviousCanSeePlayer)
	{
		if (bCanSeePlayer)
		{
			//Start throwing dodgeballs
			GetWorldTimerManager().SetTimer(ThrowTimerHandle,this,&AEnemycharacter::ThrowDodgeball,ThrowingInterval,true,ThrowingDelay);
		}
		else
		{
			//Stop throwing dodgeballs
			GetWorldTimerManager().ClearTimer(ThrowTimerHandle);
		}
	}

	bPreviousCanSeePlayer = bCanSeePlayer;
}

//CanSeeActor Line trace version
/*
bool AEnemycharacter::LookAtActor(AActor * TargetActor)
{
	if (TargetActor == nullptr) return false;
	const TArray<const AActor*> IgnoreActors = {this, TargetActor};
	//if (CanSeeActor(TargetActor))
	if (UDodgeballFunctionLibrary::CanSeeActor(GetWorld(),SightSource->GetComponentLocation(),TargetActor,IgnoreActors))
	{
		
		FVector start = GetActorLocation();
		FVector end = TargetActor->GetActorLocation();
		//calculate the rotation
		FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(start, end);
		//set enemy rotation

		SetActorRotation(LookAtRotation);

		return true;
		

	}
	return false;
}

bool AEnemycharacter::CanSeeActor(const AActor * TargetActor)
{

	if (TargetActor == nullptr) return false;
	FHitResult Hit;//result of Line trace
	
	//start and end of LT
	FVector Start = SightSource->GetComponentLocation();
	FVector End = TargetActor->GetActorLocation();

	//LT visibility
	ECollisionChannel Channel = ECollisionChannel::ECC_GameTraceChannel1;
	//ECollisionChannel Channel = ECollisionChannel::ECC_Visibility;
	FCollisionQueryParams QueryParams;
	//Ignore actor that's execute this LT
	QueryParams.AddIgnoredActor(this);

	QueryParams.AddIgnoredActor(TargetActor);

	//Execute the LT
	GetWorld()->LineTraceSingleByChannel(Hit, Start, End, Channel, QueryParams);

	//show LT

	DrawDebugLine(GetWorld(), Start, End, FColor::Red);

	return !Hit.bBlockingHit;
}
*/
void AEnemycharacter::ThrowDodgeball()
{
	if (DodgeballClass == nullptr)
	{
		return;
	}

	FVector ForwardVector = GetActorForwardVector();
	float SpawnDistance = 40.f;
	FVector SpawnLocation = GetActorLocation() + (ForwardVector * SpawnDistance);
	FTransform SpawnTransform(GetActorRotation(), SpawnLocation);

	//Spawn new dodgeball
	ADodgeballProjectile* Projectile = GetWorld()->SpawnActorDeferred<ADodgeballProjectile>(DodgeballClass, SpawnTransform);

	Projectile->GetProjectileMovementComponent()->InitialSpeed = 2200.f;
	Projectile->FinishSpawning(SpawnTransform);
}