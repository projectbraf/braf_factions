class braf_am21_hiaf : braf_am21_covered {
    _generalMacro = "braf_am21_hiaf";
    faction = "BRAF_HIAF";
    editorPreview = "braf\braf_factions\addons\soft\data\am21\ui\braf_am21_hiaf.jpg";
    side = 1;
    displayName = "AM-21 VTNE 3/4 Ton";
    crew = "braf_hiaf_rifleman_regular";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\soft\data\am21\HIAF1_co.paa",
        "braf\braf_factions\addons\soft\data\am21\HIAF2_co.paa"
    };
    class textureSources {
        class hiaf_01 {
            displayName = "Armée D'Horizon Green";
            textures[] = {
                "braf\braf_factions\addons\soft\data\am21\HIAF1_co.paa",
                "braf\braf_factions\addons\soft\data\am21\HIAF2_co.paa"
            };
        };
        class hiaf_02 {
            displayName = "HIAF Marines";
            textures[] = {
                "braf\braf_factions\addons\soft\data\am21\HIAF_M1_co.paa",
                "braf\braf_factions\addons\soft\data\am21\HIAF_M2_co.paa"
            };
        };
    };
};
class braf_am21_hiafm : braf_am21_hiaf {
    _generalMacro = "braf_am21_hiafm";
    editorPreview = "braf\braf_factions\addons\soft\data\am21\ui\braf_am21_hiafm.jpg";
    crew = "braf_hiaf_rifleman_marine";
    displayName = "AM-21 VTNE 3/4 Ton Marines";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\soft\data\am21\HIAF_M1_co.paa",
        "braf\braf_factions\addons\soft\data\am21\HIAF_M2_co.paa"
    };
};
class braf_am21_opened_hiaf : braf_am21_opened {
    _generalMacro = "braf_am21_opened_hiaf";
    faction = "BRAF_HIAF";
    editorPreview = "braf\braf_factions\addons\soft\data\am21\ui\braf_am21_opened_hiaf.jpg";
    side = 1;
    crew = "braf_hiaf_rifleman_regular";
    displayName = "AM-21 VTL 3/4 Ton Light Assault";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\soft\data\am21\HIAF1_co.paa",
        "braf\braf_factions\addons\soft\data\am21\HIAF2_co.paa"
    };
    class textureSources {
        class hiaf_01 {
            displayName = "Armée D'Horizon Green";
            textures[] = {
                "braf\braf_factions\addons\soft\data\am21\HIAF1_co.paa",
                "braf\braf_factions\addons\soft\data\am21\HIAF2_co.paa"
            };
        };
        class hiaf_02 {
            displayName = "HIAF Marines";
            textures[] = {
                "braf\braf_factions\addons\soft\data\am21\HIAF_M1_co.paa",
                "braf\braf_factions\addons\soft\data\am21\HIAF_M2_co.paa"
            };
        };
    };
};
class braf_am21_opened_hiafm : braf_am21_opened_hiaf {
    _generalMacro = "braf_am21_opened_hiafm";
    editorPreview = "braf\braf_factions\addons\soft\data\am21\ui\braf_am21_opened_hiafm.jpg";
    side = 1;
    crew = "braf_hiaf_rifleman_marine";
    displayName = "AM-21 VTL 3/4 Ton Light Assault Marines";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\soft\data\am21\HIAF_M1_co.paa",
        "braf\braf_factions\addons\soft\data\am21\HIAF_M2_co.paa"
    };
};
class braf_am21_cargo_hiaf : braf_am21_cargo {
    _generalMacro = "braf_am21_cargo_hiaf";
    faction = "BRAF_HIAF";
    editorPreview = "braf\braf_factions\addons\soft\data\am21\ui\braf_am21_opened_hiaf.jpg";
    side = 1;
    crew = "braf_hiaf_rifleman_regular";
    displayName = "AM-21 VTNE 3/4 Ton cargo";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\soft\data\am21\HIAF1_co.paa",
        "braf\braf_factions\addons\soft\data\am21\HIAF2_co.paa"
    };
    class textureSources {
        class hiaf_01 {
            displayName = "Armée D'Horizon Green";
            textures[] = {
                "braf\braf_factions\addons\soft\data\am21\HIAF1_co.paa",
                "braf\braf_factions\addons\soft\data\am21\HIAF2_co.paa"
            };
        };
        class hiaf_02 {
            displayName = "HIAF Marines";
            textures[] = {
                "braf\braf_factions\addons\soft\data\am21\HIAF_M1_co.paa",
                "braf\braf_factions\addons\soft\data\am21\HIAF_M2_co.paa"
            };
        };
    };
};
class braf_am21_cargo_hiafm : braf_am21_cargo_hiaf {
    _generalMacro = "braf_am21_cargo_hiafm";
    editorPreview = "braf\braf_factions\addons\soft\data\am21\ui\braf_am21_cargo_hiafm.jpg";
    crew = "braf_hiaf_rifleman_marine";
    displayName = "AM-21 VTNE 3/4 Ton cargo Marines";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\soft\data\am21\HIAF_M1_co.paa",
        "braf\braf_factions\addons\soft\data\am21\HIAF_M2_co.paa"
    };
};