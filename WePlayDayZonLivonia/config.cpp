class CfgPatches
{
	class WePlayDayZonLivonia
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Gear_Consumables", "DZ_Vehicles_Wheeled", "DZ_Structures_Residential", "DZ_Sounds_Effects", "DZ_Sounds_Weapons"};
	};   
};
class CfgMods
{
	class WePlayDayZonLivonia
	{
		dir = "WePlayDayZonLivonia";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "WePlayDayZonLivonia";
		credits = "TheDalePlays";
		author = "TheDalePlays";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game"};
		
		class defs {
			class gameScriptModule {
				value = "";
				files[] = {"WePlayDayZonLivonia/scripts/3_Game"};
			};
		};
	};
};
class cfgVehicles
{
	class TShirt_ColorBase;
	class tshirt_white_tdp: TShirt_ColorBase
	{
		displayName="TheDalePlays t-shirt";
		descriptionShort="T-shirt by TheDalePlays";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"WePlayDayZonLivonia\i\tshirt_white_tdp.paa",
			"WePlayDayZonLivonia\i\tshirt_white_tdp.paa",
			"WePlayDayZonLivonia\i\tshirt_white_tdp.paa"
		};
	};
};		