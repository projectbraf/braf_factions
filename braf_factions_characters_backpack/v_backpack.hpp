class braf_backpack;

//----- HIAF -----
class braf_alice_medium_olive;
class braf_hiaf_alice_medium : braf_alice_medium_olive {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    _generalMacro = "braf_hiaf_alice_medium";
    displayName = "[HIAF] ALICE Medium Pack, woodland";
    hiddenSelections[] = {
        "Alice",
        "Capacete",
        "Rede",
        "Corda",
        "Picareta",
        "Fita",
        "Termico"
    };
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\hiaf\alice_medium_hiaf_co.paa",
        "",
        "",
        "",
        "",
        "",
        ""
    };
};
class braf_hiaf_alice_medium_field : braf_hiaf_alice_medium {
    _generalMacro = "braf_hiaf_alice_medium_field";
    displayName = "[HIAF] ALICE Medium Pack, woodland (Field)";
    hiddenSelections[] = {
        "Alice",
        "Capacete",
        "Rede",
        "Corda",
        "Picareta",
        "Fita",
        "Termico"
    };
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\hiaf\alice_medium_hiaf_co.paa",
        "",
        "",
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\eb\alice_medium_accessory_CO.paa",
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\eb\alice_medium_accessory_CO.paa",
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\hiaf\alice_medium_hiaf_co.paa",
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\eb\alice_medium_accessory_CO.paa"
    };
};
//AI backpacks
class braf_hiaf_alice_medium_medic : braf_alice_medium_olive {
    scope = 1;
    scopeArsenal = 1;
    scopeCurator = 1;
    displayName = "[HIAF] ALICE Medium Pack, olive";
    hiddenSelections[] = {
        "Alice",
        "Capacete",
        "Rede",
        "Corda",
        "Picareta",
        "Fita",
        "Termico"
    };
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\hiaf\alice_medium_hiaf_co.paa",
        "",
        "",
        "",
        "",
        "",
        ""
    };
    mass = 90;
    class TransportItems {
        class _xx_FirstAidKit {
            name = "FirstAidKit";
            count = 5;
        };
        class _xx_MediKit {
            name = "MediKit";
            count = 1;
        };
    };
};
class braf_hiaf_alice_medium_engineer : braf_hiaf_alice_medium_medic {
    displayName = "[HIAF] ALICE Medium Pack, olive";
    hiddenSelections[] = {
        "Alice",
        "Capacete",
        "Rede",
        "Corda",
        "Picareta",
        "Fita",
        "Termico"
    };
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\hiaf\alice_medium_hiaf_co.paa",
        "",
        "",
        "",
        "",
        "",
        ""
    };
    class TransportMagazines {
        class _xx_SatchelCharge_Remote_Mag {
            magazine = "SatchelCharge_Remote_Mag";
            count = 1;
        };
        class _xx_DemoCharge_Remote_Mag {
            magazine = "DemoCharge_Remote_Mag";
            count = 2;
        };
    };
    class TransportItems {
        class _xx_ToolKit {
            name = "ToolKit";
            count = 1;
        };
        class _xx_MineDetector {
            name = "MineDetector";
            count = 1;
        };
    };
};
class braf_hiaf_alice_medium_eod : braf_hiaf_alice_medium_medic {
    displayName = "[HIAF] ALICE Medium Pack, olive";
    hiddenSelections[] = {
        "Alice",
        "Capacete",
        "Rede",
        "Corda",
        "Picareta",
        "Fita",
        "Termico"
    };
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\hiaf\alice_medium_hiaf_co.paa",
        "",
        "",
        "",
        "",
        "",
        ""
    };
    class TransportMagazines {
        class _xx_APERSBoundingMine_Range_Mag {
            magazine = "APERSBoundingMine_Range_Mag";
            count = 3;
        };
        class _xx_ClaymoreDirectionalMine_Remote_Mag {
            magazine = "ClaymoreDirectionalMine_Remote_Mag";
            count = 2;
        };
        class _xx_SLAMDirectionalMine_Wire_Mag {
            magazine = "SLAMDirectionalMine_Wire_Mag";
            count = 2;
        };
        class _xx_Democharge_Remote_Mag {
            magazine = "Democharge_Remote_Mag";
            count = 1;
        };
    };
    class TransportItems {
        class _xx_ToolKit {
            name = "ToolKit";
            count = 1;
        };
        class _xx_MineDetector {
            name = "MineDetector";
            count = 1;
        };
    };
};
class braf_hiaf_alice_medium_ammo_762 : braf_hiaf_alice_medium_medic {
    displayName = "[HIAF] ALICE Medium Pack, olive";
    hiddenSelections[] = {
        "Alice",
        "Capacete",
        "Rede",
        "Corda",
        "Picareta",
        "Fita",
        "Termico"
    };
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\hiaf\alice_medium_hiaf_co.paa",
        "",
        "",
        "",
        "",
        "",
        ""
    };
    class TransportMagazines {
        class _xx_braf_20Rnd_762x51 {
            magazine = "braf_20Rnd_762x51";
            count = 12;
        };
    };
};
class braf_hiaf_alice_medium_ammo_556 : braf_hiaf_alice_medium_medic {
    displayName = "[HIAF] ALICE Medium Pack, olive";
    hiddenSelections[] = {
        "Alice",
        "Capacete",
        "Rede",
        "Corda",
        "Picareta",
        "Fita",
        "Termico"
    };
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\hiaf\alice_medium_hiaf_co.paa",
        "",
        "",
        "",
        "",
        "",
        ""
    };
    class TransportMagazines {
        class _xx_200Rnd_556x45_Box_Red_F {
            magazine = "200Rnd_556x45_Box_Red_F";
            count = 2;
        };
        class _xx_braf_30Rnd_556x45 {
            magazine = "braf_30Rnd_556x45";
            count = 8;
        };
    };
};
class braf_hiaf_alice_medium_ammo_ar_556 : braf_hiaf_alice_medium_medic {
    displayName = "[HIAF] ALICE Medium Pack, olive";
    hiddenSelections[] = {
        "Alice",
        "Capacete",
        "Rede",
        "Corda",
        "Picareta",
        "Fita",
        "Termico"
    };
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\hiaf\alice_medium_hiaf_co.paa",
        "",
        "",
        "",
        "",
        "",
        ""
    };
    class TransportMagazines {
        class _xx_200Rnd_556x45_Box_Red_F {
            magazine = "200Rnd_556x45_Box_Red_F";
            count = 6;
        };
    };
};
class braf_hiaf_alice_medium_ammo_mg_762 : braf_hiaf_alice_medium_medic {
    displayName = "[HIAF] ALICE Medium Pack, olive";
    hiddenSelections[] = {
        "Alice",
        "Capacete",
        "Rede",
        "Corda",
        "Picareta",
        "Fita",
        "Termico"
    };
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\hiaf\alice_medium_hiaf_co.paa",
        "",
        "",
        "",
        "",
        "",
        ""
    };
    class TransportMagazines {
        class _xx_braf_75Rnd_mag58_mag_Tracer_red {
            magazine = "braf_75Rnd_mag58_mag_Tracer_red";
            count = 6;
        };
    };
};
class braf_hiaf_alice_medium_ammo_at_84 : braf_hiaf_alice_medium_medic {
    displayName = "[HIAF] ALICE Medium Pack, olive";
    hiddenSelections[] = {
        "Alice",
        "Capacete",
        "Rede",
        "Corda",
        "Picareta",
        "Fita",
        "Termico"
    };
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\hiaf\alice_medium_hiaf_co.paa",
        "",
        "",
        "",
        "",
        "",
        ""
    };
    class TransportMagazines {
        class _xx_MRAWS_HEAT55_F {
            magazine = "MRAWS_HEAT55_F";
            count = 4;
        };
    };
};
class braf_hiaf_alice_medium_ammo_aa_72 : braf_hiaf_alice_medium_medic {
    displayName = "[HIAF] ALICE Medium Pack, olive";
    hiddenSelections[] = {
        "Alice",
        "Capacete",
        "Rede",
        "Corda",
        "Picareta",
        "Fita",
        "Termico"
    };
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_backpack\alice_medium\data\hiaf\alice_medium_hiaf_co.paa",
        "",
        "",
        "",
        "",
        "",
        ""
    };
    class TransportMagazines {
        class _xx_braf_Igla_missile {
            magazine = "braf_Igla_missile";
            count = 2;
        };
    };
};
// Modular Assault
class braf_modular_assault_olive;
class braf_modular_assault_aaf : braf_modular_assault_olive {
    _generalMacro = "braf_modular_assault_aaf";
    displayName = "$STR_braf_backpack_modular_aaf";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\characters_backpack\modular_assault\mil\main_aaf_CO.paa",
        "braf\braf_factions\addons\characters_backpack\modular_assault\mil\main_aaf_CO.paa"
    };
};
class braf_modular_assault_coyote : braf_modular_assault_olive {
    _generalMacro = "braf_modular_assault_coyote";
    displayName = "$STR_braf_backpack_modular_coyote";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\characters_backpack\modular_assault\mil\main_coyote_CO.paa",
        "braf\braf_factions\addons\characters_backpack\modular_assault\mil\main_coyote_CO.paa"
    };
};
class braf_modular_assault_rg : braf_modular_assault_olive {
    _generalMacro = "braf_modular_assault_rg";
    displayName = "$STR_braf_backpack_modular_rg";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\characters_backpack\modular_assault\mil\main_rg_CO.paa",
        "braf\braf_factions\addons\characters_backpack\modular_assault\mil\main_rg_CO.paa"
    };
};
class braf_modular_assault_tan : braf_modular_assault_olive {
    _generalMacro = "braf_modular_assault_tan";
    displayName = "$STR_braf_backpack_modular_tan";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\characters_backpack\modular_assault\mil\main_tan_CO.paa",
        "braf\braf_factions\addons\characters_backpack\modular_assault\mil\main_tan_CO.paa"
    };
};
class braf_modular_assault_ucp : braf_modular_assault_olive {
    _generalMacro = "braf_modular_assault_ucp";
    displayName = "$STR_braf_backpack_modular_ucp";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\characters_backpack\modular_assault\mil\main_ucp_CO.paa",
        "braf\braf_factions\addons\characters_backpack\modular_assault\mil\main_ucp_CO.paa"
    };
};
class braf_modular_assault_woodland : braf_modular_assault_olive {
    _generalMacro = "braf_modular_assault_wd";
    displayName = "$STR_braf_backpack_modular_woodland";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\characters_backpack\modular_assault\mil\main_wd_CO.paa",
        "braf\braf_factions\addons\characters_backpack\modular_assault\mil\main_wd_CO.paa"
    };
};
class braf_hiaf_modular_assault_medic : braf_modular_assault_woodland {
    displayName = "[FAC] Modular Assault Pack, Woodland";
    scope = 1;
    scopeArsenal = 1;
    scopeCurator = 1;
    class TransportItems {
        class _xx_FirstAidKit {
            name = "FirstAidKit";
            count = 5;
        };
        class _xx_MediKit {
            name = "MediKit";
            count = 1;
        };
    };
};
class braf_hiaf_modular_assault_engineer : braf_modular_assault_woodland {
    displayName = "[FAC] Modular Assault Pack, Woodland";
    scope = 1;
    scopeArsenal = 1;
    scopeCurator = 1;
    class TransportMagazines {
        class _xx_SatchelCharge_Remote_Mag {
            magazine = "SatchelCharge_Remote_Mag";
            count = 1;
        };
        class _xx_DemoCharge_Remote_Mag {
            magazine = "DemoCharge_Remote_Mag";
            count = 2;
        };
    };
    class TransportItems {
        class _xx_ToolKit {
            name = "ToolKit";
            count = 1;
        };
        class _xx_MineDetector {
            name = "MineDetector";
            count = 1;
        };
    };
};
// Modular backpacks p civis
class braf_civilian_backpack_red : braf_modular_assault_olive {
    _generalMacro = "braf_civilian_backpack_red";
    displayName = "$STR_braf_backpack_civilian_backpack_red";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\characters_backpack\modular_assault\civ\main_red_CO.paa",
        ""
    };
    hiddenSelectionsMaterials[] = {
        "braf\braf_factions\addons\characters_backpack\modular_assault\main_civ.rvmat",
        ""
    };
};
class braf_civilian_backpack_blue : braf_civilian_backpack_red {
    _generalMacro = "braf_civilian_backpack_blue";
    displayName = "$STR_braf_backpack_civilian_backpack_blue";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\characters_backpack\modular_assault\civ\main_blue_CO.paa",
        ""
    };
};
class braf_civilian_backpack_black : braf_civilian_backpack_red {
    _generalMacro = "braf_civilian_backpack_black";
    displayName = "$STR_braf_backpack_civilian_backpack_black";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\characters_backpack\modular_assault\civ\main_civil_black_CO.paa",
        ""
    };
};
class braf_civilian_backpack_obama : braf_civilian_backpack_red {
    _generalMacro = "braf_civilian_backpack_obama";
    displayName = "$STR_braf_backpack_civilian_backpack_obama";
    hiddenSelectionsTextures[] = {
        "braf\braf_factions\addons\characters_backpack\modular_assault\civ\main_sonic_CO.paa",
        ""
    };
};
// Radio backpacks
class braf_radio_backpack_olive;
class braf_radio_backpack_crapat : braf_radio_backpack_olive {
    _generalMacro = "braf_radio_backpack_crapat";
    displayName = "[CRA] AN/PRC 160 (CRAPAT)";
    picture = "\BRAF_Factions\braf_factions_characters_backpack\radio_backpack\ui_falcon3_crapat.paa";
    hiddenSelectionsTextures[] = {
        "\BRAF_Factions\braf_factions_characters_backpack\radio_backpack\falcon3mochila_CO_crapat.paa",
        ""
    };
};
class braf_radio_backpack_crapat_alt : braf_radio_backpack_olive {
    _generalMacro = "braf_radio_backpack_crapat";
    displayName = "[CRA] AN/PRC 160 (Alt CRAPAT)";
    picture = "\BRAF_Factions\braf_factions_characters_backpack\radio_backpack\ui_falcon3_crapat2.paa";
    hiddenSelectionsTextures[] = {
        "\BRAF_Factions\braf_factions_characters_backpack\radio_backpack\falcon3mochila_CO_crapat2.paa",
        ""
    };
};