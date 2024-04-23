// Copyright Iheb Soltana.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CrypticCardBase.generated.h"

UCLASS()
class CRYPTICACADEMIA_API ACrypticCardBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACrypticCardBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
