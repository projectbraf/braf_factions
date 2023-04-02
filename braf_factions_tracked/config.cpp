class CfgPatches {
    class braf_factions_tracked {
        author = "BRAF Team";
        addonRootClass = "BRAF_Tracked";
        requiredAddons[] = {
            "braf_tracked"
        };
        requiredVersion = 0.1;
        units[] = {
            // M113
            "braf_m113_hiaf",
            "braf_m113_hiafm",
            // M41
            "braf_m41a_hiaf"
        };
        weapons[] = {};
    };
};
class CfgVehicles {
    #include "M113_base.hpp"
    #include "M41_base.hpp"
};