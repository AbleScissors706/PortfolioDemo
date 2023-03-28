// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PortfolioDemo : ModuleRules
{
	public PortfolioDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" });
	}
}
