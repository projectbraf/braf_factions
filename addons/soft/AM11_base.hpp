class braf_am11_unarmed_hiaf : braf_am11_unarmed {
    _generalMacro = "braf_am11_unarmed_hiaf";
    displayName = "AM-11 VTL-REC";
    faction = "BRAF_hiaf";
    side = 1;
    editorPreview = "\braf\braf_factions\addons\soft\data\am11\ui\braf_am11_unarmed_hiaf.jpg";
    crew = "braf_hiaf_rifleman_regular";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\soft\data\am11\hiaf1_co.paa",
        "braf\braf_factions\addons\soft\data\am11\hiaf2_co.paa"
    };
    class textureSources {
        class hiaf_01 {
            displayName = "Armée D'Horizon Green";
            textures[] = {
                "braf\braf_factions\addons\soft\data\am11\hiaf1_co.paa",
                "braf\braf_factions\addons\soft\data\am11\hiaf2_co.paa"
            };
        };
        class hiaf_02 {
            displayName = "hiaf Marines";
            textures[] = {
                "braf\braf_factions\addons\soft\data\am11\hiaf_M1_co.paa",
                "braf\braf_factions\addons\soft\data\am11\hiaf_M2_co.paa"
            };
        };
    };
};
class braf_am11_unarmed_mar : braf_am11_unarmed_hiaf {
    _generalMacro = "braf_am11_unarmed_mar";
    displayName = "AM-11 VTL-REC Marines";
    side = 1;
    editorPreview = "\braf\braf_factions\addons\soft\data\am11\ui\braf_am11_unarmed_mar.jpg";
    crew = "braf_hiaf_rifleman_marine";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\soft\data\am11\hiaf_M1_co.paa",
        "braf\braf_factions\addons\soft\data\am11\hiaf_M2_co.paa"
    };
};
class braf_am11_armed_hiaf : braf_am11_armed {
    _generalMacro = "braf_am11_armed_hiaf";
    displayName = "AM-11 VTL-REC armed";
    faction = "BRAF_hiaf";
    side = 1;
    editorPreview = "\braf\braf_factions\addons\soft\data\am11\ui\braf_am11_armed_hiaf.jpg";
    crew = "braf_hiaf_rifleman_regular";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\soft\data\am11\hiaf1_co.paa",
        "braf\braf_factions\addons\soft\data\am11\hiaf2_co.paa"
    };
    class textureSources {
        class hiaf_01 {
            displayName = "Armée D'Horizon Green";
            textures[] = {
                "braf\braf_factions\addons\soft\data\am11\hiaf1_co.paa",
                "braf\braf_factions\addons\soft\data\am11\hiaf2_co.paa"
            };
        };
        class hiaf_02 {
            displayName = "hiaf Marines";
            textures[] = {
                "braf\braf_factions\addons\soft\data\am11\hiaf_M1_co.paa",
                "braf\braf_factions\addons\soft\data\am11\hiaf_M2_co.paa"
            };
        };
    };
};
class braf_am11_armed_mar : braf_am11_armed_hiaf {
    _generalMacro = "braf_am11_armed_mar";
    displayName = "AM-11 VTL-REC Marines armed";
    side = 1;
    editorPreview = "\braf\braf_factions\addons\soft\data\am11\ui\braf_am11_armed_mar.jpg";
    crew = "braf_hiaf_rifleman_marine";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\soft\data\am11\hiaf_M1_co.paa",
        "braf\braf_factions\addons\soft\data\am11\hiaf_M2_co.paa"
    };
};
