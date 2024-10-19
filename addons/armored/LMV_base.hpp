class braf_lmv_gendarmerie : braf_lmv_base {
    editorPreview = "braf\braf_factions\addons\armored\data\lmv\ui\LMV_gendarmeire_picture_ca.jpg";
    _generalMacro = "braf_lmv_gendarmerie";
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
        "braf\braf_factions\addons\armored\data\LMV\Gendarmerie\Camo1_co.paa",
        "braf\braf_factions\addons\armored\data\LMV\Gendarmerie\Camo2_co.paa",
        "braf\braf_factions\addons\armored\data\lmv\Camo3_co.paa",
        "braf\braf_factions\addons\armored\data\lmv\Glass_ca.paa"
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
                "braf\braf_factions\addons\armored\data\LMV\Gendarmerie\Camo1_co.paa",
                "braf\braf_factions\addons\armored\data\LMV\Gendarmerie\Camo2_co.paa",
                "braf\braf_factions\addons\armored\data\lmv\Camo3_co.paa",
                "braf\braf_factions\addons\armored\data\lmv\Glass_ca.paa"
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
class braf_lmv_aaf : braf_lmv_base {
    editorPreview = "braf\braf_factions\addons\armored\data\lmv\ui\LMV_AAF_picture_ca.jpg";
    _generalMacro = "braf_lmv_aaf";
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
		"braf\braf_factions\addons\armored\data\LMV\AAF\Camo1_co.paa",
        "braf\braf_factions\addons\armored\data\LMV\AAF\Camo2_co.paa",
        "braf\braf_factions\addons\armored\data\lmv\Camo3_co.paa",
        "braf\braf_factions\addons\armored\data\lmv\Glass_ca.paa"
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
                "braf\braf_factions\addons\armored\data\LMV\AAF\Camo1_co.paa",
                "braf\braf_factions\addons\armored\data\LMV\AAF\Camo2_co.paa",
                "braf\braf_factions\addons\armored\data\lmv\Camo3_co.paa",
                "braf\braf_factions\addons\armored\data\lmv\Glass_ca.paa"
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
class braf_lmv_aaf_rcws : braf_lmv_armed_base {
    editorPreview = "braf\braf_factions\addons\armored\data\lmv\ui\LMV_RCWS_AAF_picture_ca.jpg";
    _generalMacro = "braf_lmv_AAF_RCWS";
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
		"braf\braf_factions\addons\armored\data\LMV\AAF\Camo1_co.paa",
        "braf\braf_factions\addons\armored\data\LMV\AAF\Camo2_co.paa",
        "braf\braf_factions\addons\armored\data\lmv\Camo3_co.paa",
        "braf\braf_factions\addons\armored\data\lmv\Glass_ca.paa"
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
                "braf\braf_factions\addons\armored\data\LMV\AAF\Camo1_co.paa",
                "braf\braf_factions\addons\armored\data\LMV\AAF\Camo2_co.paa",
                "braf\braf_factions\addons\armored\data\lmv\Camo3_co.paa",
                "braf\braf_factions\addons\armored\data\lmv\Glass_ca.paa"
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
                "braf\braf_factions\addons\armored\data\LMV\CSAT\Camo1_co.paa",
                "braf\braf_factions\addons\armored\data\LMV\CSAT\Camo2_co.paa",
                "braf\braf_factions\addons\armored\data\lmv\Camo3_co.paa",
                "braf\braf_factions\addons\armored\data\LMV\CSAT\remax_co.paa",
                "braf\braf_factions\addons\armored\data\lmv\Glass_ca.paa"
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