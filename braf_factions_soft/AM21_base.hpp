class braf_am21_hiaf : braf_AM21_Covered {
    _generalMacro = "braf_am21_hiaf";
    faction = "BRAF_HIAF";
    editorPreview = "BRAF_Factions\braf_factions_soft\data\am21\ui\braf_am21_hiaf.jpg";
    side = 1;
    displayName = "AM-21 VTNE 3/4 Ton";
    crew = "braf_hiaf_rifleman_regular";
    hiddenSelectionsTextures[] = {
        "BRAF_Factions\braf_factions_soft\data\am21\HIAF1_co.paa",
        "BRAF_Factions\braf_factions_soft\data\am21\HIAF2_co.paa"
    };
    class textureSources {
        class hiaf_01 {
            displayName = "Armée D'Horizon Green";
            textures[] = {
                "BRAF_Factions\braf_factions_soft\data\am21\HIAF1_co.paa",
                "BRAF_Factions\braf_factions_soft\data\am21\HIAF2_co.paa"
            };
        };
        class hiaf_02 {
            displayName = "HIAF Marines";
            textures[] = {
                "BRAF_Factions\braf_factions_soft\data\am21\HIAF_M1_co.paa",
                "BRAF_Factions\braf_factions_soft\data\am21\HIAF_M2_co.paa"
            };
        };
    };
};
class braf_am21_hiafm : braf_am21_hiaf {
    _generalMacro = "braf_am21_hiafm";
    editorPreview = "BRAF_Factions\braf_factions_soft\data\am21\ui\braf_am21_hiafm.jpg";
    crew = "braf_hiaf_rifleman_marine";
    displayName = "AM-21 VTNE 3/4 Ton Marines";
    hiddenSelectionsTextures[] = {
        "BRAF_Factions\braf_factions_soft\data\am21\HIAF_M1_co.paa",
        "BRAF_Factions\braf_factions_soft\data\am21\HIAF_M2_co.paa"
    };
};
class braf_am21_opened_hiaf : braf_AM21_Opened {
    _generalMacro = "braf_am21_opened_hiaf";
    faction = "BRAF_HIAF";
    editorPreview = "BRAF_Factions\braf_factions_soft\data\am21\ui\braf_am21_opened_hiaf.jpg";
    side = 1;
    crew = "braf_hiaf_rifleman_regular";
    displayName = "AM-21 VTL 3/4 Ton Light Assault";
    hiddenSelectionsTextures[] = {
        "BRAF_Factions\braf_factions_soft\data\am21\HIAF1_co.paa",
        "BRAF_Factions\braf_factions_soft\data\am21\HIAF2_co.paa"
    };
    class textureSources {
        class hiaf_01 {
            displayName = "Armée D'Horizon Green";
            textures[] = {
                "BRAF_Factions\braf_factions_soft\data\am21\HIAF1_co.paa",
                "BRAF_Factions\braf_factions_soft\data\am21\HIAF2_co.paa"
            };
        };
        class hiaf_02 {
            displayName = "HIAF Marines";
            textures[] = {
                "BRAF_Factions\braf_factions_soft\data\am21\HIAF_M1_co.paa",
                "BRAF_Factions\braf_factions_soft\data\am21\HIAF_M2_co.paa"
            };
        };
    };
};
class braf_am21_opened_hiafm : braf_am21_opened_hiaf {
    _generalMacro = "braf_am21_opened_hiafm";
    editorPreview = "BRAF_Factions\braf_factions_soft\data\am21\ui\braf_am21_opened_hiafm.jpg";
    side = 1;
    crew = "braf_hiaf_rifleman_marine";
    displayName = "AM-21 VTL 3/4 Ton Light Assault Marines";
    hiddenSelectionsTextures[] = {
        "BRAF_Factions\braf_factions_soft\data\am21\HIAF_M1_co.paa",
        "BRAF_Factions\braf_factions_soft\data\am21\HIAF_M2_co.paa"
    };
};
class braf_am21_cargo_hiaf : braf_AM21_Cargo {
    _generalMacro = "braf_am21_cargo_hiaf";
    faction = "BRAF_HIAF";
    editorPreview = "BRAF_Factions\braf_factions_soft\data\am21\ui\braf_am21_opened_hiaf.jpg";
    side = 1;
    crew = "braf_hiaf_rifleman_regular";
    displayName = "AM-21 VTNE 3/4 Ton Cargo";
    hiddenSelectionsTextures[] = {
        "BRAF_Factions\braf_factions_soft\data\am21\HIAF1_co.paa",
        "BRAF_Factions\braf_factions_soft\data\am21\HIAF2_co.paa"
    };
    class textureSources {
        class hiaf_01 {
            displayName = "Armée D'Horizon Green";
            textures[] = {
                "BRAF_Factions\braf_factions_soft\data\am21\HIAF1_co.paa",
                "BRAF_Factions\braf_factions_soft\data\am21\HIAF2_co.paa"
            };
        };
        class hiaf_02 {
            displayName = "HIAF Marines";
            textures[] = {
                "BRAF_Factions\braf_factions_soft\data\am21\HIAF_M1_co.paa",
                "BRAF_Factions\braf_factions_soft\data\am21\HIAF_M2_co.paa"
            };
        };
    };
};
class braf_am21_cargo_hiafm : braf_am21_cargo_hiaf {
    _generalMacro = "braf_am21_cargo_hiafm";
    editorPreview = "BRAF_Factions\braf_factions_soft\data\am21\ui\braf_am21_cargo_hiafm.jpg";
    crew = "braf_hiaf_rifleman_marine";
    displayName = "AM-21 VTNE 3/4 Ton Cargo Marines";
    hiddenSelectionsTextures[] = {
        "BRAF_Factions\braf_factions_soft\data\am21\HIAF_M1_co.paa",
        "BRAF_Factions\braf_factions_soft\data\am21\HIAF_M2_co.paa"
    };
};