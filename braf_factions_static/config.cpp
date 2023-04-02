class CfgPatches
{
    class braf_factions_static
    {
        author = "BRAF Team";
        addonRootClass = "BRAF_Static";
        requiredAddons[] = {"braf_static"};
        requiredVersion = 0.1;
        units[] = {
            "braf_I_m120_HIAF"};
    };
};

class CfgVehicles
{
    class braf_m120;
    class braf_m120_HIAF : braf_m120
    {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        side = 1;
        faction = "BRAF_HIAF";
        crew = "braf_hiaf_rifleman_regular";
        typicalCargo[] = {
            "braf_hiaf_rifleman_regular"};
    };
};