class CfgPatches {
    class braf_factions_characters_backpack {
        author = "BRAF Team";
        addonRootClass = "braf_characters_army";
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Characters_F_Heads",
            "A3_Characters_F_BLUFOR",
            "A3_Characters_F_Proxies",
            "BRAF_characters_backpack"
        };
        requiredVersion = 0.1;
        units[] = {
            "braf_hiaf_alice_medium",
            "braf_hiaf_alice_medium_field"
        };
        weapons[] = {};
    };
};

class CfgVehicles {
    class Bag_Base;
    #include "v_backpack.hpp"
};