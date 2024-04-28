// Copyright Iheb Soltana.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CrypticCharacterBase.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;

UCLASS(Abstract)
class CRYPTICACADEMIA_API ACrypticCharacterBase : public ACharacter
{
	
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACrypticCharacterBase();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
	
	
private:	
	void InitAbilityActorInfo();

};
