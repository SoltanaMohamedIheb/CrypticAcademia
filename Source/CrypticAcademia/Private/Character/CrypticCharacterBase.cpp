// Copyright Iheb Soltana.


#include "Character/CrypticCharacterBase.h"

// Sets default values
ACrypticCharacterBase::ACrypticCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACrypticCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACrypticCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACrypticCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

