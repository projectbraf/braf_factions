/*Normalmente os uniformes são definidos no oficial, squad leader, team leader, medic e rifleman*/
//------------------------------------- Infantaria Naval -------------------------------------------
//Command
class braf_hiaf_of_marine : braf_hiaf_of_regular {
    _generalMacro = "braf_hiaf_of_marine";
    editorsubcategory = "BRAF_MARINE";
    uniformClass = "braf_horizon_marine_uniform";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_of_marine.jpg";
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
        "braf_MD97LC",
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_MD97LC",
        "BRAF_PT92",
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
        "braf_hiaf_marine_PatrolCap",
        "braf_lbv_olive_squadleader",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_marine_PatrolCap",
        "braf_lbv_olive_squadleader",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "";
    };
    #include "\braf\braf_factions\addons\characters\functions\hiaf_symbols.hpp"
    headgearList[] = {
        "braf_hiaf_marine_helmet_cover",
        0.50,
        "braf_hiaf_marine_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_marine_helmet_cover_goggles_down",
        0.25
    };
    enSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
};
class braf_hiaf_sl_marine : braf_hiaf_sl_regular {
    _generalMacro = "braf_hiaf_sl_marine";
    editorsubcategory = "BRAF_MARINE";
    uniformClass = "braf_horizon_marine_uniform";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_of_marine.jpg";
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
        "braf_MD97LC",
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_MD97LC",
        "BRAF_PT92",
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
        "braf_hiaf_marine_helmet_cover_goggles_up",
        "braf_iba_woodland_squadleader",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_marine_helmet_cover_goggles_up",
        "braf_iba_woodland_squadleader",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\hiaf_symbols.hpp"
    headgearList[] = {
        "braf_hiaf_marine_helmet_cover",
        0.50,
        "braf_hiaf_marine_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_marine_helmet_cover_goggles_down",
        0.25
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
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
};
class braf_hiaf_tl_marine : braf_hiaf_tl_regular {
    _generalMacro = "braf_hiaf_tl_marine";
    editorsubcategory = "BRAF_MARINE";
    uniformClass = "braf_horizon_marine_RolledUp_uniform";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_of_marine.jpg";
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
        "braf_30Rnd_556x45_red",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_SmokeRed_Grenade_shell",
        "1Rnd_SmokeRed_Grenade_shell",
        "UGL_FlareWhite_F"
    };
    respawnWeapons[] = {
        "braf_md97lc_GL", //substituir por md97GL
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_md97lc_GL", //substituir por md97GL
        "BRAF_PT92",
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
        "braf_30Rnd_556x45_red",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_SmokeRed_Grenade_shell",
        "1Rnd_SmokeRed_Grenade_shell",
        "UGL_FlareWhite_F"
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
        "braf_hiaf_marine_helmet_cover_goggles_up",
        "braf_iba_woodland_squadleader",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_marine_helmet_cover_goggles_up",
        "braf_iba_woodland_squadleader",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\hiaf_symbols.hpp"
    headgearList[] = {
        "braf_hiaf_marine_helmet_cover",
        0.50,
        "braf_hiaf_marine_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_marine_helmet_cover_goggles_down",
        0.25
    };
    enSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
};

//Specialists
class braf_hiaf_medic_marine : braf_hiaf_medic_regular {
    _generalMacro = "braf_hiaf_medic_marine";
    editorsubcategory = "BRAF_MARINE";
    uniformClass = "braf_horizon_marine_uniform";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_of_marine.jpg";
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
        "braf_MD97LC",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_MD97LC",
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
        "braf_hiaf_marine_helmet_cover_goggles_down",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_marine_helmet_cover_goggles_down",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\hiaf_symbols.hpp"
    headgearList[] = {
        "braf_hiaf_marine_helmet_cover",
        0.50,
        "braf_hiaf_marine_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_marine_helmet_cover_goggles_down",
        0.25
    };
    enSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        "Camo5", //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Luva\gloves.paa",
        ""
    };
};
class braf_hiaf_eng_marine : braf_hiaf_eng_regular {
    _generalMacro = "braf_hiaf_eng_marine";
    editorsubcategory = "BRAF_MARINE";
    uniformClass = "braf_horizon_marine_uniform";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_of_marine.jpg";
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
        "braf_MD97LC",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_MD97LC",
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
        "braf_hiaf_marine_helmet_cover_goggles_down",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_marine_helmet_cover_goggles_down",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\hiaf_symbols.hpp"
    headgearList[] = {
        "braf_hiaf_marine_helmet_cover",
        0.50,
        "braf_hiaf_marine_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_marine_helmet_cover_goggles_down",
        0.25
    };
    enSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
};

