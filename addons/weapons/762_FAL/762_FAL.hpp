class braf_Fal;
class braf_factions_fal_hiaf : braf_Fal
{
	_generalMacro="braf_md1_hiaf";
	author="BRAF Team";
	displayName="IMBEL M964 FAL 7.62mm (Green)";
	picture="\braf\braf_factions\addons\weapons\762_FAL\ui\MD1_ui.paa";
	hiddenSelectionsTextures[]=
	{
		"\braf\braf_factions\addons\weapons\762_FAL\Data\parafal_muzle.paa",
		"\braf\braf_factions\addons\weapons\762_FAL\Data\HIAF\handguard_CO.paa",
		"\braf\braf_factions\addons\weapons\762_FAL\Data\parafal_corpo.paa",
		"\braf\braf_factions\addons\weapons\762_FAL\Data\HIAF\stock_CO.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\braf\braf_factions\addons\weapons\762_FAL\Data\FAL_muzzle.rvmat",
		"\braf\braf_factions\addons\weapons\762_FAL\Data\HIAF\FAL_Guardamao.rvmat",
		"\braf\braf_factions\addons\weapons\762_FAL\Data\FAL_corpo.rvmat",
		"\braf\braf_factions\addons\weapons\762_FAL\Data\HIAF\FAL_coronha.rvmat"
	};
};
class braf_factions_fal_hiaf_scope: braf_factions_fal_hiaf
{
	scope = 1;
	author="BRAF Team";
	_generalMacro="braf_factions_fal_hiaf_scope";
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot="CowsSlot";
			item="braf_FAL_OIP_Scope";
		};
	};
};
