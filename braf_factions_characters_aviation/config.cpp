class CfgPatches
{
	class braf_factions_characters_aviation
	{
		units[]=
		{
			// Units AvEx
			
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

class CfgVehicles
{
	#include "Flightsuits\v_flightsuit_hiaf.hpp"
	#include "v_cratenia.hpp"
	//#include "Flightsuits\v_flightsuit_cratenia.hpp"
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
	#include "Flightsuits\w_flightsuit_hiaf.hpp"
	//#include "Flightsuits\w_flightsuit_cratenia.hpp"
	#include "Flighthelmets\Alpha200\Alpha200.hpp"
	#include "Flighthelmets\HGU55\HGU55P.hpp"
	#include "Flighthelmets\HGU56\HGU56P.hpp"
};