params["_unit"];

suits = [
	"U_C_Poloshirt_blue",
	"U_C_Poloshirt_burgundy",
	"U_C_Poloshirt_salmon",
	"U_C_Poloshirt_tricolour",
	"U_BG_Guerilla2_1",
	"U_I_C_Soldier_Bandit_4_F",
	"U_I_C_Soldier_Bandit_1_F",
	"U_I_C_Soldier_Bandit_2_F",
	"U_I_C_Soldier_Bandit_5_F",
	"U_I_C_Soldier_Bandit_3_F",
	"U_I_C_Soldier_Para_4_F",
	"U_C_man_sport_2_F",
	"U_C_Man_casual_5_F",
	"U_C_ArtTShirt_01_v4_F",
	"U_C_Uniform_Farmer_01_F",
	"U_I_L_Uniform_01_tshirt_olive_F",
	"CUP_U_I_GUE_Anorak_03",
	"CUP_U_I_GUE_Anorak_02",
	"CUP_U_I_GUE_Anorak_01",
	"braf_thug_irregular_army_tshirt_black_uniform",
	"CUP_U_I_GUE_Flecktarn3"
	
];

headgears = [
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"H_RacingHelmet_1_black_F",
	"H_RacingHelmet_1_white_F",
	"H_RacingHelmet_1_red_F",
	"H_RacingHelmet_1_orange_F",
	"H_RacingHelmet_1_blue_F"
];

facewears = [
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"G_Aviator",
	"G_Shades_Black",
	"G_Shades_Blue",
	"G_Shades_Green",
	"G_Shades_Red",
	"G_Spectacles",
	"G_Sport_Blackred",
	"G_Squares_Tinted",
	"G_Squares",
	"G_Spectacles_Tinted",
	"G_Bandanna_shades",
	"G_Bandanna_aviator",
	"G_Bandanna_blk",
	"G_Bandanna_CandySkull",
	"G_Bandanna_Skull1",
	"G_Bandanna_Syndikat1",
	"G_Bandanna_Skull2",
	"G_Bandanna_Syndikat2",
	"CUP_G_RUS_Ratnik_Balaclava_Green_2",
	"CUP_G_RUS_Ratnik_Balaclava_Olive_1",
	"CUP_G_PMC_Facewrap_Tropical_Glasses_Ember",
	"CUP_G_Scarf_Face_Grn",
	"CUP_G_Scarf_Face_Red",
	"CUP_G_Scarf_Face_Tan",
	"CUP_G_Oakleys_Embr",
	"CUP_G_TK_RoundGlasses_blk",
	"CUP_FR_NeckScarf",
	"CUP_G_WristWatch",
	"G_EyeProtectors_F"
];
_randomSuit = selectRandom suits;
if (_randomSuit != "") then
{
	_unit forceAddUniform _randomSuit;
}; // IF Statement criado por que sim

_randomHeadgear = selectRandom headgears;
if (_randomHeadgear != "") then
{
	_unit addHeadgear _randomHeadgear;
}; // IF Statement criado para parar com erros no log

_randomFacewears = selectRandom facewears;
if (_randomFacewears != "") then
{
	_unit addGoggles _randomFacewears;
}; // IF Statement criado para parar com erros no log