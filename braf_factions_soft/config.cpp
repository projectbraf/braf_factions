class CfgPatches {
    class braf_factions_soft {
        author = "BRAF Team";
        addonRootClass = "BRAF_Soft";
        requiredAddons[] = {
            "braf_soft"
        };
        requiredVersion = 0.1;
        units[] = {
            // Worker
            "BRAF_Worker_Covered_HIAF",
            "BRAF_Worker_Health_HIAF",
            "BRAF_Worker_Fuel_HIAF",
            "BRAF_Worker_Ammo_HIAF",
            "BRAF_Worker_Repair_HIAF",
            "BRAF_Worker_Cargo_HIAF",
            // AM11
            "Braf_AM11_Unarmed_HIAF",
            "Braf_AM11_Unarmed_MAR",
            "BRAF_AM11_Armed_HIAF",
            "BRAF_AM11_Armed_MAR",
            // AM21
            "Braf_AM21_Covered",
            "Braf_AM21_Opened",
            "Braf_AM21_Cargo"
        };
        weapons[] = {};
    };
};

class CfgVehicles {
    class BRAF_Worker_Covered;
    class BRAF_Worker_Health;
    class BRAF_Worker_Fuel;
    class BRAF_Worker_Ammo;
    class BRAF_Worker_Repair;
    class BRAF_Worker_Cargo;
    #include "Worker_base.hpp"

    class Braf_AM21_Covered;
    class Braf_AM21_Opened;
    class Braf_AM21_Cargo;
    #include "AM21_base.hpp"

    class Braf_AM11_Unarmed;
    class Braf_AM11_Armed;
    #include "AM11_base.hpp"

    #include "v_cratenia.hpp"
};