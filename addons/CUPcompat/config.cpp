class CfgPatches {
  class braf_factions_CUP_compat {
    author = "BRAF Team";
    requiredAddons[] = {
      "braf_main",
    };
    requiredVersion = 0.1;
    units[] = {};
    weapons[] = {};
  };
};

#if __has_include("\CUP\Weapons\CUP_Weapons_DynamicLoadout\mk82\CUP_mk82_pod.p3d")
class CfgFunctions {
    class braf_factions_CUP {
        class functions {
            class thugsWearCUP {
                file = "braf\braf_factions\addons\CUPcompat\functions\fn_thugsWearCUP.sqf";
            };
            class thugsEquipRifleCUP {
                file = "braf\braf_factions\addons\CUPcompat\functions\fn_thugsEquipRifleCUP.sqf";
            };
            class thugsEquipPistolCUP {
                file = "braf\braf_factions\addons\CUPcompat\functions\fn_thugsEquipPistolCUP.sqf";
            };
            class thugsEquipSniperCUP {
                file = "braf\braf_factions\addons\CUPcompat\functions\fn_thugsEquipSniperCUP.sqf";
            };
            class thugsEquipVestCUP {
                file = "braf\braf_factions\addons\CUPcompat\functions\fn_thugsEquipVestCUP.sqf";
            };
            class thugsEquipShotgunCUP {
                file = "braf\braf_factions\addons\CUPcompat\functions\fn_thugsEquipShotgunCUP.sqf";
            };
            class thugsEquipSmgCUP {
                file = "braf\braf_factions\addons\CUPcompat\functions\fn_thugsEquipSmgCUP.sqf";
            };
            class thugsWearBikerCUP {
                file = "braf\braf_factions\addons\CUPcompat\functions\fn_thugsWearBikerCUP.sqf";
            };
        };
    };
};
#endif


