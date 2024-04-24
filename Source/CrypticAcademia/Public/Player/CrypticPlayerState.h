// Copyright Iheb Soltana.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "CrypticPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class CRYPTICACADEMIA_API ACrypticPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ACrypticPlayerState();

protected:

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
	
	
};
