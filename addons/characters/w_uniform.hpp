//-------------------------- BDU Hiaf Army ----------------------------
class braf_army_regular_uniform;
class braf_horizon_regular_uniform : braf_army_regular_uniform {
    scope = 2;
    scopeCurator = 2;
    allowedSlots[] = { 901 };
    displayName = "[HIAF] Battle Dress Uniform, Army Lizard";
    picture = "\braf\braf_factions\addons\characters\Uniform\Data\ui\army_Hiaf_Unifom.paa";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_horizon_regular";
        containerClass = "Supply50";
        mass = 20;
    };
};
class braf_horizon_regular_gloves_uniform : braf_army_regular_uniform {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[HIAF] Battle Dress Uniform, Army Lizard (Gloves)";
    picture = "\braf\braf_factions\addons\characters\Uniform\Data\ui\army_Hiaf_Unifom.paa";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_horizon_regular_gloves";
        containerClass = "Supply50";
        mass = 20;
    };
};
class braf_army_regular_rolled_uniform;
class braf_horizon_regular_RolledUp_uniform : braf_army_regular_rolled_uniform {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[HIAF] Battle Dress Uniform, Army Lizard (Rolled)";
    picture = "\braf\braf_factions\addons\characters\Uniform\Data\ui\army_Hiaf_Unifom2.paa";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_horizon_regular_rolledup";
        containerClass = "Supply50";
        mass = 20;
    };
};
//--------------------------BDU Hiaf Marine----------------------------
class braf_horizon_marine_uniform : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[HIAF] Battle Dress Uniform, Marine Lizard";
    picture = "\braf\braf_factions\addons\characters\Uniform\Data\ui\Marine_Hiaf_Unifom.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_horizon_marine";
        containerClass = "Supply50";
        mass = 20;
    };
};
class braf_horizon_marine_uniform_bottons : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[HIAF] Battle Dress Uniform, Marine Lizard (Gloves)";
    picture = "\braf\braf_factions\addons\characters\Uniform\Data\ui\Marine_Hiaf_Unifom.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_horizon_marine_gloves";
        containerClass = "Supply50";
        mass = 20;
    };
};
class braf_horizon_marine_RolledUp_uniform : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[HIAF] Battle Dress Uniform, Marine Lizard (Rolled)";
    picture = "\braf\braf_factions\addons\characters\Uniform\Data\ui\Marine_Hiaf_Unifom2.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_horizon_marine_rolledup";
        containerClass = "Supply50";
        mass = 20;
    };
};

//--------------------------BDU CRATENIA Army----------------------------
class braf_cratenia_regular_uniform : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[CRA] Battle Dress Uniform, CRAPAT";
    picture = "\braf\braf_factions\addons\characters\Uniform\Data\ui\army_CRATENIA_Unifom.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_cratenia_regular";
        containerClass = "Supply50";
        mass = 20;
    };
};
class braf_cratenia_regular_uniform_bottons : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[CRA] Battle Dress Uniform, CRAPAT (Gloves)";
    picture = "\braf\braf_factions\addons\characters\Uniform\Data\ui\army_CRATENIA_Unifom.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_cratenia_regular_gloves";
        containerClass = "Supply50";
        mass = 20;
    };
};
class braf_cratenia_regular_RolledUp_uniform : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[CRA] Battle Dress Uniform, CRAPAT (Rolled)";
    picture = "\braf\braf_factions\addons\characters\Uniform\Data\ui\army_CRATENIA_Unifom2.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_cratenia_regular_rolledup";
        containerClass = "Supply50";
        mass = 20;
    };
};
class BRAF_Cratenia_Jungle_uniform : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[CRA] Battle Dress Uniform, Jungle CRAPAT";
    picture = "\braf\braf_factions\addons\characters\Uniform\Data\ui\army_CRATENIA_Unifom.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_cratenia_jungle";
        containerClass = "Supply50";
        mass = 20;
    };
};
class BRAF_Cratenia_Jungle_gloves_uniform : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[CRA] Battle Dress Uniform, Jungle CRAPAT (gloves)";
    picture = "\braf\braf_factions\addons\characters\Uniform\Data\ui\army_CRATENIA_Unifom.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_cratenia_jungle_gloves";
        containerClass = "Supply50";
        mass = 20;
    };
};
class braf_cratenia_Jungle_RolledUp_uniform : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[CRA] Battle Dress Uniform, Jungle CRAPAT (Rolled)";
    picture = "\braf\braf_factions\addons\characters\Uniform\Data\ui\army_CRATENIA_Unifom2.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_cratenia_jungle_rolledup";
        containerClass = "Supply50";
        mass = 20;
    };
};

//--------------------------Shirt Thugs----------------------------
class braf_army_airborne_tshirt_uniform;
class braf_thug_irregular_army_tshirt_black_uniform : braf_army_airborne_tshirt_uniform {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";

    displayName = "[Thug] Black T-Shirt";
    hiddenSelections[] = { "Camo1"};
    hiddenSelectionsTextures[] = { "braf\braf_factions\addons\characters\uniform\Data\Camiseta\camo_black_co.paa" };
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_thug_shirt_black";
        containerClass = "Supply50";
        mass = 20;
    };
};
class braf_thug_irregular_army_tshirt_blue_uniform : braf_army_airborne_tshirt_uniform {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";

    displayName = "[Thug] Blue T-Shirt";
    hiddenSelections[] = { "Camo1"};
    hiddenSelectionsTextures[] = { "braf\braf_factions\addons\characters\uniform\Data\Camiseta\camo_blue_co.paa" };
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_thug_shirt_blue";
        containerClass = "Supply50";
        mass = 20;
    };
};
class braf_thug_irregular_army_tshirt_green_uniform : braf_army_airborne_tshirt_uniform {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";

    displayName = "[Thug] Green T-Shirt";
    hiddenSelections[] = { "Camo1"};
    hiddenSelectionsTextures[] = { "braf\braf_factions\addons\characters\uniform\Data\Camiseta\camo_green_co.paa" };
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_thug_shirt_green";
        containerClass = "Supply50";
        mass = 20;
    };
};
class braf_thug_irregular_army_tshirt_tan_uniform : braf_army_airborne_tshirt_uniform {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";

    displayName = "[Thug] Tan T-Shirt";
    hiddenSelections[] = { "Camo1"};
    hiddenSelectionsTextures[] = { "braf\braf_factions\addons\characters\uniform\Data\Camiseta\camo_tan_co.paa" };
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_thug_shirt_tan";
        containerClass = "Supply50";
        mass = 20;
    };
};
class braf_thug_irregular_army_tshirt_nike_uniform : braf_army_airborne_tshirt_uniform {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";

    displayName = "[Thug] Nike T-Shirt";
    hiddenSelections[] = { "Camo1"};
    hiddenSelectionsTextures[] = { "braf\braf_factions\addons\characters\uniform\Data\Camiseta\camo_nike_co.paa" };
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_thug_shirt_nike";
        containerClass = "Supply50";
        mass = 20;
    };
};