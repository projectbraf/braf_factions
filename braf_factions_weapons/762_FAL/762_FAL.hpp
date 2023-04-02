class Braf_Fal;
class braf_factions_fal_hiaf : Braf_Fal
{
	_generalMacro="Braf_md1_hiaf";
	author="BRAF Team";
	displayName="IMBEL M964 FAL 7.62mm (Green)";
	picture="\braf_factions\braf_factions_weapons\762_FAL\ui\MD1_ui.paa";
	hiddenSelectionsTextures[]=
	{
		"\braf_factions\braf_factions_weapons\762_FAL\Data\parafal_muzle.paa",
		"\braf_factions\braf_factions_weapons\762_FAL\Data\HIAF\handguard_CO.paa",
		"\braf_factions\braf_factions_weapons\762_FAL\Data\parafal_corpo.paa",
		"\braf_factions\braf_factions_weapons\762_FAL\Data\HIAF\stock_CO.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\braf_factions\braf_factions_weapons\762_FAL\Data\FAL_muzzle.rvmat",
		"\braf_factions\braf_factions_weapons\762_FAL\Data\HIAF\FAL_Guardamao.rvmat",
		"\braf_factions\braf_factions_weapons\762_FAL\Data\FAL_corpo.rvmat",
		"\braf_factions\braf_factions_weapons\762_FAL\Data\HIAF\FAL_coronha.rvmat"
	};
};
class braf_factions_fal_hiaf_scope: braf_factions_fal_hiaf
{
	scope = 1;
	author="BRAF Team";
	_generalMacro="Braf_Fal_hiaf_Scope";
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot="CowsSlot";
			item="braf_FAL_OIP_Scope";
		};
	};
};
