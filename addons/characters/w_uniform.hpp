//-------------------------- BDU Hiaf Army ----------------------------
class braf_army_regular_uniform;
class braf_horizon_regular_uniform : braf_army_regular_uniform {
    scope = 2;
    scopeCurator = 2;
    allowedSlots[] = { 901 };
    displayName = "[HIAF] Battle Dress Uniform, Army Lizard";
    picture = "\BRAF_Factions\braf_factions_characters\Uniform\Data\ui\army_Hiaf_Unifom.paa";
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_horizon_regular";
        containerClass = "Supply50";
        mass = 20;
        hiddenSelections[] = { "camo" };
    };
};
class braf_horizon_regular_gloves_uniform : braf_army_regular_uniform {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[HIAF] Battle Dress Uniform, Army Lizard (Gloves)";
    picture = "\BRAF_Factions\braf_factions_characters\Uniform\Data\ui\army_Hiaf_Unifom.paa";
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_horizon_regular_gloves";
        containerClass = "Supply50";
        mass = 20;
        hiddenSelections[] = { "camo" };
    };
};
class braf_army_regular_rolled_uniform;
class braf_horizon_regular_RolledUp_uniform : braf_army_regular_rolled_uniform {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[HIAF] Battle Dress Uniform, Army Lizard (Rolled)";
    picture = "\BRAF_Factions\braf_factions_characters\Uniform\Data\ui\army_Hiaf_Unifom2.paa";
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_horizon_regular_rolledup";
        containerClass = "Supply50";
        mass = 20;
        hiddenSelections[] = { "camo" };
    };
};
//--------------------------BDU Hiaf Marine----------------------------
class braf_horizon_marine_uniform : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[HIAF] Battle Dress Uniform, Marine Lizard";
    picture = "\BRAF_Factions\braf_factions_characters\Uniform\Data\ui\Marine_Hiaf_Unifom.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_horizon_marine";
        containerClass = "Supply50";
        mass = 20;
        hiddenSelections[] = { "camo" };
    };
};
class braf_horizon_marine_uniform_bottons : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[HIAF] Battle Dress Uniform, Marine Lizard (Gloves)";
    picture = "\BRAF_Factions\braf_factions_characters\Uniform\Data\ui\Marine_Hiaf_Unifom.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_horizon_marine_gloves";
        containerClass = "Supply50";
        mass = 20;
        hiddenSelections[] = { "camo" };
    };
};
class braf_horizon_marine_RolledUp_uniform : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[HIAF] Battle Dress Uniform, Marine Lizard (Rolled)";
    picture = "\BRAF_Factions\braf_factions_characters\Uniform\Data\ui\Marine_Hiaf_Unifom2.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_horizon_marine_rolledup";
        containerClass = "Supply50";
        mass = 20;
        hiddenSelections[] = { "camo" };
    };
};

//--------------------------BDU CRATENIA Army----------------------------
class braf_cratenia_regular_uniform : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[CRA] Battle Dress Uniform, CRAPAT";
    picture = "\BRAF_Factions\braf_factions_characters\Uniform\Data\ui\army_CRATENIA_Unifom.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_cratenia_regular";
        containerClass = "Supply50";
        mass = 20;
        hiddenSelections[] = { "camo" };
    };
};
class braf_cratenia_regular_uniform_bottons : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[CRA] Battle Dress Uniform, CRAPAT (Gloves)";
    picture = "\BRAF_Factions\braf_factions_characters\Uniform\Data\ui\army_CRATENIA_Unifom.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_cratenia_regular_gloves";
        containerClass = "Supply50";
        mass = 20;
        hiddenSelections[] = { "camo" };
    };
};
class braf_cratenia_regular_RolledUp_uniform : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[CRA] Battle Dress Uniform, CRAPAT (Rolled)";
    picture = "\BRAF_Factions\braf_factions_characters\Uniform\Data\ui\army_CRATENIA_Unifom2.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_cratenia_regular_rolledup";
        containerClass = "Supply50";
        mass = 20;
        hiddenSelections[] = { "camo" };
    };
};
class BRAF_Cratenia_Jungle_uniform : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[CRA] Battle Dress Uniform, Jungle CRAPAT";
    picture = "\BRAF_Factions\braf_factions_characters\Uniform\Data\ui\army_CRATENIA_Unifom.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_cratenia_jungle";
        containerClass = "Supply50";
        mass = 20;
        hiddenSelections[] = { "camo" };
    };
};
class BRAF_Cratenia_Jungle_gloves_uniform : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[CRA] Battle Dress Uniform, Jungle CRAPAT (gloves)";
    picture = "\BRAF_Factions\braf_factions_characters\Uniform\Data\ui\army_CRATENIA_Unifom.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_cratenia_jungle_gloves";
        containerClass = "Supply50";
        mass = 20;
        hiddenSelections[] = { "camo" };
    };
};
class braf_cratenia_Jungle_RolledUp_uniform : Uniform_Base {
    scope = 2;
    scopeCurator = 2;
    Author = "BRAF Team";
    allowedSlots[] = { 901 };
    displayName = "[CRA] Battle Dress Uniform, Jungle CRAPAT (Rolled)";
    picture = "\BRAF_Factions\braf_factions_characters\Uniform\Data\ui\army_CRATENIA_Unifom2.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "braf_cratenia_jungle_rolledup";
        containerClass = "Supply50";
        mass = 20;
        hiddenSelections[] = { "camo" };
    };
};