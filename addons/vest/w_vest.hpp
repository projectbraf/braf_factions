//--------------------------Ballistic Vest----------------------------
//----- Cratenia -----
class braf_bullet_vest_base;
class braf_bullet_vest_itemInfo;
class braf_Bullet_vest_cra : braf_bullet_vest_base {
    scope = 2;
	scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "[CRA] Ballistic Vest, CRAPAT";
    picture = "\braf\braf_factions\addons\vest\Data\BulletVest\ui\Bullet_vest_Crapat_ui.paa";
    hiddenSelections[] = {
        "camo"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\vest\Data\BulletVest\Crapat_BulletVest_co.paa"
    };
    class ItemInfo : braf_bullet_vest_itemInfo {
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\vest\Data\BulletVest\Crapat_BulletVest_co.paa"
        };
    };
};

//----- Factions -----
class braf_Bullet_vest_green : braf_Bullet_vest_cra {
    displayName = "Ballistic Vest, Green";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\vest\Data\BulletVest\verde_BulletVest_co.paa"
    };
    class ItemInfo : braf_bullet_vest_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\vest\Data\BulletVest\verde_BulletVest_co.paa"
        };
    };
};
class braf_Bullet_vest_blue : braf_Bullet_vest_cra {
    displayName = "Ballistic Vest, Blue";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\vest\Data\BulletVest\azul_BulletVest_co.paa"
    };
    class ItemInfo : braf_bullet_vest_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\vest\Data\BulletVest\azul_BulletVest_co.paa"
        };
    };
};
class braf_Bullet_vest_wdl : braf_Bullet_vest_cra {
    displayName = "Ballistic Vest, Woodland";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\vest\Data\BulletVest\wdl_BulletVest_co.paa"
    };
    class ItemInfo : braf_bullet_vest_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\vest\Data\BulletVest\wdl_BulletVest_co.paa"
        };
    };
};

//-------------------------- Ephod ----------------------------
//----- Cratenia -----
class braf_ephod_vest_itemInfo;
class braf_ephod_vest_base;
class braf_ephod_vest : braf_ephod_vest_base {
    scope = 2;
	scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "[CRA] Ephod Vest";
    picture = "\braf\braf_factions\addons\vest\Data\ephod\ui\ephod_vest_ui.paa";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\vest\Data\ephod\Camo_co.paa"
    };
    class ItemInfo : braf_ephod_vest_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\vest\Data\ephod\Camo_co.paa"
        };
    };
};

class braf_ephod_vest_flag_ItemInfo;
class braf_ephod_vest_flag_base;
class braf_ephod_vest_flag : braf_ephod_vest_flag_base {
    scope = 2;
	scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "[CRA] Ephod Vest (Flag)";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\vest\Data\ephod\Camo_co.paa"
    };
    class ItemInfo : braf_ephod_vest_flag_ItemInfo {
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\vest\Data\ephod\Camo_co.paa"
        };
    };
};
//--------------------------Ballistic Vest w/ Ephod----------------------------
//----- Cratenia -----
class braf_bullet_ephod_vest_itemInfo;
class braf_bullet_ephod_vest_base;
class braf_ephod_balistic_cra : braf_bullet_ephod_vest_base {
    scope = 2;
	scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "[CRA] Ballistic Vest, CRAPAT (Ephod)";
    picture = "\braf\braf_factions\addons\vest\Data\BulletVest\ui\ephod_bullet_ui.paa";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\vest\Data\ephod\Camo_co.paa",
        "\braf\braf_factions\addons\vest\Data\BulletVest\Crapat_BulletVest_co.paa"
    };
    class ItemInfo : braf_bullet_ephod_vest_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\vest\Data\ephod\Camo_co.paa",
            "\braf\braf_factions\addons\vest\Data\BulletVest\Crapat_BulletVest_co.paa"
        };
    };
};
class braf_bullet_ephod_vest_flag_itemInfo;
class braf_bullet_ephod_vest_flag_base;
class braf_ephod_balistic_cra_flag : braf_bullet_ephod_vest_flag_base {
    scope = 2;
	scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "[CRA] Ballistic Vest, CRAPAT (Ephod, Flag)";
    picture = "\braf\braf_factions\addons\vest\Data\BulletVest\ui\ephod_bullet_ui.paa";
    hiddenSelections[] = {
        "camo",
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\vest\Data\ephod\Camo_co.paa",
        "\braf\braf_factions\addons\vest\Data\BulletVest\Crapat_BulletVest_co.paa"
    };
    class ItemInfo : braf_bullet_ephod_vest_flag_itemInfo {
        hiddenSelections[] = {
            "camo",
            "camo1"
        };
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\vest\Data\ephod\Camo_co.paa",
            "\braf\braf_factions\addons\vest\Data\BulletVest\Crapat_BulletVest_co.paa"
        };
    };
};
//----- Factions -----

