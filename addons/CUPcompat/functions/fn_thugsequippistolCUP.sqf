params["_unit"];

_pistol = [
	"hgun_ACPC2_F",
	"hgun_Rook40_F",
	"hgun_P07_blk_F",
	"braf_imbel_m973",
	"braf_PT92",
	"CUP_hgun_Browning_HP",
	"CUP_hgun_CZ75",
	"CUP_hgun_Compact",
	"CUP_hgun_Phantom",
	"CUP_hgun_Deagle",
	"CUP_hgun_Glock17_blk",
	"CUP_hgun_M17_Black",
	"CUP_hgun_Colt1911",
	"CUP_hgun_M9",
	"CUP_hgun_M9A1",
	"CUP_hgun_P30L_Match_blk",
	"CUP_hgun_SWM327MP",
	"CUP_hgun_TaurusTracker455",
	"CUP_hgun_TEC9",
	"CUP_hgun_TT"

];
_currentMagazine = getArray ( configFile >> "CfgWeapons" >> primaryWeapon _unit >> "magazines" );

	//Remove all current weapon magazines
	{
		_unit removeMagazines _x;
	}forEach _currentMagazine;
_definedWeapon = (selectRandom _pistol);
_unit addWeaponGlobal _definedWeapon;

_compatibleMagazines = compatibleMagazines _definedWeapon;

_magazine = (selectRandom _compatibleMagazines);
_unit addMagazines [_magazine, 6];

