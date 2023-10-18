
//--------------------------Patrol Cap----------------------------
//----- HIAF -----
class braf_hiaf_army_PatrolCap : braf_army_PatrolCap {
    displayName = "[HIAF] Patrol Cap, Army Lizard";
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\patrol_cap\hiaf\hiaf_army_cap_co.paa",
        ""
    };
    class ItemInfo : braf_patrol_cap_iteminfo {
        hiddenSelectionsTextures[] = {
            "\braf_factions\braf_factions_characters_headgear\data\patrol_cap\hiaf\hiaf_army_cap_co.paa",
            ""
        };
    };
};
class braf_hiaf_marine_PatrolCap : braf_hiaf_army_PatrolCap {
    displayName = "[HIAF] Patrol Cap, Marine Lizard";
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\patrol_cap\hiaf\hiaf_marine_cap_co.paa",
        ""
    };
    class ItemInfo : braf_patrol_cap_iteminfo {
        hiddenSelectionsTextures[] = {
            "\braf_factions\braf_factions_characters_headgear\data\patrol_cap\hiaf\hiaf_marine_cap_co.paa",
            ""
        };
    };
};