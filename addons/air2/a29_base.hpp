
// Factions Textures

// Afghanistan
class braf_A29_canopy_Afghan: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Afghan_co.paa"
	};
};
class braf_A29B_Afghan: BRAF_A29B
{
	_generalmacro="BRAF_A29B_Afghan";
	scope=2;
	scopeCurator=2;
	side="0";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'Afghanistan Air Force'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - Afghanistan Air Force";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_Afghan";
	};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
	typicalcargo[]={""};
  hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Afghan_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_Gray_co.paa"
	};
	class TextureSources
	{
		class A29_Afghan
		{
			displayName="Afghanistan Air Force Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\Afghan_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_Gray_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_Afghan",1
	};
};
// Angola
class braf_A29_canopy_Angola: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Angola_co.paa"
	};
};
class braf_A29B_Angola: BRAF_A29B
{
	_generalmacro="BRAF_A29B_Angola";
	scope=2;
	scopeCurator=2;
	side="2";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'Angola'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - Angola";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_Angola";
	};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
  hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Angola_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_Angola_co.paa"
	};
	class TextureSources
	{
		class A29_Angola
		{
			displayName="Angola Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\Angola_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_Angola_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_Angola",1
	};
};
// Chile
class braf_A29_canopy_Chile1: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Chile1_co.paa"
	};
};
class braf_A29B_Chile1: BRAF_A29B
{
	_generalmacro="BRAF_A29B_Chile1";
	scope=2;
	scopeCurator=2;
	side="2";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'Chile Gray'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - Chile Gray";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_Chile1";
	};
  hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
  hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Chile1_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_Gray_co.paa"
	};
	class TextureSources
	{
		class A29_Chile1
		{
			displayName="Chile Gray Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\Chile1_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_Gray_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_Chile1",1
	};
};
// Colombia
class braf_A29_canopy_Colombia: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Colombia_co.paa"
	};
};
class braf_A29B_Colombia: BRAF_A29B
{
	_generalmacro="BRAF_A29B_Colombia";
	scope=2;
	scopeCurator=2;
	side="2";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'Colombia'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - Colombia";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_Colombia";
	};
  hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
  hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Colombia_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_Colombia_co.paa"
	};
	class TextureSources
	{
		class A29_Colombia
		{
			displayName="Colombia Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\Colombia_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_Colombia_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_Colombia",1
	};
};
// Dominican Republic
class braf_A29_canopy_Dominicana: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Dominicana_co.paa"
	};
};
class braf_A29B_Dominicana: BRAF_A29B
{
	_generalmacro="BRAF_A29B_Dominicana";
	scope=2;
	scopeCurator=2;
	side="2";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'Dominican Republic'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - Dominican Republic";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_Dominicana";
	};
  hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
  hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Dominicana_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_Dominicana_co.paa"
	};
	class TextureSources
	{
		class A29_Dominicana
		{
			displayName="Dominican Republic Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\Dominicana_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_Dominicana_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_Dominicana",1
	};
};
// Ecuador
class braf_A29_canopy_Equador: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Equador_co.paa"
	};
};
class braf_A29B_Equador: BRAF_A29B
{
	_generalmacro="BRAF_A29B_Equador";
	scope=2;
	scopeCurator=2;
	side="2";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'Ecuador'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - Ecuador";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_Equador";
	};
  hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
  hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Equador_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_Equador_co.paa"
	};
	class TextureSources
	{
		class A29_Equador
		{
			displayName="Ecuador Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\Equador_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_Equador_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_Equador",1
	};
};
// HIAF
class braf_A29_canopy_HIAF1: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\HIAF1_co.paa"
	};
};
class braf_A29B_HIAF1: BRAF_A29B
{
	_generalmacro="BRAF_A29B_HIAF1";
	scope=2;
	scopeCurator=2;
	side="1";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'HIAF1'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - HIAF1";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_HIAF1";
	};
  hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
  hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\HIAF1_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_HIAF1_co.paa"
	};
	class TextureSources
	{
		class A29_HIAF1
		{
			displayName="HIAF1 Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\HIAF1_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_HIAF1_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_HIAF1",1
	};
};
class braf_A29_canopy_HIAF2: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\HIAF2_co.paa"
	};
};
class braf_A29B_HIAF2: BRAF_A29B
{
	_generalmacro="BRAF_A29B_HIAF2";
	scope=2;
	scopeCurator=2;
	side="1";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'HIAF2'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - HIAF2";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_HIAF2";
	};
  hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
  hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\HIAF2_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_HIAF2_co.paa"
	};
	class TextureSources
	{
		class A29_HIAF2
		{
			displayName="HIAF2 Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\HIAF2_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_HIAF2_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_HIAF2",1
	};
};
// Lebanon
class braf_A29_canopy_Libano: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Libano_co.paa"
	};
};
class braf_A29B_Libano: BRAF_A29B
{
	_generalmacro="BRAF_A29B_Libano";
	scope=2;
	scopeCurator=2;
	side="2";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'Lebanon'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - Lebanon";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_Libano";
	};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
  hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Libano_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_Libano_co.paa"
	};
	class TextureSources
	{
		class A29_Libano
		{
			displayName="Lebanon Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\Libano_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_Libano_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_Libano",1
	};
};
// Mali
class braf_A29_canopy_Mali: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Mali_co.paa"
	};
};
class braf_A29B_Mali: BRAF_A29B
{
	_generalmacro="BRAF_A29B_Mali";
	scope=2;
	scopeCurator=2;
	side="2";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'Mali'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - Mali";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_Mali";
	};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Mali_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_Nigeria1_co.paa"
	};
	class TextureSources
	{
		class A29_Mali
		{
			displayName="Mali Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\Mali_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_Nigeria1_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_Mali",1
	};
};
// Mauritania
class braf_A29_canopy_Mauritania: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Mauritania_co.paa"
	};
};
class braf_A29B_Mauritania: BRAF_A29B
{
	_generalmacro="BRAF_A29B_Mauritania";
	scope=2;
	scopeCurator=2;
	side="2";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'Mauritania'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - Mauritania";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_Mauritania";
	};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
    hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Mauritania_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_Mauritania_co.paa"
	};
	class TextureSources
	{
		class A29_Mauritania
		{
			displayName="Mauritania Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\Mauritania_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_Mauritania_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_Mauritania",1
	};
};
// Nigeria
class braf_A29_canopy_Nigeria1: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Nigeria1_co.paa"
	};
};
class braf_A29B_Nigeria1: BRAF_A29B
{
	_generalmacro="BRAF_A29B_Nigeria1";
	scope=2;
	scopeCurator=2;
	side="2";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'Nigeria Tan'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - Nigeria1";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_Nigeria Tan";
	};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
    hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Nigeria1_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_Nigeria1_co.paa"
	};
	class TextureSources
	{
		class A29_Nigeria1
		{
			displayName="Nigeria Tan Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\Nigeria1_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_Nigeria1_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_Nigeria1",1
	};
};
class braf_A29_canopy_Nigeria2: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Nigeria2_co.paa"
	};
};
class braf_A29B_Nigeria2: BRAF_A29B
{
	_generalmacro="BRAF_A29B_Nigeria2";
	scope=2;
	scopeCurator=2;
	side="2";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'Nigeria Green'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - Nigeria Green";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_Nigeria2";
	};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
    hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Nigeria2_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_Nigeria2_co.paa"
	};
	class TextureSources
	{
		class A29_Nigeria2
		{
			displayName="Nigeria Green Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\Nigeria2_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_Nigeria2_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_Nigeria2",1
	};
};
// Philippines
class braf_A29_canopy_Philippines: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Philippines_co.paa"
	};
};
class braf_A29B_Philippines: BRAF_A29B
{
	_generalmacro="BRAF_A29B_Philippines";
	scope=2;
	scopeCurator=2;
	side="2";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'Philippines'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - Philippines";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_Philippines";
	};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
    hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\Philippines_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_Philippines_co.paa"
	};
	class TextureSources
	{
		class A29_Philippines
		{
			displayName="Philippines Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\Philippines_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_Philippines_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_Philippines",1
	};
};
// USAF
class braf_A29_canopy_USAF: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\USAF_co.paa"
	};
};
class braf_A29B_USAF: BRAF_A29B
{
	_generalmacro="BRAF_A29B_USAF";
	scope=2;
	scopeCurator=2;
	side="1";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'USAF'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - USAF";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_USAF";
	};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
    hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\USAF_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_USAF_co.paa"
	};
	class TextureSources
	{
		class A29_USAF
		{
			displayName="USAF Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\USAF_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_USAF_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_USAF",1
	};
};
class braf_A29_canopy_USAFSOC: braf_A29_canopy
{
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\USAFSOC_co.paa"
	};
};
class braf_A29B_USAFSOC: BRAF_A29B
{
	_generalmacro="BRAF_A29B_USAFSOC";
	scope=2;
	scopeCurator=2;
	side="1";
	forceInGarage=1;
	faction="BRAF_FACTIONS";
	displayName="A-29B Super Tucano 'USAFSOC'";
	//editorPreview="\braf\braf_insignia\editorpreview\air2\BRAF_A29B.jpg";
	class Armory
	{
		description="A-29B Super Tucano - USAFSOC";
	};
	class EjectionSystem: EjectionSystem
	{
		CanopyClass="braf_A29_canopy_USAFSOC";
	};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"armor"
	};
    hiddenSelectionsTextures[]=
	{
		"braf\braf_factions\addons\air2\data\USAFSOC_co.paa",
		"braf\braf_factions\addons\air2\data\camo2_co.paa",
		"braf\braf_factions\addons\air2\data\extras\Extras_USAFSOC_co.paa"
	};
	class TextureSources
	{
		class A29_USAF
		{
			displayName="USAFSOC Tandem Seat";
			author="BRAF Team";
			factions[]=
			{
				"BRAF_FAB"
			};
			textures[]=
			{
				"braf\braf_factions\addons\air2\data\USAFSOC_co.paa",
				"braf\braf_factions\addons\air2\data\camo2_co.paa",
				"braf\braf_factions\addons\air2\data\extras\Extras_USAFSOC_co.paa"
			};
		};
	};
	textureList[]=
	{
		"A29_USAFSOC",1
	};
};