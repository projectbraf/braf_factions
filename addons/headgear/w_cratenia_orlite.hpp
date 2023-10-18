//--------------------------ORLITE----------------------------
//----- Cratenia -----
class braf_orlite_itemInfo;
class braf_orlite_helm_olive_base;
class braf_orlite_helm_olive : braf_orlite_helm_olive_base {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2; 
    displayName = "[CRA] Orlite, Olive";
    picture = "\braf_factions\braf_factions_characters_headgear\data\orlite\ui\Orlite_verde_ui.paa";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\braf_factions\braf_factions_characters_headgear\data\orlite\cra\verde_orlite_CO.paa" };
    class ItemInfo : braf_orlite_itemInfo {
        hiddenSelections[] = {
            "camo"
        };
        hiddenSelectionsTextures[] = { "\braf_factions\braf_factions_characters_headgear\data\orlite\cra\verde_orlite_CO.paa" };
    };
};
class braf_orlite_helm_tan : braf_orlite_helm_olive {
    displayName = "[CRA] Orlite, Tan";
    picture = "\braf_factions\braf_factions_characters_headgear\data\orlite\ui\Orlite_tan_ui.paa";
    hiddenSelectionsTextures[] = { "\braf_factions\braf_factions_characters_headgear\data\orlite\cra\tan_orlite_CO.paa" };
    class ItemInfo : braf_orlite_itemInfo {
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "\braf_factions\braf_factions_characters_headgear\data\orlite\cra\tan_orlite_CO.paa" };
    };
};
