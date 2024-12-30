params["_unit"];

_weapon = [
	"Braf_MT12",
	"Braf_m16a1_carbine_9mm",
	"Braf_Mekanika_URU_v1",
	"CUP_smg_M3A1",
	"CUP_smg_M3A1_blk",
	"CUP_smg_Mac10",
	"CUP_smg_MP5A5_Rail",
	"CUP_smg_MP5A5_Rail_VFG",
	"CUP_smg_MP7",
	"CUP_smg_vityaz",
	"CUP_smg_SA61",
	"CUP_smg_UZI"
];

_currentMagazine = getArray ( configFile >> "CfgWeapons" >> primaryWeapon _unit >> "magazines" );

	//Remove all current weapon magazines
	{
		_unit removeMagazines _x;
	}forEach _currentMagazine;
_definedWeapon = (selectRandom _weapon);
_unit addWeaponGlobal _definedWeapon;

_compatibleMagazines = compatibleMagazines _definedWeapon;

_magazine = (selectRandom _compatibleMagazines);
_unit addMagazines [_magazine, 6];