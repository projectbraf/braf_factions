class CfgPatches
{
    class braf_factions_boat
    {
        author = "BRAF Team";
        addonRootClass = "BRAF_Boat";
        requiredAddons[] = {
            "braf_boat"};
        requiredVersion = 0.1;
        units[] = {
            "braf_rhib_small_hiaf",
            "braf_rhib_large_hiaf"};
        weapons[] = {};
    };
};
class CfgVehicles
{
    class Ship_F;
    class Boat_F : Ship_F
    {
        class HitPoints
        {
            class HitBody;
            class HitFuel;
            class HitEngine;
            class HitGlass1;
            class HitGlass2;
        };
        class EventHandlers;
        class AnimationSources;
        class Turrets
        {
            class MainTurret
            {
                class ViewOptics;
                class ViewGunner;
            };
        };
    };

    // RHIB small
    class I_G_Boat_Transport_01_F;
    class braf_rhib_small_hiaf : I_G_Boat_Transport_01_F
    {
        _generalMacro = "braf_rhib_small_hiaf";
        faction = "BRAF_HIAF";
        crew = "braf_hiaf_rifleman_marine";
        side = 1;
    };

    // RHIB large
    class I_C_Boat_Transport_02_F;
    class braf_rhib_large_hiaf : I_C_Boat_Transport_02_F
    {
        _generalMacro = "braf_rhib_large_hiaf";
        faction = "BRAF_HIAF";
        crew = "braf_hiaf_rifleman_marine";
        side = 1;
    };
};