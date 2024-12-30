class CfgPatches
{
    class braf_factions_characters_CUP
    {
        author = "BRAF Team";
        skipWhenMissingDependencies = 1;
        requiredAddons[] = {
            "BRAF_characters_army",
            "braf_factions_characters",
            "CUP_BaseConfigs"
            };
        requiredVersion = 0.1;
        units[] = {
            #if __has_include("\CUP\Weapons\CUP_Weapons_DynamicLoadout\mk82\CUP_mk82_pod.p3d")
            "braf_factions_thug_biker"
            #endif

            };
        weapons[] = {};
    };
};


#if __has_include("\CUP\Weapons\CUP_Weapons_DynamicLoadout\mk82\CUP_mk82_pod.p3d")
class DefaultEventHandlers;
class CfgVehicles
{
    skipWhenMissingDependencies = 1;
    
    #include "thug_opfor_units_CUP.hpp"
};
#endif


