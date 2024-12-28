class CfgPatches {
  class braf_factions_main {
    author = "BRAF Team";
    requiredAddons[] = {
      "braf_main",
    };
    requiredVersion = 0.1;
    units[] = {};
    weapons[] = {};
  };
};

class CfgFunctions {
    class braf_factions {
        class functions {
            class thugswear {
                file = "braf\braf_factions\addons\main\functions\fn_thugswear.sqf";
            };
        };
    };
};
