// Some copyright should be here...

using System.IO;
using UnrealBuildTool;

public class CryptomattePRO : ModuleRules
{
	public CryptomattePRO(ReadOnlyTargetRules Target) : base(Target)
	{
		bEnableUndefinedIdentifierWarnings = false;
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivateDefinitions.Add("WITH_PYTHON=1");
		// Get the path to the engine directory
		string EnginePath = Path.GetFullPath(Target.RelativeEnginePath);

		string PythonLibPath = Path.Combine(EnginePath, "Source", "ThirdParty", "Python3", "Win64", "libs");

		PublicIncludePaths.AddRange(
			new string[] 
				{
				// ... add public include paths required here ...
				Path.Combine(ModuleDirectory, "Public"),
				//in the Function below alocate the directory of Python{version} source on your disk. In case of difference in the Python{version} inuse replace {version} with the version as seen on your disk 
				Path.Combine(EnginePath, "Source", "ThirdParty", "Python3",  "Win64", "include"),
				Path.Combine(EnginePath, "Plugins", "Experimental", "PythonScriptPlugin", "Source", "PythonScriptPlugin", "Public"),
								
				}
			);

		PublicAdditionalLibraries.Add(Path.Combine(PythonLibPath, "python39.lib"));

		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
				  Path.Combine(ModuleDirectory, "Private"),
				  Path.Combine(EnginePath, "Plugins", "Experimental", "PythonScriptPlugin", "Source", "PythonScriptPlugin", "Private"),
				
				}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"UnrealEd",
				"PythonScriptPlugin",
				"MovieRenderPipelineCore",
				"MovieRenderPipelineEditor",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
