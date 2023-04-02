class CfgPatches {
    class braf_factions_insignia {
        author = "BRAF Team";
        requiredAddons[] = {
            "BRAF_characters_headgear"
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {
        };
    };
};
class CfgMarkers {
    class flag_BRA;
    class flag_cra : flag_BRA {
	    name="$str_flag_cratenia";
	    icon="\BRAF_Factions\braf_factions_insignia\Flag\markercratenia.paa";
	    texture="\BRAF_Factions\braf_factions_insignia\Flag\markercratenia.paa";
    };
};