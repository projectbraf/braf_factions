class Attributes {
	class rank_insignia {
        displayName = "Rank";
        tooltip = "Change the Rank Icon";
        property = "rank_insignia";
        control = "combo";
        expression = "_this setObjectTextureGlobal [12,_value]";
        defaultValue = "getObjectTexture _this select 12";
		class values {
			class none{
                name = "$STR_Rank_None";
                value = "";
                default = 0;
            };
            class private {
                name = "$STR_Rank_Private";
                value = "braf\braf_factions\addons\insignia\ranks\HIAFsoldado_co.paa";
            };
            class corporal {
                name = "$STR_Rank_Corporal";
                value = "braf\braf_factions\addons\insignia\ranks\HIAFcabo_co.paa";
            };
            class sergeant {
                name = "$STR_Rank_3SERGEANT";
                value = "braf\braf_factions\addons\insignia\ranks\HIAF3sarg_co.paa";
            };
            class mastersergeant {
                name = "$STR_Rank_2SERGEANT";
                value = "braf\braf_factions\addons\insignia\ranks\HIAF2sarg_co.paa";
            };
            class staffsergeant {
                name = "$STR_Rank_1SERGEANT";
                value = "braf\braf_factions\addons\insignia\ranks\HIAF1sarg_co.paa";
            };
            class subofficer {
                name = "$STR_Rank_PETTYOFFICER";
                value = "braf\braf_factions\addons\insignia\ranks\HIAFsub_co.paa";
            };
            class 2lieutenant {
                name = "$STR_Rank_2LIEUTENANT";
                value = "braf\braf_factions\addons\insignia\ranks\HIAF2ten_co.paa";
            };
            class 1lieutenant {
                name = "$STR_Rank_1LIEUTENANT";
                value = "braf\braf_factions\addons\insignia\ranks\HIAF1ten_co.paa";
            };
            class captain {
                name = "$STR_Rank_CAPTAIN";
                value = "braf\braf_factions\addons\insignia\ranks\HIAFcap_co.paa";
            };
            class major {
                name = "$STR_Rank_MAJOR";
                value = "braf\braf_factions\addons\insignia\ranks\HIAFmajor_co.paa";
            };
            class lieutenantcolonel {
                name = "$STR_Rank_LIEUTENANTCOLONEL";
                value = "braf\braf_factions\addons\insignia\ranks\HIAFtencoronel_co.paa";
            };
            class colonel {
                name = "$STR_Rank_COLONEL";
                value = "braf\braf_factions\addons\insignia\ranks\HIAFcoronel_co.paa";
            };
            class brigadier {
                name = "$STR_Rank_brigadier";
                value = "braf\braf_factions\addons\insignia\ranks\HIAFbrig_co.paa";
            };
		};
	};
	class branch_insignia {
		displayName = "Branch";
        tooltip = "Change the Branch Icon";
        property = "branch_insignia";
        control = "combo";
        expression = "_this setObjectTextureGlobal [13,_value]";
        defaultValue = "getObjectTexture _this select 13";
		class values {
			class branch_infantry{
                name = "$STR_Branch_INFANTRY";
                value = "braf\braf_factions\addons\insignia\branch\hiaf\inf_co.paa";
            };
            class branch_cavalry{
                name = "$STR_Branch_CAVALRY";
                value = "braf\braf_factions\addons\insignia\branch\hiaf\cav_co.paa";
            };
            class branch_artillery{
                name = "$STR_Branch_ARTILLERY";
                value = "braf\braf_factions\addons\insignia\branch\hiaf\art_co.paa";
            };
            class branch_enginnering{
                name = "$STR_Branch_ENGINNERING";
                value = "braf\braf_factions\addons\insignia\branch\hiaf\eng_co.paa";
            };
			class branch_logistics{
                name = "$STR_Branch_LOGISTICS";
                value = "braf\braf_factions\addons\insignia\branch\hiaf\log_co.paa";
            };
		};
	};
};