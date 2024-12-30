
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



_weapon = [
	"Braf_m16a1_carbine_9mm",
	"Braf_m16a1_carbine",
	"Braf_m16a1e1",
	"braf_m16a2_mod",
	"Braf_m4a1",
	"braf_hk33A3",
	"braf_hk33",
	"braf_HK416_short",
	"braf_HK417",
	"Braf_Fal",
	"Braf_md1",
	"Braf_md1_Grip",
	"Braf_md1a1",
	"Braf_md1a1_Grip",
	"Braf_ParaFal",
	"braf_MD97LC",
	"Braf_Lapa",
	"braf_factions_lapa_Desert",
	"braf_factions_lapa_green",
	"Braf_Lapa",
	"braf_factions_md1_hiaf",
	"braf_factions_fal_hiaf",
	"CUP_arifle_ACR_blk_556",
	"CUP_arifle_AK47_Early",
	"CUP_arifle_AK12_black",
	"CUP_arifle_AK74M",
	"CUP_arifle_AK74",
	"CUP_arifle_AKM",
	"CUP_arifle_AKMS_Early",
	"CUP_arifle_AK47",
	"CUP_arifle_AKS_top_rail",
	"CUP_arifle_AKS74",
	"CUP_arifle_AKS74U",
	"CUP_arifle_FNFAL5060_railed",
	"CUP_arifle_FNFAL5060_railed_woodland",
	"CUP_arifle_FNFAL5061",
	"CUP_arifle_FNFAL5061_wooden",
	"CUP_arifle_FNFAL_OSW",
	"CUP_arifle_Gewehr1",
	"CUP_arifle_G3A3_ris_black",
	"CUP_arifle_G3A3_ris_vfg",
	"CUP_arifle_G3A3_ris_vfg_black",
	"CUP_arifle_G3A3_modern_ris",
	"CUP_arifle_G3A3_modern_ris_black",
	"CUP_arifle_Galil_SAR_black",
	"CUP_arifle_HK416_CQB_Black",
	"CUP_arifle_M4A1_black",
	"CUP_arifle_M4A3_black",
	"CUP_arifle_Sa58s",
	"CUP_arifle_SR3M_Vikhr",
	"CUP_arifle_xm29_ke_blk"
];

_currentMagazine = getArray ( configFile >> "CfgWeapons" >> primaryWeapon _unit >> "magazines" );

	//Remove all current weapon magazines
	{
		_unit removeMagazines _x;
	}forEach _currentMagazine;
_definedWeapon = (selectRandom _weapon);
_unit addWeaponGlobal _definedWeapon;

_compatibleMagazines = compatibleMagazines _definedWeapon;
_compatibleMagazines = _compatibleMagazines - magazineBlacklist
_magazine = (selectRandom _compatibleMagazines);
_unit addMagazines [_magazine, 6];