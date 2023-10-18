class BRAF_1BAvEx_Pilot;
class braf_hiaf_pilot_regular : BRAF_1BAvEx_Pilot
{
	side=1;
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
	_generalMacro="braf_factions_hiaf_pilot";
	displayName="Pilot";
	uniformClass="braf_hiaf_pilot_regular_Coverall";
    genericNames = "TanoanMen";
    identityTypes[] = {
        "NoGlasses",
        "LanguageFRE_F",
        "Head_NATO"
    };
	linkedItems[]=
	{
		"BRAF_HGU56P_black",
		"BRAF_flightvest_02",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles_OPFOR"
	};
	respawnLinkedItems[]=
	{
		"BRAF_HGU56P_black",
		"BRAF_flightvest_02",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles"
	};
	weapons[]=
	{
		"hgun_ACPC2_F",
		"Binocular",
		"Throw",
		"Put"
	};
	respawnWeapons[]=
	{
		"hgun_ACPC2_F",
		"Binocular",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"SmokeShellRed",
		"SmokeShellOrange",
		"SmokeShellYellow",
		"Chemlight_red",
		"Chemlight_red"
	};
	respawnMagazines[]=
	{
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"SmokeShellRed",
		"SmokeShellOrange",
		"SmokeShellYellow",
		"Chemlight_red",
		"Chemlight_red"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\characters_aviation\Flightsuits\data\hiaf\Coverall_co.paa",
		"braf\braf_factions\addons\characters_aviation\Flightsuits\data\luva_co.paa",
		"braf\braf_factions\addons\characters_aviation\Flightsuits\data\Boot\boot_co.paa",
		"",
		""
	};
	hiddenSelectionsMaterials[]=
	{
		"\braf\braf_factions\addons\aviation\Flightsuits\data\hiaf\Coverall.rvmat",
		"\braf\braf_factions\addons\aviation\Flightsuits\data\luva.rvmat",
		"\braf\braf_factions\addons\aviation\Flightsuits\data\Boot\boot.rvmat",
		"",
		""
	};
};