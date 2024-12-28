class O_G_Soldier_F;

class braf_factions_thug_pistol: O_G_Soldier_F
{
  scope = 2;
  scopeArsenal = 2;
  scopeCurator = 2;
  _generalMacro = "braf_factions_thug_pistol";
  displayName = "Thug (Pistol)";
  faction = "BRAF_Thugs";
  uniformClass = "U_I_C_Soldier_Bandit_4_F";
  backpack = "";
  weapons[] = {"hgun_ACPC2_F", "Throw", "Put"};
  magazines[] = {"9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
  items[] = {"FirstAidKit"};
  linkedItems[] = {};
  genericNames = "braf_brazilian_names";
  identityTypes[] = {
    "NoGlasses",
    "LanguageFRE_F",
    "Head_Tanoan"
  };
  class EventHandlers : EventHandlers {
	init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;[_this select 0] call braf_factions_fnc_thugswear;};";
  };
};

class O_G_soldier_M_F;

class braf_factions_thug_marksman: O_G_soldier_M_F
{
  scope = 2;
  scopeArsenal = 2;
  scopeCurator = 2;
  _generalMacro = "braf_factions_thug_marksman";
  displayName = "Thug (Marksman)";
  faction = "BRAF_Thugs";
  uniformClass = "U_I_C_Soldier_Bandit_4_F";
  backpack = "";
  weapons[] = {"Braf_aglc_preto", "Throw", "Put"};
  magazines[] = {"braf_5Rnd_308_Red", "braf_5Rnd_308_Red", "braf_5Rnd_308_Red"};
  items[] = {};
  linkedItems[] = {"optic_LRPS"};
  genericNames = "braf_brazilian_names";
  identityTypes[] = {
    "NoGlasses",
    "LanguageFRE_F",
    "Head_Tanoan"
  };
  class EventHandlers : EventHandlers {
	  init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;[_this select 0] call braf_factions_fnc_thugswear;};";
  };
};

class braf_factions_thug_rifleman: O_G_Soldier_F
{
  scope = 2;
  scopeArsenal = 2;
  scopeCurator = 2;
  _generalMacro = "braf_factions_thug_marksman";
  displayName = "Thug (AKM)";
  faction = "BRAF_Thugs";
  uniformClass = "U_I_C_Soldier_Bandit_4_F";
  backpack = "";
  weapons[] = {"arifle_AKM_F", "Throw", "Put"};
  magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F"};
  items[] = {"FirstAidKit"};
  linkedItems[] = {};
  genericNames = "braf_brazilian_names";
  identityTypes[] = {
    "NoGlasses",
    "LanguageFRE_F",
    "Head_Tanoan"
  };
  class EventHandlers : EventHandlers {
	  init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;[_this select 0] call braf_factions_fnc_thugswear;};";
  };
};

class braf_factions_thug_shotgun: O_G_Soldier_F
{
  scope = 2;
  scopeArsenal = 2;
  scopeCurator = 2;
  _generalMacro = "braf_factions_thug_shotgun";
  displayName = "Thug (Shotgun)";
  faction = "BRAF_Thugs";
  uniformClass = "U_I_C_Soldier_Bandit_4_F";
  backpack = "";
  weapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
  magazines[] = {"2Rnd_12Gauge_Pellets", "2Rnd_12Gauge_Pellets", "2Rnd_12Gauge_Pellets", "2Rnd_12Gauge_Pellets", "2Rnd_12Gauge_Pellets"};
  items[] = {};
  linkedItems[] = {};
  genericNames = "braf_brazilian_names";
  identityTypes[] = {
    "NoGlasses",
    "LanguageFRE_F",
    "Head_Tanoan"
  };
  class EventHandlers : EventHandlers {
	  init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;[_this select 0] call braf_factions_fnc_thugswear;};";
  };
};

class braf_factions_thug_smg: O_G_Soldier_F
{
  scope = 2;
  scopeArsenal = 2;
  scopeCurator = 2;
  _generalMacro = "braf_factions_thug_smg";
  displayName = "Thug (SMG)";
  faction = "BRAF_Thugs";
  uniformClass = "U_I_C_Soldier_Bandit_4_F";
  backpack = "";
  weapons[] = {"Braf_MT12", "Throw", "Put"};
  magazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag"};
  items[] = {"FirstAidKit"};
  linkedItems[] = {};
  genericNames = "braf_brazilian_names";
  identityTypes[] = {
    "NoGlasses",
    "LanguageFRE_F",
    "Head_Tanoan"
  };
  class EventHandlers : EventHandlers {
	  init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;[_this select 0] call braf_factions_fnc_thugswear;};";
  };
};

class braf_factions_thug_aa: O_G_Soldier_F
{
  scope = 2;
  scopeArsenal = 2;
  scopeCurator = 2;
  _generalMacro = "braf_factions_thug_aa";
  displayName = "Thug (AA)";
  faction = "BRAF_Thugs";
  uniformClass = "U_I_C_Soldier_Bandit_4_F";
  backpack = "";
  weapons[] = {"Braf_MT12", "braf_Igla", "Throw", "Put"};
  magazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "braf_Igla_missile"};
  items[] = {"FirstAidKit"};
  linkedItems[] = {};
  genericNames = "braf_brazilian_names";
  identityTypes[] = {
    "NoGlasses",
    "LanguageFRE_F",
    "Head_Tanoan"
  };
  class EventHandlers : EventHandlers {
	  init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;[_this select 0] call braf_factions_fnc_thugswear;};";
  };
};

class braf_factions_thug_at: O_G_Soldier_F
{
  scope = 2;
  scopeArsenal = 2;
  scopeCurator = 2;
  _generalMacro = "braf_factions_thug_at";
  displayName = "Thug (AT)";
  faction = "BRAF_Thugs";
  uniformClass = "U_I_C_Soldier_Bandit_4_F";
  backpack = "";
  weapons[] = {"Braf_MT12", "braf_launch_alac", "Throw", "Put"};
  magazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag"};
  items[] = {"FirstAidKit"};
  linkedItems[] = {};
  genericNames = "braf_brazilian_names";
  identityTypes[] = {
    "NoGlasses",
    "LanguageFRE_F",
    "Head_Tanoan"
  };
  class EventHandlers : EventHandlers {
	  init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;[_this select 0] call braf_factions_fnc_thugswear;};";
  };
};