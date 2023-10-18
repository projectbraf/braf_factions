//------------------------------------- Personagens da Estória -------------------------------------------
class braf_hiaf_boubee_story : braf_hiaf_of_regular {
    _generalMacro = "braf_hiaf_boubee_story";
    displayName = "$STR_braf_HSto_CB";
    editorsubcategory = "BRAF_STORY";
    uniformAccessories[] = {};
    uniformClass = "BRAF_Horizon_regular_uniform";
    respawnWeapons[] = {
        "hgun_ACPC2_F",
        "Binocular",
        "Throw",
        "Put"
    };
    weapons[] = {
        "hgun_ACPC2_F",
        "Binocular",
        "Throw",
        "Put"
    };
    magazines[] = {
        "9Rnd_45ACP_Mag",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade"
    };
    respawnMagazines[] = {
        "9Rnd_45ACP_Mag",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade"

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
        "braf_hiaf_army_Beret",
        "braf_Susp_Y_0",
        "G_Aviator",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_Beret",
        "braf_Susp_Y_0",
        "G_Aviator",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    class EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};[(_this select 0),'boubee'] call braf_fnc_nameonuniform;";
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
};