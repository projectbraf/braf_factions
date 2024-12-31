class CfgPatches
{
    class braf_factions_insignia
    {
        author = "BRAF Team";
        requiredAddons[] = {
            "braf_structures",
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};
class CfgMarkers
{
    class flag_BRA;
    class flag_cra : flag_BRA
    {
        name = "$str_flag_cratenia";
        icon = "\braf\braf_factions\addons\insignia\Flag\markercratenia.paa";
        texture = "\braf\braf_factions\addons\insignia\Flag\markercratenia.paa";
    };
};

class CfgVehicles {
    class braf_brazil_flag;
    class braf_cratenia_flag : braf_brazil_flag
    {
        _generalMacro = "braf_cratenia_flag";
        displayName = "$STR_Brazil_cratenia";
        class EventHandlers
        {
            init = "(_this select 0) setFlagTexture 'braf\braf_factions\addons\insignia\Flag\flag_cratenia.paa'";
        };
    };
};