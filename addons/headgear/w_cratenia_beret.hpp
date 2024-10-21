//--------------------------Beret----------------------------
//----- CRATENIA -----
class braf_cratenia_beret_itemInfo : braf_hiaf_beret_itemInfo {
	uniformModel ="\A3\Characters_F\Common\headgear_beret01.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { "\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_regular_co.paa"};
    hiddenSelectionsMaterials[] = { "\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_regular.rvmat"};
};
class braf_cratenia_army_beret : braf_hiaf_beret_base {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2; 
    displayName = "[CRA] Beret, Blue (Army)";
	//picture = "\braf\braf_factions\addons\headgear\data\Beret\ui\ui_hiaf_army.paa";
    hiddenSelections[] = {
        "camo"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_regular_co.paa"
    };
    hiddenSelectionsMaterials[] = {
        "\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_regular.rvmat"
    };
    class ItemInfo : braf_cratenia_beret_itemInfo {
        mass = 5;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_regular_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_regular.rvmat"
        };
    };
};
class braf_cratenia_jungle_beret : braf_cratenia_army_beret {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "[CRA] Beret, Black (Jungle)";
    //picture = "\braf\braf_factions\addons\headgear\data\Beret\ui\ui_hiaf_army.paa";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_sf_co.paa"
    };
    hiddenSelectionsMaterials[] = {
        "\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_sf.rvmat"
    };
    class ItemInfo : braf_cratenia_beret_itemInfo {
        mass = 5;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_sf_co.paa"
		};
		hiddenSelectionsMaterials[] = {
		"\braf\braf_factions\addons\headgear\data\Beret\cratenia\cratenia_sf.rvmat"
		};
    };
};