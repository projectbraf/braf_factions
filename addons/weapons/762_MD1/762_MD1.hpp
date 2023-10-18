class braf_md1;
class braf_factions_md1_hiaf: braf_md1
{
	_generalMacro="braf_factions_md1_hiaf";
	author="BRAF Team";
	scope=2;
	displayName="IMBEL M964 MD1 7.62mm (Green)";
	picture="\braf\braf_factions\addons\weapons\762_FAL\ui\MD1_ui.paa";
	hiddenSelectionsTextures[]=
	{
		"\braf\braf_factions\addons\weapons\762_FAL\Data\parafal_muzle.paa",
		"\braf\braf_factions\addons\weapons\762_FAL\Data\HIAF\handguard_CO.paa",
		"\braf\braf_factions\addons\weapons\762_FAL\Data\parafal_corpo.paa",
		"\braf\braf_factions\addons\weapons\762_FAL\Data\trilho_superior.paa",
		"\braf\braf_factions\addons\weapons\762_FAL\Data\HIAF\stock_CO.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\braf\braf_factions\addons\weapons\762_FAL\Data\FAL_muzzle.rvmat",
		"\braf\braf_factions\addons\weapons\762_FAL\Data\HIAF\FAL_Guardamao.rvmat",
		"\braf\braf_factions\addons\weapons\762_FAL\Data\FAL_corpo.rvmat",
		"\braf\braf_factions\addons\weapons\762_FAL\Data\Trilho_superior.rvmat",
		"\braf\braf_factions\addons\weapons\762_FAL\Data\HIAF\FAL_coronha.rvmat"
	};
};
class braf_factions_md1_hiaf_scope : braf_factions_md1_hiaf
{
	_generalMacro="braf_factions_md1_hiaf_scope";
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