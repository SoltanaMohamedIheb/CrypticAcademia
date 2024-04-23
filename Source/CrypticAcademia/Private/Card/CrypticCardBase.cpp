// Copyright Iheb Soltana.


#include "Card/CrypticCardBase.h"

// Sets default values
ACrypticCardBase::ACrypticCardBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACrypticCardBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACrypticCardBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

