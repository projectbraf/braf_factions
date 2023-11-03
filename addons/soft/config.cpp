class CfgPatches
{
    class braf_factions_soft
    {
        author = "BRAF Team";
        addonRootClass = "BRAF_Soft";
        requiredAddons[] = {
            "braf_soft",
        };
        requiredVersion = 0.1;
        units[] = {
            // Worker
            "braf_worker_covered_HIAF",
            "braf_worker_health_HIAF",
            "braf_worker_fuel_HIAF",
            "braf_worker_ammo_HIAF",
            "braf_worker_repair_HIAF",
            "braf_worker_cargo_HIAF",
            // AM11
            "braf_am11_unarmed_HIAF",
            "braf_am11_unarmed_MAR",
            "braf_am11_armed_HIAF",
            "braf_am11_armed_MAR",
            // AM21
            "braf_am21_Covered",
            "braf_am21_opened",
            "braf_am21_cargo",
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class braf_worker_covered;
    class braf_worker_health;
    //class braf_worker_fuel;
    class braf_worker_ammo;
    class braf_worker_repair;
    class braf_worker_cargo;
#include "Worker_base.hpp"

    class braf_am21_covered;
    class braf_am21_opened;
    class braf_am21_cargo;
#include "AM21_base.hpp"

    class braf_am11_unarmed;
    class braf_am11_armed;
#include "AM11_base.hpp"

#include "v_cratenia.hpp"
};