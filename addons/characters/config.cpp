class CfgPatches
{
    class braf_factions_characters
    {
        author = "BRAF Team";
        requiredAddons[] = {
            "BRAF_characters_army"};
        requiredVersion = 0.1;
        units[] = {
            // HIAF
            "braf_hiaf_of_regular",
            "braf_hiaf_sl_regular",
            "braf_hiaf_tl_regular",
            "braf_hiaf_rifleman_regular",
            "braf_hiaf_riflelight_regular",
            "braf_hiaf_ammo_regular",
            "braf_hiaf_dmr_regular",
            "braf_hiaf_gl_regular",
            "braf_hiaf_mp_regular",
            "braf_hiaf_ar_regular",
            "braf_hiaf_lat_regular",
            "braf_hiaf_at_regular",
            "braf_hiaf_at_a_regular",
            "braf_hiaf_crewman_regular",
            "braf_hiaf_aa_regular",
            "braf_hiaf_medic_regular",
            "braf_hiaf_mortar_regular",
            "braf_hiaf_mortar_a_regular",
            "braf_hiaf_eng_regular",
            "braf_hiaf_hmg_regular",
            "braf_hiaf_hmg_a_regular",
            // HIAF Marine
            "braf_hiaf_of_marine",
            "braf_hiaf_sl_marine",
            "braf_hiaf_tl_marine",
            "braf_hiaf_rifleman_marine",
            "braf_hiaf_ammo_marine",
            "braf_hiaf_dmr_marine",
            "braf_hiaf_gl_marine",
            "braf_hiaf_ar_marine",
            "braf_hiaf_lat_marine",
            "braf_hiaf_crewman_marine",
            "braf_hiaf_aa_marine",
            "braf_hiaf_medic_marine",
            "braf_hiaf_eng_marine",
            "braf_hiaf_pointman_marine",
            // HIAF Commandos
            "braf_hiaf_tl_commando",
            "braf_hiaf_rifleman_commando",
            "braf_hiaf_diver_commando",
            "braf_hiaf_dmr_commando",
            "braf_hiaf_pointman_commando",
            "braf_hiaf_medic_commando",
            "braf_hiaf_eng_commando",
            // HIAF Story
            "braf_hiaf_paco_story",
            "braf_hiaf_boubee_story",
            // Cratenia
            "braf_cra_of_regular",
            "braf_cra_sl_regular",
            "braf_cra_tl_regular",
            "braf_cra_rifleman_regular",
            "braf_cra_riflelight_regular",
            "braf_cra_ammo_regular",
            "braf_cra_dmr_regular",
            "braf_cra_gl_regular",
            "braf_cra_ar_regular",
            "braf_cra_lat_regular",
            "braf_cra_at_regular",
            "braf_cra_at_a_regular",
            "braf_cra_aa_regular",
            "braf_cra_medic_regular",
            "braf_cra_mortar_regular",
            "braf_cra_mortar_a_regular",
            "braf_cra_eng_regular",
            "braf_cra_hmg_regular",
            "braf_cra_hmg_a_regular",
            // Cratenia Jungle
            "braf_cra_of_jungle",
            "braf_cra_sl_jungle",
            "braf_cra_tl_jungle",
            "braf_cra_rifleman_jungle",
            "braf_cra_riflelight_jungle",
            "braf_cra_ammo_jungle",
            "braf_cra_dmr_jungle",
            "braf_cra_gl_jungle",
            "braf_cra_ar_jungle",
            "braf_cra_lat_jungle",
            "braf_cra_at_jungle",
            "braf_cra_at_a_jungle",
            "braf_cra_aa_jungle",
            "braf_cra_medic_jungle",
            "braf_cra_mortar_jungle",
            "braf_cra_mortar_a_jungle",
            "braf_cra_eng_jungle",
            "braf_cra_hmg_jungle",
            "braf_cra_hmg_a_jungle",
            "braf_thug_shirt_black",
            "braf_thug_shirt_blue",
            "braf_thug_shirt_green",
            "braf_thug_shirt_tan",
            "braf_thug_shirt_nike"
        };
        weapons[] = {
            // BDU
            "braf_horizon_regular_uniform",
            "braf_horizon_marine_uniform",
            "braf_cratenia_regular_uniform",
            "braf_cratenia_regular_uniform_bottons",
            "BRAF_Cratenia_Jungle_uniform",

            // BDU Rolled Up
            "braf_horizon_regular_RolledUp_uniform",
            "braf_horizon_marine_RolledUp_uniform",
            "braf_cratenia_regular_RolledUp_uniform",
            "braf_cratenia_Jungle_RolledUp_uniform",

            //T-Shirt
            "braf_thug_irregular_army_tshirt_black_uniform",
            "braf_thug_irregular_army_tshirt_blue_uniform",
            "braf_thug_irregular_army_tshirt_green_uniform",
            "braf_thug_irregular_army_tshirt_tan_uniform",
            "braf_thug_irregular_army_tshirt_nike_uniform"
        };
    };
};
class cfgFactionClasses
{
    class BRAF_HIAF
    {
        displayName = "$STR_BRAF_HIAF";
        priority = 2;
        side = 1;
    };
    class BRAF_CRATENIA
    {
        displayName = "$STR_BRAF_CRATENIA";
        priority = 2;
        side = 2;
    };
    class BRAF_FACTIONS
    {
        displayName = "$STR_BRAF_FAC";
        priority = 2;
        side = 2;
        icon = "";
    };
    class BRAF_ELPB
    {
        displayName = "$STR_BRAF_ELPB";
        priority = 2;
        side = 2;
        icon = "";
    };
    class BRAF_Narcos
    {
        displayName = "Narcos";
        priority = 2;
        side = 2;
    };
    class BRAF_Thugs
    {
        displayName = "Thugs";
        priority = 2;
        side = 2;
    };
};
class CfgEditorSubcategories
{
    class BRAF_REGULAR
    {
        displayName = "$STR_BRAF_REGULAR_2020";
    };
    class BRAF_JUNGLE
    {
        displayName = "$STR_BRAF_JUNGLE_2020";
    };
    class BRAF_MARINE
    {
        displayName = "$STR_BRAF_MARINE_2020";
    };
    class BRAF_STORY
    {
        displayName = "$STR_BRAF_STORY_2020";
    };
    class BRAF_COMMANDO
    {
        displayName = "$STR_BRAF_COMMANDO_2020";
    };
    class BRAF_Thugs_Light
    {
        displayName = "Men (Robber)";
    };
    class BRAF_Thugs_Heavy
    {
        displayName = "Men (Assaulter)";
    };
    class BRAF_Thugs_New_Cangaco
    {
        displayName = "Men (New Cangaço)";
    };
};
class DefaultEventHandlers;
class CfgVehicles
{
    #include "units\v_factions_base.hpp"
    #include "v_uniform.hpp"
    #include "units\v_hiaf_army_2020.hpp"
    // #include "units\v_hiaf_commando_2020.hpp"
    #include "units\v_hiaf_marine_2020.hpp"
    #include "units\v_hiaf_story_2020.hpp"
    #include "units\v_cratenia_2020.hpp"
    #include "units\v_cratenia_jungle_2020.hpp"
    #include "units\thug_opfor_units.hpp"

};
class CfgWeapons
{
    class ItemCore;
    class HeadGearItem;
    class Uniform_Base : ItemCore
    {
    };
    class UniformItem;
    #include "w_uniform.hpp"
};
