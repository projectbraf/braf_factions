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
            "braf_factions_msr_308_spray",
            "braf_factions_msr_308_ts",
            "braf_factions_msr_338_spray",
            "braf_factions_msr_338_ts",
            "braf_factions_colt_lmga4_aaf",
            "braf_factions_colt_lmga4_green",
            "braf_factions_lapa_tan",
            "braf_factions_lapa_green",
            "braf_factions_fal_hiaf",
            "braf_factions_fal_hiaf_scope",
        };

        requiredVersion = 0.1;
        requiredAddons[] = {
            "braf_weapons_core",
            "braf_weapons_assault_rifles",
            "braf_weapons_sniper_rifles",
            "braf_weapons_sound",
        };
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