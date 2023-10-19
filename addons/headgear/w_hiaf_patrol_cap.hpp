
//--------------------------Patrol Cap----------------------------
//----- HIAF -----
class braf_hiaf_army_patrolcap : braf_army_patrolcap {
    displayName = "[HIAF] Patrol Cap, Army Lizard";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\headgear\data\patrol_cap\hiaf\hiaf_army_cap_co.paa",
        ""
    };
    class ItemInfo : braf_patrol_cap_iteminfo {
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\headgear\data\patrol_cap\hiaf\hiaf_army_cap_co.paa",
            ""
        };
    };
};
class braf_hiaf_marine_patrolcap : braf_hiaf_army_patrolcap {
    displayName = "[HIAF] Patrol Cap, Marine Lizard";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\headgear\data\patrol_cap\hiaf\hiaf_marine_cap_co.paa",
        ""
    };
    class ItemInfo : braf_patrol_cap_iteminfo {
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\headgear\data\patrol_cap\hiaf\hiaf_marine_cap_co.paa",
            ""
        };
    };
};
