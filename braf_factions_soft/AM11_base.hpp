class Braf_AM11_Unarmed_HIAF : braf_am11_unarmed {
    _generalMacro = "Braf_AM11_Unarmed_HIAF";
    displayName = "AM-11 VTL-REC";
    faction = "BRAF_HIAF";
    side = 1;
    editorPreview = "\BRAF_Factions\braf_factions_soft\data\am11\ui\Braf_AM11_Unarmed_HIAF.jpg";
    crew = "braf_hiaf_rifleman_regular";
    hiddenSelectionsTextures[] = {
        "BRAF_Factions\braf_factions_soft\data\am11\HIAF1_co.paa",
        "BRAF_Factions\braf_factions_soft\data\am11\HIAF2_co.paa"
    };
    class textureSources {
        class hiaf_01 {
            displayName = "Armée D'Horizon Green";
            textures[] = {
                "BRAF_Factions\braf_factions_soft\data\am11\HIAF1_co.paa",
                "BRAF_Factions\braf_factions_soft\data\am11\HIAF2_co.paa"
            };
        };
        class hiaf_02 {
            displayName = "HIAF Marines";
            textures[] = {
                "BRAF_Factions\braf_factions_soft\data\am11\HIAF_M1_co.paa",
                "BRAF_Factions\braf_factions_soft\data\am11\HIAF_M2_co.paa"
            };
        };
    };
};
class Braf_AM11_Unarmed_MAR : Braf_AM11_Unarmed_HIAF {
    _generalMacro = "Braf_AM11_Unarmed_MAR";
    displayName = "AM-11 VTL-REC Marines";
    side = 1;
    editorPreview = "\BRAF_Factions\braf_factions_soft\data\am11\ui\Braf_AM11_Unarmed_MAR.jpg";
    crew = "braf_hiaf_rifleman_marine";
    hiddenSelectionsTextures[] = {
        "BRAF_Factions\braf_factions_soft\data\am11\HIAF_M1_co.paa",
        "BRAF_Factions\braf_factions_soft\data\am11\HIAF_M2_co.paa"
    };
};
class BRAF_AM11_Armed_HIAF : Braf_AM11_Armed {
    _generalMacro = "BRAF_AM11_Armed_HIAF";
    displayName = "AM-11 VTL-REC Armed";
    faction = "BRAF_HIAF";
    side = 1;
    editorPreview = "\BRAF_Factions\braf_factions_soft\data\am11\ui\BRAF_AM11_Armed_HIAF.jpg";
    crew = "braf_hiaf_rifleman_regular";
    hiddenSelectionsTextures[] = {
        "BRAF_Factions\braf_factions_soft\data\am11\HIAF1_co.paa",
        "BRAF_Factions\braf_factions_soft\data\am11\HIAF2_co.paa"
    };
    class textureSources {
        class hiaf_01 {
            displayName = "Armée D'Horizon Green";
            textures[] = {
                "BRAF_Factions\braf_factions_soft\data\am11\HIAF1_co.paa",
                "BRAF_Factions\braf_factions_soft\data\am11\HIAF2_co.paa"
            };
        };
        class hiaf_02 {
            displayName = "HIAF Marines";
            textures[] = {
                "BRAF_Factions\braf_factions_soft\data\am11\HIAF_M1_co.paa",
                "BRAF_Factions\braf_factions_soft\data\am11\HIAF_M2_co.paa"
            };
        };
    };
};
class BRAF_AM11_Armed_MAR : BRAF_AM11_Armed_HIAF {
    _generalMacro = "BRAF_AM11_Armed_MAR";
    displayName = "AM-11 VTL-REC Marines Armed";
    side = 1;
    editorPreview = "\BRAF_Factions\braf_factions_soft\data\am11\ui\BRAF_AM11_Armed_MAR.jpg";
    crew = "braf_hiaf_rifleman_marine";
    hiddenSelectionsTextures[] = {
        "BRAF_Factions\braf_factions_soft\data\am11\HIAF_M1_co.paa",
        "BRAF_Factions\braf_factions_soft\data\am11\HIAF_M2_co.paa"
    };
};
