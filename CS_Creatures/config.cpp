class CfgPatches
{
    class CS_Creatures
    {
		units[]={};
		weapons[]={};
        requiredAddons[] = {"DZ_Data"};
    };
};
class CfgMods
{
	class CS_Creatures
	{	
		dir = "CS_Creatures";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "CS_Creatures";
		author = "CanadianSniper";
		authorID = "2039448058";
		version = "1.0";
		extra = 0;
		
		type = "mod";
		dependencies[]=
		{
			"Game",
			"World"
		};
		
		class defs
		{
			class gameScriptModule
            {
                value = "";
                files[] = {"CS_Creatures/Scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"CS_Creatures/Scripts/4_World"};
			};
		};
	};
};