//Crew
class braf_hiaf_crewman_marine : braf_hiaf_crewman_regular {
    _generalMacro = "braf_hiaf_crewman_marine";
    editorsubcategory = "BRAF_MARINE";
    uniformClass = "braf_horizon_marine_uniform";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_crewman_marine.jpg";
    magazines[] = {
        "16Rnd_9x21_Mag",
        "SmokeShell",
        "Chemlight_green"
    };
    respawnWeapons[] = {
        "BRAF_PT92",
        "Throw",
        "Put"
    };
    weapons[] = {
        "BRAF_PT92",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "16Rnd_9x21_Mag",
        "SmokeShell",
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
        "H_HelmetCrew_I",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "H_HelmetCrew_I",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
      
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\hiaf_symbols.hpp"
    headgearList[] = {
        "braf_hiaf_marine_helmet_cover",
        0.50,
        "braf_hiaf_marine_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_marine_helmet_cover_goggles_down",
        0.25
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
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
};

//Infantry
class braf_hiaf_rifleman_marine : braf_hiaf_rifleman_regular {
    _generalMacro = "braf_hiaf_rifleman_marine";
    editorsubcategory = "BRAF_MARINE";
    uniformClass = "braf_horizon_marine_RolledUp_uniform";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_of_marine.jpg";
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
        "braf_MD97LC",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_MD97LC",
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
        "braf_hiaf_marine_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_marine_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\hiaf_symbols.hpp"
    headgearList[] = {
        "braf_hiaf_marine_helmet_cover",
        0.50,
        "braf_hiaf_marine_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_marine_helmet_cover_goggles_down",
        0.25
    };
    enSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
};
class braf_hiaf_ammo_marine : braf_hiaf_ammo_regular {
    _generalMacro = "braf_hiaf_ammo_marine";
    editorsubcategory = "BRAF_MARINE";
    uniformClass = "braf_horizon_marine_RolledUp_uniform";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_of_marine.jpg";
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
        "braf_MD97LC",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_MD97LC",
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
        "braf_hiaf_marine_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_marine_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\hiaf_symbols.hpp"
    headgearList[] = {
        "braf_hiaf_marine_helmet_cover",
        0.50,
        "braf_hiaf_marine_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_marine_helmet_cover_goggles_down",
        0.25
    };
    enSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
};
class braf_hiaf_dmr_marine : braf_hiaf_dmr_regular {
    _generalMacro = "braf_hiaf_dmr_marine";
    editorsubcategory = "BRAF_MARINE";
    uniformClass = "braf_horizon_marine_uniform";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_dmr_marine.jpg";
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
        "braf_factions_fal_hiaf_scope",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_fal_hiaf_scope",
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
        "braf_HIAF_Mariner_boonie",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_HIAF_Mariner_boonie",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\hiaf_symbols.hpp"
    headgearList[] = {
        "braf_hiaf_marine_helmet_cover",
        0.50,
        "braf_hiaf_marine_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_marine_helmet_cover_goggles_down",
        0.25
    };
    enSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
};
class braf_hiaf_gl_marine : braf_hiaf_gl_regular {
    _generalMacro = "braf_hiaf_gl_marine";
    editorsubcategory = "BRAF_MARINE";
    uniformClass = "braf_horizon_marine_uniform";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_gl_marine.jpg";
    magazines[] = {
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "Chemlight_green",
        "braf_30Rnd_556x45_red",
        "braf_30Rnd_556x45_red",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_SmokeRed_Grenade_shell",
        "1Rnd_SmokeRed_Grenade_shell",
        "UGL_FlareWhite_F"
    };
    respawnWeapons[] = {
        "braf_md97lc_GL", //substituir por md97GL
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_md97lc_GL", //substituir por md97GL
        "BRAF_PT92",
        "Binocular",
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
        "Chemlight_green",
        "braf_30Rnd_556x45_red",
        "braf_30Rnd_556x45_red",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_SmokeRed_Grenade_shell",
        "1Rnd_SmokeRed_Grenade_shell",
        "UGL_FlareWhite_F"
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
        "braf_hiaf_marine_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_marine_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\hiaf_symbols.hpp"
    headgearList[] = {
        "braf_hiaf_marine_helmet_cover",
        0.50,
        "braf_hiaf_marine_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_marine_helmet_cover_goggles_down",
        0.25
    };
    enSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
};
class braf_hiaf_pointman_marine : braf_hiaf_mp_regular {
    _generalMacro = "braf_hiaf_pointman_marine";
    editorsubcategory = "BRAF_MARINE";
    displayName = "$STR_BRAF_POINTMAN";
    uniformClass = "braf_horizon_marine_RolledUp_uniform";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_of_marine.jpg";
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
        "braf_boito_20_madeira",
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_boito_20_madeira",
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
        "braf_hiaf_marine_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_marine_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\hiaf_symbols.hpp"
    headgearList[] = {
        "braf_hiaf_marine_helmet_cover",
        0.50,
        "braf_hiaf_marine_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_marine_helmet_cover_goggles_down",
        0.25
    };
    enSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
};
class braf_hiaf_ar_marine : braf_hiaf_ar_regular {
    _generalMacro = "braf_hiaf_ar_marine";
    editorsubcategory = "BRAF_MARINE";
    displayName = "$STR_B_Soldier_AR_F0";
    uniformClass = "braf_horizon_marine_RolledUp_uniform";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_ar_marine.jpg";
    magazines[] = {
        "braf_40Rnd_762x51",
        "braf_40Rnd_762x51",
        "braf_40Rnd_762x51",
        "braf_40Rnd_762x51_red",
        "braf_40Rnd_762x51_red",
        "16Rnd_9x21_Mag"
    };
    respawnWeapons[] = {
        "braf_FAP",
        "BRAF_PT92",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_FAP",
        "BRAF_PT92",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_40Rnd_762x51",
        "braf_40Rnd_762x51",
        "braf_40Rnd_762x51",
        "braf_40Rnd_762x51_red",
        "braf_40Rnd_762x51_red",
        "16Rnd_9x21_Mag"
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
        "braf_hiaf_marine_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_marine_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\hiaf_symbols.hpp"
    headgearList[] = {
        "braf_hiaf_marine_helmet_cover",
        0.50,
        "braf_hiaf_marine_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_marine_helmet_cover_goggles_down",
        0.25
    };
    enSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
};
class braf_hiaf_lat_marine : braf_hiaf_lat_regular {
    _generalMacro = "braf_hiaf_lat_marine";
    editorsubcategory = "BRAF_MARINE";
    uniformClass = "braf_horizon_marine_RolledUp_uniform";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_lat_marine.jpg";
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
        "braf_MD97LC",
        "BRAF_launch_alac",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_MD97LC",
        "BRAF_launch_alac",
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
        "braf_hiaf_marine_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_marine_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\hiaf_symbols.hpp"
    headgearList[] = {
        "braf_hiaf_marine_helmet_cover",
        0.50,
        "braf_hiaf_marine_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_marine_helmet_cover_goggles_down",
        0.25
    };
    enSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
};
class braf_hiaf_unarmed_marine : braf_hiaf_rifleman_regular {
    _generalMacro = "braf_hiaf_unarmed_marine";
    editorsubcategory = "BRAF_MARINE";
    displayName = "$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
    uniformClass = "braf_horizon_marine_uniform_bottons";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_crewman_marine.jpg";
    magazines[] = {};
    respawnWeapons[] = {};
    weapons[] = {};
    respawnMagazines[] = {};
    Items[] = {};
    respawnItems[] = {};
    linkedItems[] = {};
    respawnLinkedItems[] = {};
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        "Camo5", //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Luva\gloves.paa",
        ""
    };
};

//Weapons
class braf_hiaf_aa_marine : braf_hiaf_aa_regular {
    _generalMacro = "braf_hiaf_aa_marine";
    editorsubcategory = "BRAF_MARINE";
    uniformClass = "braf_horizon_marine_uniform";
    editorPreview = "editorPreview\hiaf_marine\braf_hiaf_aa_marine.jpg";
    magazines[] = {
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45_red",
        "BRAF_Igla_missile"
    };
    respawnWeapons[] = {
        "braf_MD97LC",
        "BRAF_Igla",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_MD97LC",
        "BRAF_Igla",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45_red",
        "BRAF_Igla_missile"
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
        "braf_HIAF_Mariner_boonie",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_HIAF_Mariner_boonie",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\hiaf_symbols.hpp"
    headgearList[] = {
        "braf_hiaf_marine_helmet_cover",
        0.50,
        "braf_hiaf_marine_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_marine_helmet_cover_goggles_down",
        0.25
    };
    enSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "",
        ""
    };
};

//Compatibility
class braf_horizon_officer_marine : braf_hiaf_of_marine {
    scope = 1;
    scopeCurator = 1;
};
class braf_horizon_sl_marine : braf_hiaf_sl_marine {
    scope = 1;
    scopeCurator = 1;
};
class braf_horizon_tl_marine : braf_hiaf_tl_marine {
    scope = 1;
    scopeCurator = 1;
};
class braf_horizon_medic_marine : braf_hiaf_medic_marine {
    scope = 1;
    scopeCurator = 1;
};
class braf_horizon_engineer_marine : braf_hiaf_eng_marine {
    scope = 1;
    scopeCurator = 1;
};
class braf_horizon_crewman_marine : braf_hiaf_crewman_marine {
    scope = 1;
    scopeCurator = 1;
};
class braf_horizon_pointman_marine : braf_hiaf_pointman_marine {
    scope = 1;
    scopeCurator = 1;
};
class braf_horizon_rifleman_marine : braf_hiaf_rifleman_marine {
    scope = 1;
    scopeCurator = 1;
};
class braf_horizon_ammo_assist_marine : braf_hiaf_ammo_marine {
    scope = 1;
    scopeCurator = 1;
};
class braf_horizon_marksman_marine : braf_hiaf_dmr_marine {
    scope = 1;
    scopeCurator = 1;
};
class braf_horizon_gl_marine : braf_hiaf_gl_marine {
    scope = 1;
    scopeCurator = 1;
};
class braf_horizon_ar_marine : braf_hiaf_ar_marine {
    scope = 1;
    scopeCurator = 1;
};
class braf_horizon_lightat_marine : braf_hiaf_lat_marine {
    scope = 1;
    scopeCurator = 1;
};
class braf_marine_bottons : braf_hiaf_unarmed_marine {
    scope = 1;
    scopeCurator = 1;
};
class braf_horizon_aa_marine : braf_hiaf_aa_marine {
    scope = 1;
    scopeCurator = 1;
};