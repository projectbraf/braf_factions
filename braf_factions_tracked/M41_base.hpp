class braf_army_m41a;
class braf_factions_m41 : braf_army_m41a {
    scope = 1;
    scopeCurator = 1;
    side = 1;
    class textureSources {
        class hiaf_01 {
            displayName = "HIAF Army";
            textures[] = {
                "braf\braf_factions\addons\braf_factions_tracked\data\m41\hiaf\main_co.paa",
                "braf\braf_factions\addons\braf_factions_tracked\data\m41\hiaf\large_co.paa",
                "braf\braf_factions\addons\braf_factions_tracked\data\m41\hiaf\small_co.paa"
            };
        };
        class us_01 {
            displayName = "US Army";
            textures[] = {
                "braf\braf_factions\addons\braf_factions_tracked\data\m41\us\main_co.paa",
                "braf\braf_factions\addons\braf_factions_tracked\data\m41\us\large_co.paa",
                "braf\braf_factions\addons\braf_factions_tracked\data\m41\us\small_co.paa"
            };
        };
    };
};

class braf_m41a_hiaf : braf_factions_m41 {
    _generalMacro = "braf_hiaf_m41a";
    editorPreview = "braf_tracked\m41\preview\cwr3_i_m41a1.jpg";
    faction = "braf_hiaf";
    crew = "braf_hiaf_crewman_regular";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\braf_factions_tracked\data\m41\hiaf\main_CO.paa",
        "\braf\braf_factions\addons\braf_factions_tracked\data\m41\hiaf\large_CO.paa",
        "\braf\braf_factions\addons\braf_factions_tracked\data\m41\hiaf\small_CO.paa",
    };
    class TransportBackpacks {
    };
    class TransportItems {
        class _xx_FirstAidKit {
            count = 4;
            name = "FirstAidKit";
        };
        class _xx_Toolkit {
            count = 1;
            name = "Toolkit";
        };
    };
    class TransportWeapons {
    };
    class TransportMagazines {
    };
};