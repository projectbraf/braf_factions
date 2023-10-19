class BRAF_LMV_Gendarmerie : BRAF_LMV_base {
    editorPreview = "BRAF_Armored\BRAF_LMV\data\ui\LMV_EB_picture_ca.paa";
    _generalMacro = "BRAF_LMV_Gendarmerie";
    displayName = "VBMT-LSR Iveco LMV";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction = "BLU_GEN_F";
    crew = "B_GEN_Soldier_F";
    typicalcargo[] = {
        "B_GEN_Soldier_F",
        "B_GEN_Soldier_F",
        "B_GEN_Soldier_F"
    };
    unitInfoType = "RscUnitInfoNoWeapon";
    hiddenSelectionsTextures[] = {
        "braf_factions\braf_factions_armored\data\LMV\Gendarmerie\Camo1_co.paa",
        "braf_factions\braf_factions_armored\data\LMV\Gendarmerie\Camo2_co.paa",
        "BRAF_Armored\BRAF_LMV\Data\Camo3_co.paa",
        "BRAF_Armored\BRAF_LMV\Data\Glass_ca.paa"
    };
    class TextureSources {
        class GNM_01 {
            displayName = "Gendarmerie";
            author = "BRAF Team";
            textures[] = {
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "braf_factions\braf_factions_armored\data\LMV\Gendarmerie\Camo1_co.paa",
                "braf_factions\braf_factions_armored\data\LMV\Gendarmerie\Camo2_co.paa",
                "BRAF_Armored\BRAF_LMV\Data\Camo3_co.paa",
                "BRAF_Armored\BRAF_LMV\Data\Glass_ca.paa"
            };
            factions[] = {
                "BLU_GEN_F"
            };
        };
    };
    textureList[] = {
        "GNM_01",
        1
    };
    class Attributes {};
};
class BRAF_LMV_AAF : BRAF_LMV_base {
    editorPreview = "BRAF_Armored\BRAF_LMV\data\ui\LMV_EB_picture_ca.paa";
    _generalMacro = "BRAF_LMV_AAF";
    displayName = "VBMT-LSR Iveco LMV";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_F";
    crew = "I_Soldier_F";
    typicalcargo[] = {
        "I_Soldier_F",
        "I_Soldier_F",
        "I_Soldier_F"
    };
    unitInfoType = "RscUnitInfoNoWeapon";
    hiddenSelectionsTextures[] = {
        "",
		"",
		"",
		"",
		"",
		"",
		"",
		"braf_factions\braf_factions_armored\data\LMV\AAF\Camo1_co.paa",
        "braf_factions\braf_factions_armored\data\LMV\AAF\Camo2_co.paa",
        "BRAF_Armored\BRAF_LMV\Data\Camo3_co.paa",
        "BRAF_Armored\BRAF_LMV\Data\Glass_ca.paa"
    };
    class TextureSources {
        class AAF_01 {
            displayName = "AEGEAN DIGITAL";
            author = "BRAF Team";
            textures[] = {
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "braf_factions\braf_factions_armored\data\LMV\AAF\Camo1_co.paa",
                "braf_factions\braf_factions_armored\data\LMV\AAF\Camo2_co.paa",
                "BRAF_Armored\BRAF_LMV\Data\Camo3_co.paa",
                "BRAF_Armored\BRAF_LMV\Data\Glass_ca.paa"
            };
            factions[] = {
                "IND_F"
            };
        };
    };
    textureList[] = {
        "AAF_01",
        1
    };
    class Attributes {};
};
class BRAF_LMV_AAF_RCWS : BRAF_LMV_Armed_base {
    editorPreview = "BRAF_Armored\BRAF_LMV\data\ui\LMV_RCWS_EB_picture_ca.paa";
    _generalMacro = "BRAF_LMV_AAF_RCWS";
    displayName = "VBMT-LSR Iveco LMV REMAX";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_F";
    crew = "I_Soldier_F";
    typicalcargo[] = {
        "I_Soldier_F",
        "I_Soldier_F",
        "I_Soldier_F"
    };
    hiddenSelectionsTextures[] = {
        "",
		"",
		"",
		"",
		"",
		"",
		"",
		"braf_factions\braf_factions_armored\data\LMV\AAF\Camo1_co.paa",
        "braf_factions\braf_factions_armored\data\LMV\AAF\Camo2_co.paa",
        "BRAF_Armored\BRAF_LMV\Data\Camo3_co.paa",
        "BRAF_Armored\BRAF_LMV\Data\Glass_ca.paa"
    };
    class TextureSources {
        class AAF_01 {
            displayName = "AEGEAN DIGITAL";
            author = "BRAF Team";
            textures[] = {
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "braf_factions\braf_factions_armored\data\LMV\AAF\Camo1_co.paa",
                "braf_factions\braf_factions_armored\data\LMV\AAF\Camo2_co.paa",
                "BRAF_Armored\BRAF_LMV\Data\Camo3_co.paa",
                "BRAF_Armored\BRAF_LMV\Data\Glass_ca.paa"
            };
            factions[] = {
                "IND_F"
            };
        };
        class CSAT_01 {
            displayName = "Hex 1";
            author = "BRAF Team";
            textures[] = {
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "braf_factions\braf_factions_armored\data\LMV\CSAT\Camo1_co.paa",
                "braf_factions\braf_factions_armored\data\LMV\CSAT\Camo2_co.paa",
                "BRAF_Armored\BRAF_LMV\Data\Camo3_co.paa",
                "braf_factions\braf_factions_armored\data\LMV\CSAT\remax_co.paa",
                "BRAF_Armored\BRAF_LMV\Data\Glass_ca.paa"
            };
            factions[] = {};
        };
    };
    textureList[] = {
        "AAF_01",
        1
    };
    class Attributes {};
};