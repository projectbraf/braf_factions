//------------------------------------- Infantaria Regular -------------------------------------------
//Command
class braf_cra_of_regular : braf_army_of_regular_2000 {
    _generalMacro = "braf_cra_of_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    uniformAccessories[] = {};
    uniformClass = "braf_cratenia_regular_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_of_regular.jpg";
    identityTypes[] = {
        "NoGlasses",
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "16Rnd_9x21_Mag",
        "16Rnd_9x21_Mag",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "16Rnd_9x21_Mag",
        "16Rnd_9x21_Mag",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
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
        "braf_cratenia_army_beret",
        "braf_ephod_vest",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_cratenia_army_beret",
        "braf_ephod_vest",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
};
class braf_cra_sl_regular : braf_army_sl_regular_2000 {
    _generalMacro = "braf_cra_sl_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_cratenia_regular_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_rifleman_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "16Rnd_9x21_Mag",
        "16Rnd_9x21_Mag",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "16Rnd_9x21_Mag",
        "16Rnd_9x21_Mag",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
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
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};
class braf_cra_tl_regular : braf_army_tl_regular_2000 {
    _generalMacro = "braf_cra_tl_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    uniformAccessories[] = {};
    uniformClass = "braf_cratenia_regular_RolledUp_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_rifleman_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "16Rnd_9x21_Mag",
        "16Rnd_9x21_Mag",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "16Rnd_9x21_Mag",
        "16Rnd_9x21_Mag",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
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
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};

//Specialists
class braf_cra_medic_regular : braf_army_medic_regular_2000 {
    _generalMacro = "braf_cra_medic_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    side = 0;
    backpack = "braf_alice_medium_olive_medic";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_cratenia_regular_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_rifleman_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
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
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};
class braf_cra_eng_regular : braf_army_eng_regular_2000 {
    _generalMacro = "braf_cra_eng_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    side = 0;
    backpack = "braf_alice_medium_olive_engineer";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_cratenia_regular_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_rifleman_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
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
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};

//Infantry
class braf_cra_rifleman_regular : braf_army_rifleman_regular_2000 {
    _generalMacro = "braf_cra_rifleman_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    uniformAccessories[] = {};
    uniformClass = "braf_cratenia_regular_RolledUp_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_rifleman_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
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
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};
class braf_cra_riflelight_regular : braf_army_rifleman_regular_2000 {
    _generalMacro = "braf_cra_riflelight_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    displayName = "$STR_B_Soldier_lite_F0";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    uniformAccessories[] = {};
    uniformClass = "braf_cratenia_regular_RolledUp_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_rifleman_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
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
        "braf_cratenia_army_beret",
        "braf_ephod_vest",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_cratenia_army_beret",
        "braf_ephod_vest",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
};
class braf_cra_ammo_regular : braf_army_rifleman_regular_2000 {
    _generalMacro = "braf_cra_ammo_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    displayName = "$STR_B_Soldier_A_F0";
    side = 0;
    backpack = "braf_alice_medium_olive_ammo_556";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_cratenia_regular_RolledUp_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_rifleman_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
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
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};
class braf_cra_dmr_regular : braf_army_dmr_regular_2000 {
    _generalMacro = "braf_cra_dmr_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_cratenia_regular_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_dmr_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
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
        "braf_fal",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_fal",
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
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};
class braf_cra_ar_regular : braf_army_ar_regular_2000 {
    _generalMacro = "braf_cra_ar_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_cratenia_regular_RolledUp_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_ar_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "30Rnd_556x45_Stanag",
        "30Rnd_556x45_Stanag",
        "30Rnd_556x45_Stanag"
    };
    respawnWeapons[] = {
        "braf_lmga4",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_lmga4",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "30Rnd_556x45_Stanag",
        "30Rnd_556x45_Stanag",
        "30Rnd_556x45_Stanag"
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
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};
class braf_cra_lat_regular : braf_army_lat_regular_2000 {
    _generalMacro = "braf_cra_lat_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    displayName = "$STR_BRAF_LAT";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_cratenia_regular_RolledUp_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_lat_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "BRAF_launch_alac",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "BRAF_launch_alac",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "HandGrenade",
        "HandGrenade",
        "SmokeShell",
        "SmokeShellGreen",
        "Chemlight_green",
        "braf_Lapa30Rnd_556x45_red",
        "braf_Lapa30Rnd_556x45_red"
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
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};
class braf_cra_militia_regular : braf_army_rifleman_regular_2000 {
    _generalMacro = "braf_cra_militia_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_braf_militia";
    uniformClass = "braf_cratenia_regular_RolledUp_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_militia_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Clip_5Rnd_762x51",
        "braf_Clip_5Rnd_762x51",
        "braf_Clip_5Rnd_762x51",
        "SmokeShell",
        "Chemlight_green"
    };
    respawnWeapons[] = {
        "braf_Mosquefal",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Mosquefal",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Clip_5Rnd_762x51",
        "braf_Clip_5Rnd_762x51",
        "braf_Clip_5Rnd_762x51",
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
        "braf_orlite_helm_olive",
        "braf_Susp_Y_0",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_Susp_Y_0",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};
class braf_cra_unarmed_regular : braf_army_rifleman_regular_2000 {
    _generalMacro = "braf_cra_unarmed_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    displayName = "$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
    side = 0;
    scope = 1;
    scopeCurator = 2;
    uniformClass = "braf_cratenia_regular_uniform_bottons";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_rifleman_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {};
    respawnWeapons[] = {};
    weapons[] = {};
    respawnMagazines[] = {};
    Items[] = {};
    respawnItems[] = {};
    linkedItems[] = {};
    respawnLinkedItems[] = {};
};
//Weapons
class braf_cra_at_regular : braf_army_at_regular_2000 {
    _generalMacro = "braf_cra_at_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_cratenia_regular_RolledUp_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_at_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green",
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "braf_Gustav",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "braf_Gustav",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
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
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};
class braf_cra_aa_regular : braf_army_aa_regular_2000 {
    _generalMacro = "braf_cra_aa_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    displayName = "$STR_B_Soldier_AA_F0";
    side = 0;
    backpack = "braf_alice_medium_olive_ammo_aa_72";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_cratenia_regular_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_aa_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45_red",
        "BRAF_Igla_missile"
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "BRAF_Igla",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "BRAF_Igla",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45_red",
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
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};
//Statics
class braf_cra_mortar_regular : braf_army_mortar_regular_2000 {
    _generalMacro = "braf_cra_mortar_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    backpack = "STR_BRAF_Mortar";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    uniformClass = "braf_cratenia_regular_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_rifleman_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
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
        "braf_orlite_helm_olive",
        "braf_ephod_vest",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_vest",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};
class braf_cra_mortar_a_regular : braf_army_mortar_a_regular_2000 {
    _generalMacro = "braf_cra_mortar_a_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    backpack = "BRAF_B_M252_Bipod_Bag";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_BRAF_Mortar_A";
    uniformClass = "braf_cratenia_regular_RolledUp_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_rifleman_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
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
        "braf_orlite_helm_olive",
        "braf_ephod_vest",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_vest",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};
class braf_cra_hmg_regular : braf_army_rifleman_regular_2000 {
    _generalMacro = "braf_cra_hmg_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    backpack = "BRAF_B_M2_Gun_Bag";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_BRAF_M2";
    uniformAccessories[] = {};
    uniformClass = "braf_cratenia_regular_RolledUp_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_rifleman_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
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
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};
class braf_cra_hmg_a_regular : braf_army_rifleman_regular_2000 {
    _generalMacro = "braf_cra_hmg_a_regular";
    faction = "BRAF_CRATENIA";
    editorsubcategory = "BRAF_REGULAR";
    backpack = "BRAF_B_M2_Tripod_Bag";
    side = 0;
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_BRAF_M2_A";
    uniformAccessories[] = {};
    uniformClass = "braf_cratenia_regular_uniform";
    genericNames = "NATOMen";
    editorPreview = "editorPreview\cra_army\braf_cra_rifleman_regular.jpg";
    identityTypes[] = {
        "LanguageGRE_F",
        "Head_NATO"
    };
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
    };
    respawnWeapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_Lapa",
        "Throw",
        "Put"
    };
    respawnMagazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
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
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "braf_ephod_balistic_cra",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
    #include "\braf\braf_factions\addons\characters\functions\cra_symbols.hpp"
    headgearList[] = {
        "braf_orlite_helm_olive",
        0.50,
        "braf_orlite_helm_tan",
        0.50,
    };
};