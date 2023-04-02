class CfgPatches {
    class braf_factions_armored {
        author = "BRAF Team";
        addonRootClass = "BRAF_Armored";
        requiredAddons[] = {
            "braf_armored"
        };
        requiredVersion = 0.1;
        units[] = {
            // LMV
            "BRAF_LMV_Gendarmerie",
            "BRAF_LMV_AAF",
            "BRAF_LMV_AAF_RCWS",
            // Cascavel
            "BRAF_EE9_Cascavel_COL",
            "BRAF_EE9_Cascavel_NIA",
            "BRAF_EE9_Cascavel_IRAN",
            "BRAF_EE9_Cascavel_OIA",
            "BRAF_EE9_Cascavel_HIAF",
            "BRAF_EE9_Cascavel_PUTAIN"
        };
        weapons[] = {};
    };
};
class CfgVehicles {
    class BRAF_EE9_Cascavel_base;
    #include "Cascavel_base.hpp"

    class BRAF_LMV_base;
    class BRAF_LMV_Armed_base;
    #include "LMV_base.hpp"

    #include "v_cratenia.hpp"
};