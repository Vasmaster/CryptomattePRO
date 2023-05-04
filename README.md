# CryptomattePRO
Custom MRQ setting for rendering Cryptomatte passes in UE5

The content on the repository is just duplicated folder structure of a newly created custom plugin in Unreal Engine 5.0.3 

In case the compiler gives **error** when trying to add this to your project keep in mind it should be placed in a 'Plugins' folder in the project folder. 
e.g. .../MyUEProject/Plugins/AOV_CryptomattePRO

The plugin is dependent on the MRQ library so make sure it is enabled in your project before you add this plugin. 

For those visiting from UnrealEngine Forum - The content of the custom Editor widget is not available for copy-right purpouses.

When added to your project create a new BP based on the **"ABaseActorManager"** class to access the Data struct available to store Tags and TaggedColors.
