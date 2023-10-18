/*Normalmente os uniformes são definidos no oficial, squad leader, team leader, medic e rifleman*/
//------------------------------------- Infantaria Comandos -------------------------------------------
class braf_hiaf_tl_commando : braf_factions_specops_base {
    _generalMacro = "braf_hiaf_tl_commando";
    faction = "BRAF_HIAF";
    editorsubcategory = "BRAF_COMMANDO";
    model = "\BRAF_Factions\braf_factions_characters\Uniform\BRAF_BDU.p3d";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_B_Soldier_TL_F0";
    uniformClass = "braf_horizon_marine_uniform_bottons";
    genericNames = "TanoanMen";
    magazines[] = {
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "16Rnd_9x21_Mag",
        "16Rnd_9x21_Mag",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_30Rnd_556x45_red",
        "braf_30Rnd_556x45_red"
    };
    respawnWeapons[] = {
        "braf_MD97LC_SF",
        "hgun_ACPC2_F",
        "Binocular",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_MD97LC_SF",
        "hgun_ACPC2_F",
        "Binocular",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "16Rnd_9x21_Mag",
        "16Rnd_9x21_Mag",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_30Rnd_556x45_red",
        "braf_30Rnd_556x45_red"
    };
    Items[] = {
        "FirstAidKit",
        "FirstAidKit"
    };
    respawnItems[] = {
        "FirstAidKit",
        "FirstAidKit"
    };
    linkedItems[] = {
        "braf_hiaf_marine_Beret",
        "V_TacVestIR_blk",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_marine_Beret",
        "V_TacVestIR_blk",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
    class Wounds {
        tex[] = {};
        mat[] = {
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\top.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\pants.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "",
            ""
        };
    };
};
class braf_hiaf_rifleman_commando : braf_factions_specops_base {
    _generalMacro = "braf_hiaf_rifleman_commando";
    faction = "BRAF_HIAF";
    editorsubcategory = "BRAF_COMMANDO";
    model = "\BRAF_Factions\braf_factions_characters\Uniform\BRAF_BDU.p3d";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
    uniformClass = "braf_horizon_marine_uniform_bottons";
    genericNames = "TanoanMen";
    magazines[] = {
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_30Rnd_556x45_red",
        "braf_30Rnd_556x45_red"
    };
    respawnWeapons[] = {
        "braf_MD97LC_SF",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_MD97LC_SF",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_30Rnd_556x45_red",
        "braf_30Rnd_556x45_red"
    };
    Items[] = {
        "FirstAidKit",
        "FirstAidKit"
    };
    respawnItems[] = {
        "FirstAidKit",
        "FirstAidKit"
    };
    linkedItems[] = {
        "G_Balaclava_Oli",
        "V_TacVestIR_blk",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "G_Balaclava_Oli",
        "V_TacVestIR_blk",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
    class Wounds {
        tex[] = {};
        mat[] = {
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\top.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\pants.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "",
            ""
        };
    };
};
class braf_hiaf_ar_commando : braf_factions_specops_base {
    _generalMacro = "braf_hiaf_dmr_commando";
    faction = "BRAF_HIAF";
    editorsubcategory = "BRAF_COMMANDO";
    model = "\BRAF_Factions\braf_factions_characters\Uniform\BRAF_BDU.p3d";
    displayName = "$STR_A3_CfgVehicles_B_Patrol_Soldier_MG_F0";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_horizon_marine_uniform_bottons";
    genericNames = "TanoanMen";
    magazines[] = {
        "200Rnd_556x45_Box_F",
        "200Rnd_556x45_Box_Red_F",
        "16Rnd_9x21_Mag",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green"
    };
    respawnWeapons[] = {
        "LMG_03_F",
        "braf_PT92",
        "Throw",
        "Put"
    };
    weapons[] = {
        "LMG_03_F",
        "braf_PT92",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "200Rnd_556x45_Box_F",
        "200Rnd_556x45_Box_Red_F",
        "16Rnd_9x21_Mag",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green"
    };
    Items[] = {
        "FirstAidKit",
        "FirstAidKit"
    };
    respawnItems[] = {
        "FirstAidKit",
        "FirstAidKit"
    };
    linkedItems[] = {
        "braf_hiaf_Mariner_boonie",
        "V_TacVestIR_blk",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_Mariner_boonie",
        "V_TacVestIR_blk",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
    class Wounds {
        tex[] = {};
        mat[] = {
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\top.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\pants.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "",
            ""
        };
    };
};
class braf_hiaf_dmr_commando : braf_factions_specops_base {
    _generalMacro = "braf_hiaf_dmr_commando";
    faction = "BRAF_HIAF";
    editorsubcategory = "BRAF_COMMANDO";
    model = "\BRAF_Factions\braf_factions_characters\Uniform\BRAF_BDU.p3d";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_B_Soldier_M_F0";
    uniformClass = "braf_horizon_marine_uniform_bottons";
    genericNames = "TanoanMen";
    magazines[] = {
        "braf_20Rnd_762x51",
        "braf_20Rnd_762x51",
        "braf_20Rnd_762x51",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_20Rnd_762x51_red",
        "braf_20Rnd_762x51_red"
    };
    respawnWeapons[] = {
        "braf_Fal_hiaf_Scope",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Fal_hiaf_Scope",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_20Rnd_762x51",
        "braf_20Rnd_762x51",
        "braf_20Rnd_762x51",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_20Rnd_762x51_red",
        "braf_20Rnd_762x51_red"
    };
    Items[] = {
        "FirstAidKit",
        "FirstAidKit"
    };
    respawnItems[] = {
        "FirstAidKit",
        "FirstAidKit"
    };
    linkedItems[] = {
        "H_Bandanna_sgg",
        "V_TacVestIR_blk",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "H_Bandanna_sgg",
        "V_TacVestIR_blk",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
    class Wounds {
        tex[] = {};
        mat[] = {
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\top.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\pants.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "",
            ""
        };
    };
};
class braf_hiaf_pointman_commando : braf_factions_specops_base {
    _generalMacro = "braf_hiaf_pointman_commando";
    faction = "BRAF_HIAF";
    editorsubcategory = "BRAF_COMMANDO";
    model = "\BRAF_Factions\braf_factions_characters\Uniform\BRAF_BDU.p3d";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_braf_pointman";
    uniformClass = "braf_horizon_marine_uniform_bottons";
    genericNames = "TanoanMen";
    magazines[] = {
        "braf_Boito_8Rnd_buck",
        "braf_Boito_8Rnd_buck",
        "braf_Boito_8Rnd_buck",
        "16Rnd_9x21_Mag",
        "16Rnd_9x21_Mag",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "Chemlight_green",
        "braf_Boito_8Rnd_buck",
        "braf_Boito_8Rnd_buck"
    };
    respawnWeapons[] = {
        "braf_boito_24_vigilante",
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_boito_24_vigilante",
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Boito_8Rnd_buck",
        "braf_Boito_8Rnd_buck",
        "braf_Boito_8Rnd_buck",
        "16Rnd_9x21_Mag",
        "16Rnd_9x21_Mag",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "Chemlight_green",
        "braf_Boito_8Rnd_buck",
        "braf_Boito_8Rnd_buck"
    };
    Items[] = {
        "FirstAidKit",
        "FirstAidKit"
    };
    respawnItems[] = {
        "FirstAidKit",
        "FirstAidKit"
    };
    linkedItems[] = {
        "H_Cap_Headphones",
        "V_TacVestIR_blk",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "H_Cap_Headphones",
        "V_TacVestIR_blk",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
    class Wounds {
        tex[] = {};
        mat[] = {
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\top.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\pants.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "",
            ""
        };
    };
};
class braf_hiaf_medic_commando : braf_factions_specops_base {
    _generalMacro = "braf_hiaf_medic_commando";
    faction = "BRAF_HIAF";
    editorsubcategory = "BRAF_COMMANDO";
    model = "\BRAF_Factions\braf_factions_characters\Uniform\BRAF_BDU.p3d";
    side = 1;
    backpack = "braf_hiaf_modular_assault_medic";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_B_medic_F0";
    uniformClass = "braf_horizon_marine_uniform_bottons";
    genericNames = "TanoanMen";
    magazines[] = {
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_30Rnd_556x45_red",
        "braf_30Rnd_556x45_red"
    };
    respawnWeapons[] = {
        "braf_MD97LC_SF",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_MD97LC_SF",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_30Rnd_556x45_red",
        "braf_30Rnd_556x45_red"
    };
    Items[] = {
        "FirstAidKit",
        "FirstAidKit"
    };
    respawnItems[] = {
        "FirstAidKit",
        "FirstAidKit"
    };
    linkedItems[] = {
        "H_Helmet_Skate",
        "V_TacVestIR_blk",
        "G_Spectacles",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "H_Helmet_Skate",
        "V_TacVestIR_blk",
        "G_Spectacles",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
    class Wounds {
        tex[] = {};
        mat[] = {
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\top.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\pants.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "",
            ""
        };
    };
};
class braf_hiaf_eng_commando : braf_factions_specops_base {
    _generalMacro = "braf_hiaf_eng_commando";
    faction = "BRAF_HIAF";
    editorsubcategory = "BRAF_COMMANDO";
    model = "\BRAF_Factions\braf_factions_characters\Uniform\BRAF_BDU.p3d";
    side = 1;
    backpack = "braf_hiaf_modular_assault_engineer";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_B_engineer_F0";
    uniformClass = "braf_horizon_marine_uniform_bottons";
    genericNames = "TanoanMen";
    magazines[] = {
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_30Rnd_556x45_red",
        "braf_30Rnd_556x45_red"
    };
    respawnWeapons[] = {
        "braf_MD97LC_SF",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_MD97LC_SF",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_30Rnd_556x45_red",
        "braf_30Rnd_556x45_red"
    };
    Items[] = {
        "FirstAidKit",
        "FirstAidKit"
    };
    respawnItems[] = {
        "FirstAidKit",
        "FirstAidKit"
    };
    linkedItems[] = {
        "braf_hiaf_marine_PatrolCap",
        "V_TacVestIR_blk",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_marine_PatrolCap",
        "V_TacVestIR_blk",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
    class Wounds {
        tex[] = {};
        mat[] = {
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\top.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\pants.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "",
            ""
        };
    };
};
class braf_hiaf_diver_commando : braf_factions_diver_base {
    _generalMacro = "braf_hiaf_diver_commando";
    faction = "BRAF_HIAF";
    editorsubcategory = "BRAF_COMMANDO";
    side = 1;
    scope = 0;
    scopeCurator = 2;
    displayName = "$STR_B_diver_F0";
    uniformClass = "U_I_Wetsuit";
    genericNames = "TanoanMen";
    magazines[] = {
        "30Rnd_9x21_Mag_SMG_02",
        "30Rnd_9x21_Mag_SMG_02",
        "30Rnd_9x21_Mag_SMG_02",
        "30Rnd_9x21_Mag_SMG_02_Tracer_Red"
    };
    respawnWeapons[] = {
        "SMG_05_F",
        "Throw",
        "Put"
    };
    weapons[] = {
        "SMG_05_F",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "30Rnd_9x21_Mag_SMG_02",
        "30Rnd_9x21_Mag_SMG_02",
        "30Rnd_9x21_Mag_SMG_02",
        "30Rnd_9x21_Mag_SMG_02_Tracer_Red"
    };
    Items[] = {
        "FirstAidKit"
    };
    respawnItems[] = {
        "FirstAidKit"
    };
    linkedItems[] = {
        "V_RebreatherIA",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "V_RebreatherIA",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    class Wounds {
        tex[] = {};
        mat[] = {
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\top.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\top_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\BDU\HIAF\pants.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\feridas\pants_injury.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Boot\boot.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "\BRAF_Factions\braf_factions_characters\Uniform\Data\Luva\gloves.rvmat",
            "",
            ""
        };
    };
};