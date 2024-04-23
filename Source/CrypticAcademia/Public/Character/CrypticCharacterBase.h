// Copyright Iheb Soltana.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CrypticCharacterBase.generated.h"

UCLASS()
class CRYPTICACADEMIA_API ACrypticCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACrypticCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};