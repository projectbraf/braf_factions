/*Normalmente os uniformes são definidos no oficial, squad leader, team leader, medic e rifleman*/
//------------------------------------- Infantaria Regular -------------------------------------------
//Command
class braf_hiaf_of_regular : braf_army_of_regular_2000 {
    _generalMacro = "braf_hiaf_of_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "BRAF_Horizon_regular_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
    identityTypes[] = {
        "NoGlasses",
        "LanguageFRE_F",
        "Head_NATO"
    };
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
        "braf_hiaf_army_beret",
        "braf_lbv_hiaf",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_beret",
        "braf_lbv_hiaf",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_sl_regular : braf_army_sl_regular_2000 {
    _generalMacro = "braf_hiaf_sl_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "BRAF_Horizon_regular_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
    identityTypes[] = {
        "NoGlasses",
        "LanguageFRE_F",
        "Head_NATO"
    };
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
        "braf_hiaf_army_helmet_cover",
        "braf_iba_woodland_squadleader",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_helmet_cover",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_tl_regular : braf_army_tl_regular_2000 {
    _generalMacro = "braf_hiaf_tl_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_horizon_regular_RolledUp_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
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
        "braf_hiaf_army_helmet_cover",
        "braf_iba_woodland_squadleader",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_helmet_cover",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};

//Specialists
class braf_hiaf_medic_regular : braf_army_medic_regular_2000 {
    _generalMacro = "braf_hiaf_medic_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    backpack = "braf_hiaf_alice_medium_medic";
    scope = 2;
    scopeCurator = 2;
    uniformAccessories[] = {};
    uniformClass = "BRAF_Horizon_regular_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
    identityTypes[] = {
        "NoGlasses",
        "LanguageFRE_F",
        "Head_NATO"
    };
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
        "braf_hiaf_army_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_helmet_cover",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
};
class braf_hiaf_eng_regular : braf_army_eng_regular_2000 {
    _generalMacro = "braf_hiaf_eng_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    backpack = "braf_hiaf_alice_medium_engineer";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "BRAF_Horizon_regular_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
    identityTypes[] = {
        "NoGlasses",
        "LanguageFRE_F",
        "Head_NATO"
    };
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
        "braf_hiaf_army_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_helmet_cover",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        "Camo5", //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\HIAF\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_jungle_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Luva\gloves.paa",
        ""
    };
};
//Infantry
class braf_hiaf_rifleman_regular : braf_army_rifleman_regular_2000 {
    _generalMacro = "braf_hiaf_rifleman_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_horizon_regular_RolledUp_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
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
        "braf_hiaf_army_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_helmet_cover",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_riflelight_regular : braf_army_rifleman_regular_2000 {
    _generalMacro = "braf_hiaf_riflelight_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    displayName = "$STR_B_Soldier_lite_F0";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_horizon_regular_RolledUp_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
    magazines[] = {
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
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
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
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
        "braf_hiaf_boonie",
        "braf_lbv_hiaf",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_boonie",
        "braf_lbv_hiaf",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_ammo_regular : braf_army_ammo_regular_2000 {
    _generalMacro = "braf_hiaf_ammo_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    displayName = "$STR_B_Soldier_A_F0";
    side = 1;
    backpack = "braf_hiaf_alice_medium_ammo_mg_762";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_horizon_regular_RolledUp_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
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
        "braf_hiaf_army_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_helmet_cover",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_dmr_regular : braf_army_dmr_regular_2000 {
    _generalMacro = "braf_hiaf_dmr_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "BRAF_Horizon_regular_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_dmr_regular.jpg";
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
        "braf_hiaf_boonie",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_boonie",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_gl_regular : braf_army_gl_regular_2000 {
    _generalMacro = "braf_hiaf_gl_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "BRAF_Horizon_regular_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_gl_regular.jpg";
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
        "braf_hiaf_army_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_helmet_cover",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_mp_regular : braf_army_mp_shotgun_regular_2000 {
    _generalMacro = "braf_hiaf_mp_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_BRAF_MP_2";
    uniformClass = "braf_horizon_regular_RolledUp_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_mp_regular.jpg";
    magazines[] = {
        "braf_Boito_8Rnd_buck",
        "braf_Boito_8Rnd_buck",
        "braf_Boito_8Rnd_buck",
        "16Rnd_9x21_Mag",
        "16Rnd_9x21_Mag",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
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
        "SmokeShellGreen",
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
        "braf_hiaf_mp_helmet",
        "braf_lbv_hiaf",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_mp_helmet",
        "braf_lbv_hiaf",
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
        "braf_hiaf_mp_helmet",
        0.75,
        "braf_hiaf_army_beret",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_ar_regular : braf_army_ar_regular_2000 {
    _generalMacro = "braf_hiaf_ar_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_A3_CfgVehicles_B_Patrol_Soldier_MG_F0";
    uniformAccessories[] = {};
    uniformClass = "braf_horizon_regular_RolledUp_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_ar_regular.jpg";
    magazines[] = {
        "braf_75Rnd_mag58_mag_Tracer_red",
        "braf_75Rnd_mag58_mag_Tracer_red",
        "16Rnd_9x21_Mag",
        "braf_75Rnd_mag58_mag_Tracer_red"
    };
    respawnWeapons[] = {
        "BRAF_mag",
        "BRAF_PT92",
        "Throw",
        "Put"
    };
    weapons[] = {
        "BRAF_mag",
        "BRAF_PT92",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_75Rnd_mag58_mag_Tracer_red",
        "braf_75Rnd_mag58_mag_Tracer_red",
        "16Rnd_9x21_Mag",
        "braf_75Rnd_mag58_mag_Tracer_red"
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
        "braf_hiaf_army_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_helmet_cover",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_lat_regular : braf_army_lat_regular_2000 {
    _generalMacro = "braf_hiaf_lat_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    displayName = "$STR_BRAF_LAT";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_horizon_regular_RolledUp_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_lat_regular.jpg";
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
        "braf_hiaf_army_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_helmet_cover",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_unarmed_regular : braf_army_unarmed_regular_2000 {
    _generalMacro = "braf_hiaf_unarmed_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    displayName = "$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
    side = 1;
    scope = 1;
    scopeCurator = 2;
    uniformAccessories[] = {};
    uniformClass = "braf_horizon_regular_uniform_bottons";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
    magazines[] = {};
    respawnWeapons[] = {};
    weapons[] = {};
    respawnMagazines[] = {};
    Items[] = {};
    respawnItems[] = {};
    linkedItems[] = {};
    respawnLinkedItems[] = {};
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        "Camo5"
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\gloves.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\gloves.rvmat",
        ""
    };
};

//Weapons
class braf_hiaf_aa_regular : braf_army_aa_regular_2000 {
    _generalMacro = "braf_hiaf_aa_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    backpack = "braf_hiaf_alice_medium_ammo_aa_72";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_B_Soldier_AA_F0";
    uniformAccessories[] = {};
    uniformClass = "BRAF_Horizon_regular_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_aa_regular.jpg";
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
        "braf_hiaf_boonie",
        "braf_wdl_vest",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_boonie",
        "braf_wdl_vest",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_at_regular : braf_army_at_regular_2000 {
    _generalMacro = "braf_hiaf_at_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_B_Soldier_LAT_F0";
    uniformAccessories[] = {};
    uniformClass = "braf_horizon_regular_RolledUp_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_at_regular.jpg";
    magazines[] = {
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green",
    };
    respawnWeapons[] = {
        "braf_MD97LC",
        "braf_Gustav",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_MD97LC",
        "braf_Gustav",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green",
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
        "braf_hiaf_army_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_helmet_cover",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_at_a_regular : braf_army_lat_regular_2000 {
    _generalMacro = "braf_hiaf_at_a_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    displayName = "$STR_BRAF_CSR_A";
    side = 1;
    backpack = "braf_hiaf_alice_medium_ammo_at_84";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_horizon_regular_RolledUp_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
    magazines[] = {
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "braf_30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green",
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
        "SmokeShell",
        "Chemlight_green",
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
        "braf_hiaf_army_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_helmet_cover",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};

//Statics
class braf_hiaf_mortar_regular : braf_army_mortar_regular_2000 {
    _generalMacro = "braf_hiaf_mortar_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    backpack = "BRAF_B_M252_Gun_Bag";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_BRAF_Mortar";
    uniformAccessories[] = {};
    uniformClass = "BRAF_Horizon_regular_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
    magazines[] = {
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
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
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
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
        "braf_hiaf_boonie",
        "braf_lbv_hiaf",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_boonie",
        "braf_lbv_hiaf",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_mortar_a_regular : braf_army_mortar_a_regular_2000 {
    _generalMacro = "braf_hiaf_mortar_a_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    backpack = "BRAF_B_M252_Bipod_Bag";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_BRAF_Mortar_A";
    uniformAccessories[] = {};
    uniformClass = "braf_horizon_regular_RolledUp_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
    magazines[] = {
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
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
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
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
        "braf_hiaf_boonie",
        "braf_lbv_hiaf",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_boonie",
        "braf_lbv_hiaf",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_hmg_regular : braf_army_m2_regular_2000 {
    _generalMacro = "braf_hiaf_hmg_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    backpack = "BRAF_B_M2_Gun_Bag";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_BRAF_M2";
    uniformAccessories[] = {};
    uniformClass = "braf_horizon_regular_RolledUp_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
    magazines[] = {
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
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
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
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
        "braf_hiaf_army_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_helmet_cover",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\rolled\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_hmg_a_regular : braf_army_m2_a_regular_2000 {
    _generalMacro = "braf_hiaf_hmg_a_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    backpack = "BRAF_B_M2_Tripod_Bag";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_BRAF_M2_A";
    uniformAccessories[] = {};
    uniformClass = "BRAF_Horizon_regular_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
    magazines[] = {
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
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
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
        "braf_20Rnd_556x45",
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
        "braf_hiaf_army_helmet_cover",
        "braf_iba_woodland_rifleman",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_helmet_cover",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_hiaf_crewman_regular : braf_army_crewman_regular_2000 {
    _generalMacro = "braf_hiaf_crewman_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "BRAF_Horizon_regular_uniform";
    genericNames = "TanoanMen";
    editorPreview = "editorPreview\hiaf_army\braf_hiaf_rifleman_regular.jpg";
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
        "braf_iba_woodland",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "H_HelmetCrew_I",
        "braf_iba_woodland",
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
        "braf_hiaf_army_helmet_cover",
        0.50,
        "braf_hiaf_army_helmet_cover_goggles_up",
        0.25,
        "braf_hiaf_army_helmet_cover_goggles_down",
        0.25
    };
    hiddenSelections[] = {
        "char0",
        "char1",
        "char2",
        "char3",
        "char4",
        "char5",
        "char6",
        "char7",
        "char8",
        "char9",
        "char10",
        "char11",
        "rank_insignia",
        "branch_insignia",
        "brevet1_insignia",
        "shoulder_insignia",
        "insignia",
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4" //Gloves
    };
    hiddenSelectionsTextures[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "\braf\braf_factions\addons\characters\uniform\Data\Boot\boot_co.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};

//Compatibility
class BRAF_Horizon_Officer : braf_hiaf_of_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_SL : braf_hiaf_sl_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_tL : braf_hiaf_tl_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_Medic : braf_hiaf_medic_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_Engineer : braf_hiaf_eng_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_crewman : braf_hiaf_crewman_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_Rifleman : braf_hiaf_rifleman_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_Rifleman_light : braf_hiaf_riflelight_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_Ammo_Assist : braf_hiaf_ammo_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_Marksman : braf_hiaf_dmr_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_GL : braf_hiaf_gl_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_Military_Police : braf_hiaf_mp_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_AR : braf_hiaf_ar_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_lightAt : braf_hiaf_lat_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_uniform_bottons : braf_hiaf_unarmed_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_AA : braf_hiaf_aa_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_heavy_At : braf_hiaf_at_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_heavy_At_assist : braf_hiaf_at_a_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_Mortar : braf_hiaf_mortar_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_Mortar_assist : braf_hiaf_mortar_a_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_M2 : braf_hiaf_hmg_regular {
    scope = 1;
    scopeCurator = 1;
};
class BRAF_Horizon_M2_assist : braf_hiaf_hmg_a_regular {
    scope = 1;
    scopeCurator = 1;
};