//--------------------------Boonie Hat----------------------------
//----- HIAF -----
class braf_hiaf_boonie : braf_boonie_hat_lizard {
    displayName = "[HIAF] Boonie Hat, Army Lizard";
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\boonie_hat\hiaf\boonie_tanoa.paa"
    };
    class ItemInfo : braf_boonie_hat_iteminfo {
        hiddenSelectionsTextures[] = {
            "\braf_factions\braf_factions_characters_headgear\data\boonie_hat\hiaf\boonie_tanoa.paa"
        };
    };
};
class braf_hiaf_Mariner_boonie : braf_hiaf_boonie {
    displayName = "[HIAF] Boonie Hat, Marine Lizard";
    hiddenSelectionsTextures[] = {
        "\braf_factions\braf_factions_characters_headgear\data\boonie_hat\hiaf\boonie_hiaf_mariner.paa"
    };
    class ItemInfo : braf_boonie_hat_iteminfo {
        hiddenSelectionsTextures[] = {
            "\braf_factions\braf_factions_characters_headgear\data\boonie_hat\hiaf\boonie_hiaf_mariner.paa"
        };
    };
};