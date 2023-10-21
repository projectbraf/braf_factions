class braf_army_m113br;
class braf_factions_m113 : braf_army_m113br {
    scope = 1;
    scopeCurator = 1;
    side = 1;
    class textureSources {
        class hiaf_01 {
            displayName = "HIAF Army";
            textures[] = {
                "braf\braf_factions\addons\braf_factions_tracked\data\m113\hiaf\main_hiaf_co.paa",
                "braf\braf_factions\addons\braf_factions_tracked\data\m113\hiaf\unique_hiaf_co.paa",
                "braf\braf_factions\addons\braf_factions_tracked\data\m113\hiaf\accessories_hiaf_co.paa"
            };
        };
        class hiaf_02 {
            displayName = "HIAF Marines";
            textures[] = {
                "braf\braf_factions\addons\braf_factions_tracked\data\M113\HIAF\main_marine_CO.paa",
                "braf\braf_factions\addons\braf_factions_tracked\data\M113\HIAF\unique_marine_CO.paa",
                "braf\braf_factions\addons\braf_factions_tracked\data\M113\HIAF\accessories_marine_CO.paa"
            };
        };
        class usarmy_01 {
            displayName = "US Army";
            textures[] = {
                "braf\braf_factions\addons\braf_factions_tracked\data\M113\US\main_CO.paa",
                "braf\braf_factions\addons\braf_factions_tracked\data\M113\US\unique_CO.paa",
                "braf\braf_factions\addons\braf_factions_tracked\data\M113\US\accessories_CO.paa"
            };
        };
    };
};

class braf_army_m577;
class braf_factions_m577 : braf_army_m577 {
    scope = 1;
    scopeCurator = 1;
    side = 1;
    class textureSources {
        class us_army_01 {
            displayName = "US Army";
            textures[] = {
                "braf\braf_factions\addons\braf_factions_tracked\data\m113\us\577_main_co.paa",
                "braf\braf_factions\addons\braf_factions_tracked\data\m113\us\main_co.paa",
                "braf\braf_factions\addons\braf_factions_tracked\data\m113\us\unique_co.paa"
            };
        };
    };
};

class braf_m113_hiaf : braf_factions_m113 {
    _generalMacro = "braf_m113_hiaf";
    displayName = "FMC M113A3 ACAV";
    faction = "BRAF_HIAF";
    scope = 2;
    side = 1;
    scopeCurator = 2;
    scopeArsenal = 2;
    crew = "braf_hiaf_crewman_regular";
    typicalcargo[] = { "braf_hiaf_crewman_regular", "braf_hiaf_crewman_regular" };
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\braf_factions_tracked\data\M113\HIAF\main_hiaf_co.paa",
        "braf\braf_factions\addons\braf_factions_tracked\data\M113\HIAF\unique_hiaf_co.paa",
        "braf\braf_factions\addons\braf_factions_tracked\data\M113\HIAF\accessories_hiaf_co.paa"
    };
};

class braf_m113_hiafm : braf_m113_hiaf {
    _generalMacro = "braf_m113_hiafm";
    displayName = "FMC M113A3 Marine";
    scope = 2;
    side = 1;
    scopeCurator = 2;
    scopeArsenal = 2;
    crew = "braf_hiaf_crewman_marine";
    typicalcargo[] = { "braf_hiaf_crewman_marine", "braf_hiaf_crewman_marine" };
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\braf_factions_tracked\data\M113\HIAF\main_marine_CO.paa",
        "braf\braf_factions\addons\braf_factions_tracked\data\M113\HIAF\unique_marine_CO.paa",
        "braf\braf_factions\addons\braf_factions_tracked\data\M113\HIAF\accessories_marine_CO.paa"
    };
};