class braf_ephod_balistic_black : braf_ephod_balistic_cra {
    displayName = "Ballistic Vest, Black (Ephod)";
    picture = "\braf\braf_factions\addons\vest\Data\BulletVest\ui\ephod_bullet_ui.paa";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\vest\Data\ephod\Camo_co.paa",
        "\braf\braf_factions\addons\vest\Data\BulletVest\preto_BulletVest_co.paa"
    };
    class ItemInfo : braf_bullet_ephod_vest_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\vest\Data\ephod\Camo_co.paa",
            "\braf\braf_factions\addons\vest\Data\BulletVest\preto_BulletVest_co.paa"
        };
    };
};
class braf_ephod_balistic_olive : braf_ephod_balistic_cra {
    displayName = "Ballistic Vest, Olive (Ephod)";
    picture = "\braf\braf_factions\addons\vest\Data\BulletVest\ui\ephod_bullet_ui.paa";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\vest\Data\ephod\Camo_co.paa",
        "\braf\braf_factions\addons\vest\Data\BulletVest\verde_BulletVest_co.paa"
    };
    class ItemInfo : braf_bullet_ephod_vest_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\vest\Data\ephod\Camo_co.paa",
            "\braf\braf_factions\addons\vest\Data\BulletVest\verde_BulletVest_co.paa"
        };
    };
};

//--------------------------Ballistic Vest w/ Ephod----------------------------
//----- EB -----
class braf_bullet_vest_lc2_itemInfo;
class braf_bullet_vest_lc2_base;
class braf_LC2_vest_black : braf_bullet_vest_lc2_base {
    scope = 2;
	scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "[EB] Ballistic Vest, Black (LC-2)";
    picture = "\braf\braf_factions\addons\vest\Data\BulletVest\ui\Bullet_vest_eb_ui.paa";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\vest\Data\BulletVest\preto_BulletVest_co.paa"
    };
    descriptionShort = "Ballistic Vest";
    class ItemInfo : braf_bullet_vest_lc2_itemInfo {
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\vest\Data\BulletVest\preto_BulletVest_co.paa"
        };
    };
};

//--------------------------LBV----------------------------
class braf_lbv_woodland;
class braf_lbv_item;
class braf_lbv_hiaf : braf_lbv_woodland {
    scope = 2;
    displayName = "[HIAF] LBV, Army Lizard";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\vest\data\lbv\hiaf\lbv_hiaf_co.paa",
        "",
        "\braf\braf_factions\addons\vest\Data\lc2\lc2_belt_co.paa"
    };
    class ItemInfo : braf_lbv_item {
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\vest\data\lbv\hiaf\lbv_hiaf_co.paa",
            "",
            "\braf\braf_factions\addons\vest\Data\lc2\lc2_belt_co.paa"
        };
    };
};
class braf_lbv_hiaf_marine : braf_lbv_woodland {
    scope = 2;
    displayName = "[HIAF] LBV, Marine Lizard";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\vest\data\lbv\hiaf\lbv_hiafm_co.paa",
        "",
        "\braf\braf_factions\addons\vest\Data\lc2\lc2_belt_co.paa"
    };
    class ItemInfo : braf_lbv_item {
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\vest\data\lbv\hiaf\lbv_hiafm_co.paa",
            "",
            "\braf\braf_factions\addons\vest\Data\lc2\lc2_belt_co.paa"
        };
    };
};
class braf_lbv_cratenia : braf_lbv_woodland {
    scope = 2;
    displayName = "[CRA] LBV, Army Lizard";
    hiddenSelectionsTextures[] = {
        "\braf\braf_factions\addons\vest\data\lbv\cra\lbv_cra_co.paa",
        "",
        "\braf\braf_factions\addons\vest\Data\lc2\lc2_belt_co.paa"
    };
    class ItemInfo : braf_lbv_item {
        hiddenSelectionsTextures[] = {
            "\braf\braf_factions\addons\vest\data\lbv\cra\lbv_cra_co.paa",
            "",
            "\braf\braf_factions\addons\vest\Data\lc2\lc2_belt_co.paa"
        };
    };
};