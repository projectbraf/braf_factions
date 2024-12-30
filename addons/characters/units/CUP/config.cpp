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
        units[] = {};
        weapons[] = {};
    };
};

class DefaultEventHandlers;
class CfgVehicles
{
    skipWhenMissingDependencies = 1;
    #include "thug_opfor_units_CUP.hpp"
};

