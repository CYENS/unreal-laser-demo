// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LaserDemo : ModuleRules
{
	public LaserDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
