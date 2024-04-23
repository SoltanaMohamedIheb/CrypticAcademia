// Copyright Iheb Soltana.

using UnrealBuildTool;
using System.Collections.Generic;

public class CrypticAcademiaTarget : TargetRules
{
	public CrypticAcademiaTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "CrypticAcademia" } );
	}
}
