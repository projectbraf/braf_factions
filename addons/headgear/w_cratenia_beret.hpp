//--------------------------Beret----------------------------
//----- CRATENIA -----
class braf_cratenia_beret_itemInfo : braf_hiaf_beret_itemInfo  {
	uniformModel ="\A3\Characters_F\Common\headgear_beret01.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { "\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_regular_co.paa"};
};
class H_Beret_blk;
class braf_cratenia_army_beret : H_Beret_blk {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2; 
    displayName = "[CRA] Beret, Blue (Army)";
	picture = "\braf\braf_factions\addons\headgear\data\Beret\ui\braf_cratenia_army_beret_ca.paa";
    hiddenSelections[] = {
        "camo"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_regular_co.paa"
    };
    class ItemInfo : braf_cratenia_beret_itemInfo {
        mass = 5;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_regular_co.paa"
        };
    };
};
class braf_cratenia_jungle_beret : braf_cratenia_army_beret {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "[CRA] Beret, Black (Jungle)";
    picture = "\braf\braf_factions\addons\headgear\data\Beret\ui\braf_cratenia_jungle_beret_ca.paa";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_sf_co.paa"
    };
    class ItemInfo : braf_cratenia_beret_itemInfo {
        mass = 5;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_sf_co.paa"
		};
    };
};