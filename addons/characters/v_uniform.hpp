class braf_horizon_regular : braf_army_rifleman_regular_2000 {
    _generalMacro = "braf_horizon_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    scope = 1;
    scopeCurator = 1;
    uniformClass = "braf_horizon_regular_uniform";
    genericNames = "TanoanMen";
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
        "braf_lbv_olive_squadleader",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_beret",
        "braf_lbv_olive_squadleader",
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
        "\BRAF_Factions\braf_factions_characters\uniform\Data\BDU\HIAF\top_co.paa",
        "\BRAF_Factions\braf_factions_characters\uniform\Data\BDU\HIAF\pants_co.paa",
        "\BRAF_Factions\braf_factions_characters\uniform\Data\Boot\boot_co.paa",
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
class braf_horizon_regular_gloves : braf_army_rifleman_regular_2000 {
    _generalMacro = "braf_horizon_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    scope = 1;
    scopeCurator = 1;
    uniformClass = "braf_horizon_regular_gloves_uniform";
    genericNames = "TanoanMen";
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
        "braf_lbv_olive_squadleader",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_beret",
        "braf_lbv_olive_squadleader",
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
class braf_horizon_regular_rolledup : braf_army_tl_regular_2000 {
    _generalMacro = "braf_horizon_regular";
    faction = "BRAF_HIAF";
    editorSubcategory = "BRAF_REGULAR";
    side = 1;
    scope = 1;
    scopeCurator = 1;
    uniformClass = "braf_horizon_regular_gloves_uniform";
    genericNames = "TanoanMen";
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
        "braf_lbv_olive_squadleader",
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[] = {
        "braf_hiaf_army_beret",
        "braf_lbv_olive_squadleader",
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
class braf_horizon_marine : braf_horizon_regular {
    side = 1;
    scope = 1;
    uniformClass = "braf_horizon_marine_uniform";
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
        "\BRAF_Factions\braf_factions_characters\uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\BRAF_Factions\braf_factions_characters\uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\BRAF_Factions\braf_factions_characters\uniform\Data\Boot\boot_co.paa",
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\Marine\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\Marine\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_horizon_marine_gloves : braf_horizon_regular_gloves {
    side = 1;
    scope = 1;
    uniformClass = "braf_horizon_marine_uniform_bottons";
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
        "\BRAF_Factions\braf_factions_characters\uniform\Data\BDU\HIAF\Marine\top_co.paa",
        "\BRAF_Factions\braf_factions_characters\uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\BRAF_Factions\braf_factions_characters\uniform\Data\Boot\boot_co.paa",
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\Marine\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\Marine\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\gloves.rvmat",
        ""
    };
};
class braf_horizon_marine_rolledup : braf_horizon_regular_rolledup {
    side = 1;
    scope = 1;
    uniformClass = "braf_horizon_marine_RolledUp_uniform";
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
        "\BRAF_Factions\braf_factions_characters\uniform\Data\BDU\HIAF\Marine\rolled\top_co.paa",
        "\BRAF_Factions\braf_factions_characters\uniform\Data\BDU\HIAF\Marine\pants_co.paa",
        "\BRAF_Factions\braf_factions_characters\uniform\Data\Boot\boot_co.paa",
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\Marine\rolled\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\HIAF\Marine\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_cratenia_regular : braf_horizon_regular {
    faction = "BRAF_CRATENIA";
    side = 0;
    uniformClass = "braf_cratenia_regular_uniform";
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_cratenia_co.paa",
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_cratenia_regular_gloves : braf_horizon_regular_gloves {
    faction = "BRAF_CRATENIA";
    side = 0;
    uniformClass = "braf_cratenia_regular_uniform_bottons";
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_cratenia_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Luva\gloves_tan_co.paa",
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Luva\gloves.rvmat",
        ""
    };
};
class braf_cratenia_regular_rolledup : braf_army_tl_regular_2000 {
    scope = 1;
    faction = "BRAF_CRATENIA";
    side = 0;
    uniformClass = "braf_cratenia_regular_RolledUp_uniform";
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\rolled\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_cratenia_co.paa",
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_cratenia_jungle : braf_cratenia_regular {
    uniformClass = "BRAF_Cratenia_Jungle_uniform";
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\selva\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_cratenia_co.paa",
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};
class braf_cratenia_jungle_gloves : braf_cratenia_jungle {
    uniformClass = "BRAF_Cratenia_Jungle_gloves_uniform";
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\selva\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_cratenia_co.paa",
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\gloves.rvmat",
        ""
    };
};
class braf_cratenia_jungle_rolledup : braf_cratenia_regular_rolledup {
    uniformClass = "braf_cratenia_Jungle_RolledUp_uniform";
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\selva\rolled\top_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\selva\pants_co.paa",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot_cratenia_co.paa",
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
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\top.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\BDU\Cratenia\pants.rvmat",
        "braf\braf_factions\addons\characters\uniform\Data\Boot\boot.rvmat",
        ""
    };
};