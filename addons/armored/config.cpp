class CfgPatches
{
    class braf_factions_armored
    {
        author = "BRAF Team";
        addonRootClass = "BRAF_Armored";
        requiredAddons[] = {
            "braf_armored",
        };
        requiredVersion = 0.1;
        units[] = {
            // LMV
            "braf_lmv_gendarmerie",
            "braf_lmv_aaf",
            "braf_lmv_aaf_rcws",
            // Cascavel
            "braf_ee9_cascavel_col",
            "braf_ee9_cascavel_nia",
            "braf_ee9_cascavel_iran",
            "braf_ee9_cascavel_oia",
            "braf_ee9_cascavel_hiaf",
            "braf_ee9_cascavel_putain"};
        weapons[] = {};
    };
};
class CfgVehicles
{
    class braf_ee9_cascavel_base;
#include "Cascavel_base.hpp"

    class braf_lmv_base;
    class braf_lmv_armed_base;
#include "LMV_base.hpp"

#include "v_cratenia.hpp"
};