params["_unit"];

magazineBlacklist = ["BRAF_Boito_5Rnd_riot","BRAF_Boito_7Rnd_riot"];

_weapon = [
	
	"braf_boito_14_oldstock",
	"braf_boito_14_nostock",
	"braf_boito_20_oldstock",
	"CUP_sgun_M1014",
	"CUP_sgun_M1014_vfg"
];

_currentMagazine = getArray ( configFile >> "CfgWeapons" >> primaryWeapon _unit >> "magazines" );

	//Remove all current weapon magazines
	{
		_unit removeMagazines _x;
	}forEach _currentMagazine;
_definedWeapon = (selectRandom _weapon);
_unit addWeaponGlobal _definedWeapon;

_compatibleMagazines = compatibleMagazines _definedWeapon;
_compatibleMagazines = _compatibleMagazines - magazineBlacklist;

_magazine = (selectRandom _compatibleMagazines);
_unit addMagazines [_magazine, 6];