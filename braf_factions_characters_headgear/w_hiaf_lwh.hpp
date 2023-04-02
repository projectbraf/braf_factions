// Base classes
class braf_eb_ccb;
class braf_ccb_itemInfo;
class braf_eb_ccb_goggles_up;
class braf_ccb_goggles_up_itemInfo;
class braf_eb_ccb_goggles_down;
class braf_ccb_goggles_down_itemInfo;
class braf_eb_ccb_nvg;
class braf_ccb_nvg_itemInfo;

class braf_eb_ccb_cover;
class braf_ccb_cover_itemInfo;
class braf_eb_ccb_cover_goggles_up;
class braf_ccb_cover_goggles_up_itemInfo;
class braf_eb_ccb_cover_goggles_down;
class braf_ccb_cover_goggles_down_itemInfo;
class braf_eb_ccb_cover_nvg;
class braf_ccb_cover_nvg_itemInfo;

//--------------------------LWH (CCB)----------------------------
//----- HIAF -----

class braf_hiaf_mp_helmet : braf_eb_ccb {
    displayName = "[HIAF] LWH, Military Police";
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa"
    };
    class ItemInfo : braf_ccb_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa"
        };
    };
};
class braf_hiaf_mp_helmet_goggles_up : braf_eb_ccb_goggles_up {
    displayName = "[HIAF] LWH, Military Police (Goggles up)";
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
        "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\goggles_large_CO.paa",
        "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\glass_CA.paa"
    };
    class ItemInfo : braf_ccb_goggles_up_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
            "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\goggles_large_CO.paa",
            "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\glass_CA.paa"
        };
    };
};
class braf_hiaf_mp_helmet_goggles_down : braf_eb_ccb_goggles_down {
    displayName = "[HIAF] LWH, Military Police (Goggles down)";
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
        "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\goggles_large_CO.paa",
        "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\glass_CA.paa"
    };
    class ItemInfo : braf_ccb_goggles_down_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
            "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\goggles_large_CO.paa",
            "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\glass_CA.paa"
        };
    };
};
class braf_hiaf_mp_helmet_nvg : braf_eb_ccb_nvg {
    displayName = "[HIAF] LWH, Military Police (NVG)";
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
        "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\glass_CA.paa"
    };
    class ItemInfo : braf_ccb_nvg_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
            "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\glass_CA.paa"
        };
    };
};
class braf_hiaf_army_helmet_cover : braf_eb_ccb_cover {
    displayName = "[HIAF] LWH, Army Lizard";
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\coifa_hiaf_army_co.paa"
    };
    class ItemInfo : braf_ccb_cover_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\coifa_hiaf_army_co.paa"
        };
    };
};
class braf_hiaf_army_helmet_cover_goggles_up : braf_eb_ccb_cover_goggles_up {
    displayName = "[HIAF] LWH, Army Lizard (Goggles up)";
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\coifa_hiaf_army_co.paa",
        "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\goggles_large_CO.paa",
        "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\glass_CA.paa"
    };
    class ItemInfo : braf_ccb_cover_goggles_up_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\coifa_hiaf_army_co.paa",
            "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\goggles_large_CO.paa",
            "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\glass_CA.paa"
        };
    };
};
class braf_hiaf_army_helmet_cover_goggles_down : braf_eb_ccb_cover_goggles_down {
    displayName = "[HIAF] LWH, army lizard (Goggles down)";
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\coifa_hiaf_army_co.paa",
        "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\goggles_large_CO.paa",
        "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\glass_CA.paa"
    };
    class ItemInfo : braf_ccb_cover_goggles_down_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\coifa_hiaf_army_co.paa",
            "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\goggles_large_CO.paa",
            "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\glass_CA.paa"
        };
    };
};
class braf_hiaf_marine_helmet_cover : braf_hiaf_army_helmet_cover {
    displayName = "[HIAF] LWH, Marine Lizard";
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\coifa_hiaf_mariner_co.paa"
    };
    class ItemInfo : braf_ccb_cover_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\coifa_hiaf_mariner_co.paa"
        };
    };
};
class braf_hiaf_marine_helmet_cover_goggles_up : braf_hiaf_army_helmet_cover_goggles_up {
    displayName = "[HIAF] LWH, Marine Lizard (Goggles up)";
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\coifa_hiaf_mariner_co.paa",
        "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\goggles_large_CO.paa",
        "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\glass_CA.paa"
    };
    class ItemInfo : braf_ccb_cover_goggles_up_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\coifa_hiaf_mariner_co.paa",
            "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\goggles_large_CO.paa",
            "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\glass_CA.paa"
        };
    };
};
class braf_hiaf_marine_helmet_cover_goggles_down : braf_hiaf_army_helmet_cover_goggles_down {
    displayName = "[HIAF] LWH, Marine Lizard (Goggles down)";
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
        "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\coifa_hiaf_mariner_co.paa",
        "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\goggles_large_CO.paa",
        "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\glass_CA.paa"
    };
    class ItemInfo : braf_ccb_cover_goggles_down_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\mb_hiaf_co.paa",
            "\braf_factions\braf_factions_characters_headgear\data\ccb\hiaf\coifa_hiaf_mariner_co.paa",
            "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\goggles_large_CO.paa",
            "\braf_factions\braf_factions_characters_headgear\data\goggles_nvg\glass_CA.paa"
        };
    };
};
