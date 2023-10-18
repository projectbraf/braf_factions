class CfgPatches {
    class braf_factions_characters_vest {
        author = "BRAF Team";
        addonRootClass = "braf_characters_army";
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Characters_F_Heads",
            "A3_Characters_F_BLUFOR",
            "A3_Characters_F_Proxies",
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};

class CfgWeapons {
    class ItemCore;
    class V_CarrierRigKBT_01_base_F;
    class VestItem;
    #include "w_vest.hpp"
};
