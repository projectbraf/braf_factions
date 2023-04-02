class O_APC_Wheeled_02_rcws_v2_F;
class braf_factions_cratenia_armored_apc : O_APC_Wheeled_02_rcws_v2_F {
    _generalMacro = "braf_factions_cratenia_armored_apc";
    scope = 2;
    scopeCurator = 2;
    side = 0;
    author = "BRAF Team";
    faction = "BRAF_CRATENIA";
    displayName = "Antenor V3";
	crew="braf_cra_rifleman_regular";
	typicalCargo[]=
	{
		"braf_cra_rifleman_regular"
	};
    class TransportBackpacks {};
    class TransportItems {
        class _xx_FirstAidKit {
            count = 4;
            name = "FirstAidKit";
        };
        class _xx_Toolkit {
            count = 1;
            name = "Toolkit";
        };
    };
    //class TransportWeapons {};
    //class TransportMagazines {};
};