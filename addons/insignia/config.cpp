class CfgPatches
{
    class braf_factions_insignia
    {
        author = "BRAF Team";
        requiredAddons[] = {
            "braf_characters_headgear",
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