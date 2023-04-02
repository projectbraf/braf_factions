class CfgPatches
{
    class braf_factions_weapons
    {
        units[] = {};
        weapons[] = {
            "braf_factions_aglc_verde",
            "braf_factions_aglc_aaf",
            "braf_factions_aglc_verde_scope",
            "braf_factions_aglc_aaf_scope",
            "Braf_factions_msr_308_spray",
            "Braf_factions_msr_308_ts",
            "Braf_factions_msr_338_spray",
            "Braf_factions_msr_338_ts",
            "Braf_factions_colt_lmga4_aaf",
            "Braf_factions_colt_lmga4_green",
            "braf_factions_fal_hiaf",
            "braf_factions_fal_hiaf_scope"};

        requiredVersion = 0.1;
        requiredAddons[] = {"braf_weap"};
    };
};

class CfgWeapons
{
#include "308_AGLC\308_AGLC.hpp"
#include "308_MSR\308_MSR.hpp"
#include "338_MSR\338_MSR.hpp"
#include "556_Colt\556_Colt.hpp"
#include "556_LAPA\556_LAPA.hpp"
#include "762_FAL\762_FAL.hpp"
#include "762_MD1\762_MD1.hpp"
};