// Copyright Iheb Soltana.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "CrypticAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class CRYPTICACADEMIA_API UCrypticAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UCrypticAttributeSet();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_Essence, Category = "Vital Attributes")
	FGameplayAttributeData Essence;

	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_MaxEssence, Category = "Vital Attributes")
	FGameplayAttributeData MaxEssence;

	UFUNCTION()
	void OnRep_Essence(const FGameplayAttributeData& OldEssence) const;

	UFUNCTION()
	void OnRep_MaxEssence(const FGameplayAttributeData& OldMaxEssence) const;
};




