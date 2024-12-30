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
            class thugswearCUP {
                file = "braf\braf_factions\addons\main\functions\fn_thugswearCUP.sqf";
            };
            class thugsequiprifleCUP {
                file = "braf\braf_factions\addons\main\functions\fn_thugsequiprifleCUP.sqf";
            };
            class thugsequippistolCUP {
                file = "braf\braf_factions\addons\main\functions\fn_thugsequippistolCUP.sqf";
            };
            class thugsequipsniperCUP {
                file = "braf\braf_factions\addons\main\functions\fn_thugsequipsniperCUP.sqf";
            };
            class thugsequipvestCUP {
                file = "braf\braf_factions\addons\main\functions\fn_thugsequipvestCUP.sqf";
            };
            class thugsequipshotgunCUP {
                file = "braf\braf_factions\addons\main\functions\fn_thugsequipshotgunCUP.sqf";
            };
            class thugsequipsmgCUP {
                file = "braf\braf_factions\addons\main\functions\fn_thugsequipsmgCUP.sqf";
            };
            class thugswearbikerCUP {
                file = "braf\braf_factions\addons\main\functions\fn_thugswearbikerCUP.sqf";
            };
        };
    };
};
#endif


