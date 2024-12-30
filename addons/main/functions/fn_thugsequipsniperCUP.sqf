params["_unit"];

Sniper = [
	"Braf_aglc_scope",
	"braf_factions_aglc_verde_scope",
	"CUP_srifle_M14_DMR",
	"CUP_Weapon_srifle_Remington700_scoped",
	"braf_fal_scope",
	"Braf_md1a1_Scope",
	"Braf_msr_308_scope"

];

_unit addSecondaryWeaponItem (selectRandom Sniper);
_unit [Sniper] call BIS_fnc_compatibleMagazines;
