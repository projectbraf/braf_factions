class CfgPatches
{
    class braf_factions_air
    {
        author = "BRAF Team";
        addonRootClass = "BRAF_Air";
        requiredAddons[] = {
            "braf_air",
        };
        requiredVersion = 0.1;
        units[] = {
            // Fennec
            "BRAF_Fennec_HIAF1",
            "BRAF_Fennec_HIAF2",
            "BRAF_Fennec_HIAF3",
            // Pantera
            "BRAF_Pantera_K2_PLA1",
            "BRAF_Pantera_K2_FFV_PLA1",
            "BRAF_Pantera_K2_HIAF1",
            "BRAF_Pantera_K2_HIAF2",
            "BRAF_Pantera_K2_HIAF_Navy",
        };
        weapons[] = {};
    };
};
class DefaultEventHandlers;
class CfgVehicles
{
    // Factions Vehicles
    class BRAF_Fennec_dynamicLoadout_base;
    class BRAF_Fennec_SAR_base;
    class BRAF_Fennec_unarmed_base;
    class BRAF_Fennec_cargo_base;
#include "Fennec_base.hpp"

    class BRAF_Pantera_Base;
    class BRAF_Pantera_FFV_Base;
#include "Pantera_base.hpp"

#include "v_cratenia.hpp"
};