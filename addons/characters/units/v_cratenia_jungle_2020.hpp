//------------------------------------- Infantaria de Selva -------------------------------------------
//Command
class braf_cra_of_jungle : braf_cra_of_regular {
    _generalMacro = "braf_cra_of_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    uniformClass = "BRAF_Cratenia_Jungle_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_of_jungle.jpg";
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
        "braf_factions_lapa_green",
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
        "braf_cratenia_jungle_beret",
        "braf_ephod_vest",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_cratenia_jungle_beret",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};
class braf_cra_sl_jungle : braf_cra_sl_regular {
    _generalMacro = "braf_cra_sl_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    uniformClass = "BRAF_Cratenia_Jungle_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_rifleman_jungle.jpg";
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
        "braf_factions_lapa_green",
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};
class braf_cra_tl_jungle : braf_cra_tl_regular {
    _generalMacro = "braf_cra_tl_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    uniformClass = "braf_cratenia_Jungle_RolledUp_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_rifleman_jungle.jpg";
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
        "braf_factions_lapa_green",
        "BRAF_PT92",
        "Binocular",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};

//Specialists
class braf_cra_medic_jungle : braf_cra_medic_regular {
    _generalMacro = "braf_cra_medic_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    backpack = "braf_alice_medium_olive_medic";
    uniformClass = "BRAF_Cratenia_Jungle_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_rifleman_jungle.jpg";
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
        "braf_factions_lapa_green",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
class braf_cra_eng_jungle : braf_cra_eng_regular {
    _generalMacro = "braf_cra_eng_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    backpack = "braf_alice_medium_olive_engineer";
    uniformClass = "BRAF_Cratenia_Jungle_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_rifleman_jungle.jpg";
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
        "braf_factions_lapa_green",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        "Camo5", //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Luva\gloves_tan_co.paa",
        ""
    };
};

//Infantry
class braf_cra_rifleman_jungle : braf_cra_rifleman_regular {
    _generalMacro = "braf_cra_rifleman_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    uniformClass = "braf_cratenia_Jungle_RolledUp_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_rifleman_jungle.jpg";
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
        "braf_factions_lapa_green",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};
class braf_cra_riflelight_jungle : braf_cra_rifleman_regular {
    _generalMacro = "braf_cra_riflelight_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    displayName = "$STR_B_Soldier_lite_F0";
    uniformClass = "braf_cratenia_Jungle_RolledUp_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_rifleman_jungle.jpg";
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
    };
    respawnWeapons[] = {
        "braf_factions_lapa_green",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
        "braf_cratenia_jungle_beret",
        "braf_ephod_vest",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_cratenia_jungle_beret",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};
class braf_cra_ammo_jungle : braf_cra_ammo_regular {
    _generalMacro = "braf_cra_ammo_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    backpack = "braf_alice_medium_olive_ammo_556";
    uniformClass = "braf_cratenia_Jungle_RolledUp_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_rifleman_jungle.jpg";
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
        "braf_factions_lapa_green",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};
class braf_cra_dmr_jungle : braf_cra_dmr_regular {
    _generalMacro = "braf_cra_dmr_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    uniformClass = "BRAF_Cratenia_Jungle_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_dmr_jungle.jpg";
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
        "braf_factions_fal_hiaf",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_fal_hiaf",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};
class braf_cra_ar_jungle : braf_cra_ar_regular {
    _generalMacro = "braf_cra_ar_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    uniformClass = "braf_cratenia_Jungle_RolledUp_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_ar_jungle.jpg";
    magazines[] = {
        "30Rnd_556x45_Stanag",
        "30Rnd_556x45_Stanag",
        "30Rnd_556x45_Stanag"
    };
    respawnWeapons[] = {
        "braf_factions_colt_lmga4_green",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_colt_lmga4_green",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};
class braf_cra_lat_jungle : braf_cra_lat_regular {
    _generalMacro = "braf_cra_lat_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    uniformClass = "braf_cratenia_Jungle_RolledUp_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_lat_jungle.jpg";
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
        "braf_factions_lapa_green",
        "BRAF_launch_alac",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};
class braf_cra_militia_jungle : braf_cra_militia_regular {
    _generalMacro = "braf_cra_militia_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    uniformClass = "braf_cratenia_Jungle_RolledUp_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_militia_jungle.jpg";
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};
class braf_cra_unarmed_jungle : braf_cra_unarmed_regular {
    _generalMacro = "braf_cra_unarmed_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    scope = 1;
    uniformClass = "braf_cra_unarmed_jungle";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_rifleman_jungle.jpg";
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
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Luva\gloves_tan_co.paa",
        ""
    };
};

//Weapons
class braf_cra_at_jungle : braf_cra_at_regular {
    _generalMacro = "braf_cra_at_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    uniformClass = "braf_cratenia_Jungle_RolledUp_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_at_jungle.jpg";
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green",
    };
    respawnWeapons[] = {
        "braf_factions_lapa_green",
        "braf_Gustav",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};
class braf_cra_aa_jungle : braf_cra_aa_regular {
    _generalMacro = "braf_cra_aa_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    backpack = "braf_alice_medium_olive_ammo_aa_72";
    uniformClass = "BRAF_Cratenia_Jungle_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_aa_jungle.jpg";
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45_red",
        "BRAF_Igla_missile"
    };
    respawnWeapons[] = {
        "braf_factions_lapa_green",
        "BRAF_Igla",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
        "BRAF_ephod_vest",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_orlite_helm_olive",
        "BRAF_ephod_vest",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};
//Statics
class braf_cra_mortar_jungle : braf_cra_mortar_regular {
    _generalMacro = "braf_cra_mortar_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    backpack = "BRAF_B_M252_Gun_Bag";
    uniformClass = "BRAF_Cratenia_Jungle_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_rifleman_jungle.jpg";
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
    };
    respawnWeapons[] = {
        "braf_factions_lapa_green",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};
class braf_cra_mortar_a_jungle : braf_cra_mortar_a_regular {
    _generalMacro = "braf_cra_mortar_a_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    displayName = "$STR_BRAF_Mortar_A";
    backpack = "BRAF_B_M252_Bipod_Bag";
    uniformClass = "braf_cratenia_Jungle_RolledUp_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_rifleman_jungle.jpg";
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
    };
    respawnWeapons[] = {
        "braf_factions_lapa_green",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};
class braf_cra_hmg_jungle : braf_cra_hmg_regular {
    _generalMacro = "braf_cra_hmg_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    backpack = "BRAF_B_M2_Gun_Bag";
    uniformClass = "braf_cratenia_Jungle_RolledUp_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_rifleman_jungle.jpg";
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
    };
    respawnWeapons[] = {
        "braf_factions_lapa_green",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\rolled\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};
class braf_cra_hmg_a_jungle : braf_cra_hmg_a_regular {
    _generalMacro = "braf_cra_hmg_a_jungle";
    editorsubcategory = "BRAF_JUNGLE";
    backpack = "BRAF_B_M2_Tripod_Bag";
    uniformClass = "BRAF_Cratenia_Jungle_uniform";
    editorPreview = "braf\braf_factions\addons\characters\units\editorPreview\braf_cra_rifleman_jungle.jpg";
    magazines[] = {
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "braf_Lapa30Rnd_556x45",
        "SmokeShell",
        "Chemlight_green"
    };
    respawnWeapons[] = {
        "braf_factions_lapa_green",
        "Throw",
        "Put"
    };
    weapons[] = {
        "braf_factions_lapa_green",
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
    hiddenSelections[] = {
        "Camo1", //Top
        "Camo2", //Pants
        "Camo3", //boot
        "Camo4", //Gloves
        //"Camo5",    //Hand
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\top_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "\braf\braf_factions\addons\characters\Uniform\Data\Boot\boot_cratenia_co.paa",
        "",
        ""
    };
};