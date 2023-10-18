class braf_aglc_base;
class braf_factions_aglc_verde : braf_aglc_base
	{
		_generalMacro="braf_factions_aglc_verde";
		author="BRAF Team";
		scope=2;
		displayName="IMBEL AGLC .308 (Green)";
		picture="\braf\braf_factions\addons\weapons\308_AGLC\ui\aglc_verde.paa";
		hiddenSelectionsTextures[]=
		{
			"braf\braf_factions\addons\weapons\308_AGLC\data\AGLC_VERDE_co.paa"
		};
	};
class braf_factions_aglc_aaf : braf_aglc_base
	{
		_generalMacro="braf_factions_aglc_verde";
		author="BRAF Team";
		scope=2;
		displayName="IMBEL AGLC .308 (AAF)";
		picture="\braf\braf_factions\addons\weapons\308_AGLC\ui\aglc_verde.paa";
		hiddenSelectionsTextures[]=
		{
			"braf\braf_factions\addons\weapons\308_AGLC\data\AGLC_AAF_co.paa"
		};
	};
class braf_factions_aglc_verde_scope : braf_factions_aglc_verde {
		scope=1;
		author="BRAF Team";
		_generalMacro="braf_factions_aglc_verde_scope";
		class LinkedItems
		{
			class LinkedItemsOptic //Attach Mira
			{
				slot = "CowsSlot";
				item = "optic_LRPS";
			};
			class LinkedItemsMuzzle //Attach para o Cano
			{
				slot = "MuzzleSlot";
				item = "braf_msr_silencer";
			};
			class LinkedItemsAcc //Attach Accessorio 
			{
				slot = "PointerSlot";
				item = "";
			};
		};
};
class braf_factions_aglc_aaf_scope : braf_factions_aglc_aaf {
		scope=1;
		_generalMacro="braf_factions_aglc_aaf_scope";
		class LinkedItems
		{
			class LinkedItemsOptic //Attach Mira
			{
				slot = "CowsSlot";
				item = "optic_LRPS";
			};
			class LinkedItemsMuzzle //Attach para o Cano
			{
				slot = "MuzzleSlot";
				item = "braf_msr_silencer";
			};
			class LinkedItemsAcc //Attach Accessorio 
			{
				slot = "PointerSlot";
				item = "";
			};
		};
};