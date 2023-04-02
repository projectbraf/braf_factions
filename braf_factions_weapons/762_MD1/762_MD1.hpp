class braf_md1;
class braf_factions_md1_hiaf: braf_md1
{
	_generalMacro="Braf_md1_hiaf";
	author="BRAF Team";
	scope=2;
	displayName="IMBEL M964 MD1 7.62mm (Green)";
	picture="\braf_factions\braf_factions_weapons\762_FAL\ui\MD1_ui.paa";
	hiddenSelectionsTextures[]=
	{
		"\braf_factions\braf_factions_weapons\762_FAL\Data\parafal_muzle.paa",
		"\braf_factions\braf_factions_weapons\762_FAL\Data\HIAF\handguard_CO.paa",
		"\braf_factions\braf_factions_weapons\762_FAL\Data\parafal_corpo.paa",
		"\braf_factions\braf_factions_weapons\762_FAL\Data\trilho_superior.paa",
		"\braf_factions\braf_factions_weapons\762_FAL\Data\HIAF\stock_CO.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\braf_factions\braf_factions_weapons\762_FAL\Data\FAL_muzzle.rvmat",
		"\braf_factions\braf_factions_weapons\762_FAL\Data\HIAF\FAL_Guardamao.rvmat",
		"\braf_factions\braf_factions_weapons\762_FAL\Data\FAL_corpo.rvmat",
		"\braf_factions\braf_factions_weapons\762_FAL\Data\Trilho_superior.rvmat",
		"\braf_factions\braf_factions_weapons\762_FAL\Data\HIAF\FAL_coronha.rvmat"
	};
};
class braf_factions_md1_hiaf_scope : braf_factions_md1_hiaf
{
	_generalMacro="Braf_md1_hiaf_Scope";
	author="BRAF Team";
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot="CowsSlot";
			item="optic_SOS";
		};
		class LinkedItemsAcc
		{
			slot="PointerSlot";
			item="acc_flashlight";
		};
	};
};