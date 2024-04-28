// Copyright Iheb Soltana.


#include "AbilitySystem/CrypticAttributeSet.h"
#include "AbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

UCrypticAttributeSet::UCrypticAttributeSet()
{
	
}

void UCrypticAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UCrypticAttributeSet, Essence, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UCrypticAttributeSet, MaxEssence, COND_None, REPNOTIFY_Always);
}

void UCrypticAttributeSet::OnRep_Essence(const FGameplayAttributeData& OldEssence)  const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCrypticAttributeSet, Essence, OldEssence);
}

void UCrypticAttributeSet::OnRep_MaxEssence(const FGameplayAttributeData& OldMaxEssence)  const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCrypticAttributeSet, MaxEssence, OldMaxEssence);
}
