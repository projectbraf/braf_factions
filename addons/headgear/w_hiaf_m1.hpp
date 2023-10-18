//--------------------------M1 Steel----------------------------
//----- HIAF -----
class braf_hiaf_M1_cover_late : braf_m1_cover_late_lz {
    displayName = "[HIAF] M1, Army Lizard";
    picture = "\braf\braf_factions\addons\headgear\data\M1\ui\m1_cover_late_hiaf_ui.paa";
    hiddenSelections[] = { "camo", "camo2", "camo3" };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\headgear\data\M1\m1_CO.paa",
        "\braf\braf_factions\addons\headgear\data\M1\hiaf\HIAF_coifa_late_CO.paa",
        ""
    };
    class ItemInfo : braf_steel_helmet {
        hiddenSelections[] = { "camo", "camo2", "camo3" };
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\headgear\data\M1\m1_CO.paa",
            "\braf\braf_factions\addons\headgear\data\M1\hiaf\HIAF_coifa_late_CO.paa",
            ""
        };
    };
};