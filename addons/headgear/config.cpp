class CfgPatches {
    class braf_factions_characters_headgear {
        author = "BRAF Team";
        addonRootClass = "braf_characters_army";
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Characters_F_Heads",
            "A3_Characters_F_BLUFOR",
            "A3_Characters_F_Proxies",
            "BRAF_characters_headgear"
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {
            //PASGT
            "braf_hiaf_mp_helmet",
            "braf_hiaf_army_helmet_cover",
            "braf_hiaf_army_helmet_cover_goggles_up",
            "braf_hiaf_army_helmet_cover_goggles_down",
            "braf_hiaf_marine_helmet_cover",
            "braf_hiaf_army_helmet_cover_goggles_up",
            "braf_hiaf_army_helmet_cover_goggles_down",

            //Beret
            "braf_hiaf_army_beret",
            "braf_hiaf_marine_beret",

            //Patrol Cap
            "braf_hiaf_army_PatrolCap",
            "braf_hiaf_marine_PatrolCap",

            //Boonie
            "braf_hiaf_boonie",
            "braf_HIAF_Mariner_boonie"
        };
    };
};

class CfgWeapons {
    class ItemCore;
    class HeadGearItem;
    class Uniform_Base : ItemCore {
    };
    class UniformItem;
    class H_HelmetB;
    class Vest_Camo_Base;
    class V_RebreatherB;
    class NVGoggles;
    class U_B_Wetsuit;
    class Binocular;
    class V_CarrierRigKBT_01_base_F;
    class VestItem;
    class braf_kevlar_iiia_helmet;
    class braf_m1_cover_late_lz;
    class braf_steel_helmet;
    class braf_patrol_cap_iteminfo;
    class braf_boonie_hat_iteminfo;
    class braf_beret_olive;
    class braf_army_patrolcap;
    class braf_boonie_hat_lizard;
    #include "w_hiaf_lwh.hpp"
    #include "w_hiaf_m1.hpp"
    #include "w_hiaf_beret.hpp"
    #include "w_hiaf_patrol_cap.hpp"
    #include "w_hiaf_boonie.hpp"
    #include "w_cratenia_orlite.hpp"
};