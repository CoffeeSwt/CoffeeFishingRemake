class CfgPatches
{
	class CoffeeFishingRemake
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
		author = "Coffee_sw";
		name = "CoffeeFishingRemake";
	};
};
class CfgMods
{
	class CoffeeFishingRemake
	{
		type = "mod";
		name = "CoffeeFishingRemake";
		dependencies[] = { "Game","World","Mission" };
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Coffee\CoffeeFishingRemake\scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Coffee\CoffeeFishingRemake\scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Coffee\CoffeeFishingRemake\scripts\5_Mission"};
			};
		};
	};
};
class CfgVehicles{};
