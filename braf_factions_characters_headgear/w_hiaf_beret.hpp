//--------------------------Beret----------------------------
//----- HIAF -----
class braf_hiaf_beret_itemInfo;
class braf_hiaf_beret_base;
class braf_hiaf_marine_Beret : braf_hiaf_beret_base {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2; 
    displayName = "[HIAF] Beret, Green (Marine)";
    picture = "\braf_factions\braf_factions_characters_headgear\data\Beret\ui\ui_hiaf_marine.paa";
    hiddenSelections[] = {
        "camo"
    };
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\Beret\hiaf\hiaf_marine_co.paa"
    };
    hiddenSelectionsMaterials[] = {
        "\braf_factions\braf_factions_characters_headgear\data\Beret\hiaf\hiaf_m_beret.rvmat"
    };
    class ItemInfo : braf_hiaf_beret_itemInfo {
        mass = 5;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "\BRAF_Factions\braf_factions_characters_headgear\data\Beret\hiaf\hiaf_marine_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "\BRAF_Factions\braf_factions_characters_headgear\data\Beret\hiaf\hiaf_m_beret.rvmat"
        };
    };
};
class braf_hiaf_army_Beret : braf_hiaf_marine_Beret {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "[HIAF] Beret, Brown (Army)";
    picture = "\BRAF_Factions\braf_factions_characters_headgear\data\Beret\ui\ui_hiaf_army.paa";
    hiddenSelectionsTextures[] = {
        "\BRAF_Factions\braf_factions_characters_headgear\data\Beret\hiaf\hiaf_army_co.paa"
    };
    hiddenSelectionsMaterials[] = {
        "\BRAF_Factions\braf_factions_characters_headgear\data\Beret\hiaf\hiaf_army_beret.rvmat"
    };
    class ItemInfo : braf_hiaf_beret_itemInfo {
        mass = 5;
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "\BRAF_Factions\braf_factions_characters_headgear\data\Beret\hiaf\hiaf_army_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "\BRAF_Factions\braf_factions_characters_headgear\data\Beret\hiaf\hiaf_army_beret.rvmat"
        };
    };
};