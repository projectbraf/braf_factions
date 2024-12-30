params["_unit"];

magazineBlacklist = [
	"braf_30Rnd_556x45_Blank",
	"CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_ar15",
	"CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15",
	"CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_ar15",
	"CUP_100Rnd_556x45_BetaCMag_ar15",
	"150Rnd_556x45_Drum_Green_Mag_F",
	"150Rnd_556x45_Drum_Mag_F",
	"150Rnd_556x45_Drum_Sand_Mag_F",
	"150Rnd_556x45_Drum_Green_Mag_Tracer_F",
	"150Rnd_556x45_Drum_Mag_Tracer_F",
	"150Rnd_556x45_Drum_Sand_Mag_Tracer_F",
	"braf_20Rnd_762x51_Blank",
	"braf_30Rnd_556x45_HK_festim",
	"braf_sig_556x45_festim"

	 ];

_sniper = [
	"Braf_aglc_scope",
	"braf_factions_aglc_verde_scope",
	"CUP_srifle_M14_DMR",
	"CUP_Weapon_srifle_Remington700_scoped",
	"braf_fal_scope",
	"Braf_md1a1_Scope",
	"Braf_msr_308_scope"

];

_currentMagazine = getArray ( configFile >> "CfgWeapons" >> primaryWeapon _unit >> "magazines" );

	//Remove all current weapon magazines
	{
		_unit removeMagazines _x;
	}forEach _currentMagazine;
_definedWeapon = (selectRandom _sniper);
_unit addWeaponGlobal _definedWeapon;

_compatibleMagazines = _compatibleMagazines - magazineBlacklist;
_compatibleMagazines = compatibleMagazines _definedWeapon;


_magazine = (selectRandom _compatibleMagazines);
_unit addMagazines [_magazine, 6];
