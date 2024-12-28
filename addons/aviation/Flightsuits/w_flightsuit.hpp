class braf_hiaf_pilot_coverall : braf_characters_army_aviation_flightsuit
{
    author = "BRAF Team";
	displayName="[HIAF] Pilot Flightsuit";
	//picture="\braf\braf_factions\addons\aviation\Flightsuits\data\hiaf\braf_hiaf_flightsuit_ui.paa";
    hiddenSelections[] = {
        "camo1",
        "air_certification",
        "air_wing",
        "aviation_force",
        "aviation_type",
        "flag",
        "identification",
        "squadron1",
        "squadron2",
        "tab",
        "vf1",
        "rank",
        "rank_old",
    };
	hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\aviation\Flightsuits\data\Camo1_gray_co.paa",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="braf_factions_hiaf_pilot";
		containerClass="Supply120";
		mass=20;
	};
};
class braf_cratenia_pilot_regular_Coverall : braf_characters_army_aviation_flightsuit
{
    author = "BRAF Team";
	displayName="[CRA] Pilot Flightsuit";
	//picture="braf\braf_factions\addons\aviation\Flightsuits\data\hiaf\braf_hiaf_flightsuit_ui.paa";
    hiddenSelections[] = {
        "camo1",
        "air_certification",
        "air_wing",
        "aviation_force",
        "aviation_type",
        "flag",
        "identification",
        "squadron1",
        "squadron2",
        "tab",
        "vf1",
        "rank",
        "rank_old",
    };
	hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\aviation\Flightsuits\data\Camo1_khaki_co.paa",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="braf_factions_cratenia_pilot";
		containerClass="Supply120";
		mass=20;
	};
};