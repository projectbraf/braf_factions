class CfgPatches
{
	class braf_factions_characters_aviation
	{
		units[]=
		{
			// Units AvEx
			"braf_factions_hiaf_pilot_regular",
			"braf_factions_cratenia_pilot"
		};
		weapons[]=
		{
			
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Data_F",
			"A3_Characters_F_Heads",
			"A3Data",
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_Proxies",
			"braf_characters_aviation"
		};
	};
};

class EventHandlers;
class CfgVehicles
{
	class braf_characters_aviation_army_aviation_pilot;
	#include "Flightsuits\v_flightsuit.hpp"
};
class CfgWeapons
{
	class ItemCore;
	class HeadGearItem;
	class Uniform_Base: ItemCore{};
	class UniformItem;
	class H_HelmetB;
	class Vest_Camo_Base;
	class V_RebreatherB;
	class VestItem;
	class braf_characters_army_aviation_flightsuit;
	#include "Flightsuits\w_flightsuit.hpp"
	#include "Flighthelmets\Alpha200\Alpha200.hpp"
	#include "Flighthelmets\HGU55\HGU55P.hpp"
	#include "Flighthelmets\HGU56\HGU56P.hpp"
};