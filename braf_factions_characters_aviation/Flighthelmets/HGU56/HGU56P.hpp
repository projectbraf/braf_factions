class BRAF_HGU56P_1BAvEx;
class BRAF_HGU56P_Crew_1BAvEx;

class BRAF_HGU56P_Black: BRAF_HGU56P_1BAvEx
{
	_generalMacro="BRAF_HGU56P_Black";
	displayName="HGU-56P Black";
	hiddenSelectionsTextures[]=
	{
		"braf_factions\braf_factions_characters_aviation\Flighthelmets\HGU56\data\HGU_black_co.paa"
	};
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"braf_factions\braf_factions_characters_aviation\Flighthelmets\HGU56\data\HGU_black_co.paa"};
		uniformModel="A3\Characters_F\Common\headgear_helmet_heli";
		mass=30;
		modelSides[]={1,2,3};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName="HitHead";
				armor=6;
				passThrough=0.5;
			};
		};
	};
};
class BRAF_HGU56P_Crew_Predator: BRAF_HGU56P_Crew_1BAvEx
{
	_generalMacro="BRAF_HGU56P_Crew_Predator";
	displayName="HGU-56P Mask Predator";
	hiddenSelectionsTextures[]=
	{
		"braf_factions\braf_factions_characters_aviation\Flighthelmets\HGU56\data\HGU_Predator_co.paa"
	};
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"braf_factions\braf_factions_characters_aviation\Flighthelmets\HGU56\data\HGU_Predator_co.paa"};	
		uniformModel="A3\Characters_F\Common\headgear_helmet_heli_shield";
		mass=50;
		modelSides[]={1,2,3};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName="HitHead";
				armor=6;
				passThrough=0.5;
			};
			class Face
			{
				hitpointName="HitFace";
				armor=4;
				passThrough=0.5;
			};
		};
	};
};
class BRAF_HGU56P_Crew_Black: BRAF_HGU56P_Crew_1BAvEx
{
	_generalMacro="BRAF_HGU56P_Crew_black";
	displayName="HGU-56P Black Mask";
	hiddenSelectionsTextures[]=
	{
		"braf_factions\braf_factions_characters_aviation\Flighthelmets\HGU56\data\HGU_black_co.paa"
	};
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"braf_factions\braf_factions_characters_aviation\Flighthelmets\HGU56\data\HGU_black_co.paa"};	
		uniformModel="A3\Characters_F\Common\headgear_helmet_heli_shield";
		mass=50;
		modelSides[]={1,2,3};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName="HitHead";
				armor=6;
				passThrough=0.5;
			};
			class Face
			{
				hitpointName="HitFace";
				armor=4;
				passThrough=0.5;
			};
		};
	};
};