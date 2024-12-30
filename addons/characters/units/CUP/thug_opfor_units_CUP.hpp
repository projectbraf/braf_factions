class I_G_Soldier_base_F;
class O_G_Soldier_F:I_G_Soldier_base_F
{
  class EventHandlers;
};
class O_G_soldier_M_F:I_G_Soldier_base_F
{
  class EventHandlers;
};
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
  init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;[_this select 0] call braf_factions_fnc_thugswearCUP;[_this select 0] call braf_factions_fnc_thugsequippistolCUP;};[_this select 0] call braf_factions_fnc_thugsequipvestCUP;};";
  };
  skipWhenMissingDependencies = 1;
};



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
  init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;[_this select 0] call braf_factions_fnc_thugswearCUP;[_this select 0] call braf_factions_fnc_thugsequipsniperCUP;[_this select 0] call braf_factions_fnc_thugsequipvestCUP;};";
  };
  skipWhenMissingDependencies = 1;
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
  init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;[_this select 0] call braf_factions_fnc_thugswearCUP;[_this select 0] call braf_factions_fnc_thugsequiprifleCUP;};[_this select 0] call braf_factions_fnc_thugsequipvestCUP;";
  };
  skipWhenMissingDependencies = 1;
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
  init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;[_this select 0] call braf_factions_fnc_thugswearCUP;[_this select 0] call braf_factions_fnc_thugsequipshotgunCUP;};[_this select 0] call braf_factions_fnc_thugsequipvestCUP;";
  };
  skipWhenMissingDependencies = 1;
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
  init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;[_this select 0] call braf_factions_fnc_thugswearCUP;[_this select 0] call braf_factions_fnc_thugsequipsmgCUP;};[_this select 0] call braf_factions_fnc_thugsequipvestCUP;";
  };
  skipWhenMissingDependencies = 1;
};

class braf_factions_thug_biker: O_G_Soldier_F
{
  scope = 2;
  scopeArsenal = 2;
  scopeCurator = 2;
  _generalMacro = "braf_factions_thug_biker";
  displayName = "Thug (Biker)";
  faction = "BRAF_Thugs";
  uniformClass = "U_I_C_Soldier_Bandit_4_F";
  backpack = "";
  weapons[] = {"Braf_MT12", "Throw", "Put"};
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
  init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;[_this select 0] call braf_factions_fnc_thugswearbikerCUP;[_this select 0] call braf_factions_fnc_thugsequippistolCUP;};[_this select 0] call braf_factions_fnc_thugsequipvestCUP;};";
  };
  skipWhenMissingDependencies = 1;
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
  weapons[] = {"Braf_MT12", "CUP_launch_RPG18", "Throw", "Put"};
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
  init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;[_this select 0] call braf_factions_fnc_thugswearCUP;[_this select 0] call braf_factions_fnc_thugsequiprifleCUP;};[_this select 0] call braf_factions_fnc_thugsequipvestCUP;";
  };
  skipWhenMissingDependencies = 1;
};