class CfgPatches
{
    class braf_factions_soft_CUP
    {
        author = "BRAF Team";
        addonRootClass = "BRAF_Soft";
        skipWhenMissingDependencies = 1;
        requiredAddons[] = {
            "braf_soft",
            "braf_factions_soft",
            "CUP_BaseConfigs"
        };
        requiredVersion = 0.1;
        units[] = {
            "Braf_TT650_Thugs",
            "braf_datsun2_thugs",
            "braf_golf2_thugs",
            "braf_golf_thugs",
            "braf_skoda_thugs",
            "braf_datsun_thugs",
            "braf_SUV_thugs",
            "braf_lada_thugs"

        };
        weapons[] = {};
    };
};
class CfgVehicles
{
#include "Thugs_veh.hpp"
};