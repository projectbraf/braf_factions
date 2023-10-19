class BRAF_1BAvEx_Pilot_Coverall;
class braf_hiaf_pilot_regular_Coverall : BRAF_1BAvEx_Pilot_Coverall
{
	displayName="[HIAF] Pilot Flightsuit";
	picture="braf\braf_factions\addons\aviation\Flightsuits\data\hiaf\braf_hiaf_flightsuit_ui.paa";
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="braf_hiaf_pilot_regular";
		containerClass="Supply120";
		mass=20;
		hiddenSelections[]={"camo"};
	};
};