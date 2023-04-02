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
                value = "BRAF_Factions\braf_factions_insignia\ranks\HIAFsoldado_co.paa";
            };
            class corporal {
                name = "$STR_Rank_Corporal";
                value = "BRAF_Factions\braf_factions_insignia\ranks\HIAFcabo_co.paa";
            };
            class sergeant {
                name = "$STR_Rank_3SERGEANT";
                value = "BRAF_Factions\braf_factions_insignia\ranks\HIAF3sarg_co.paa";
            };
            class mastersergeant {
                name = "$STR_Rank_2SERGEANT";
                value = "BRAF_Factions\braf_factions_insignia\ranks\HIAF2sarg_co.paa";
            };
            class staffsergeant {
                name = "$STR_Rank_1SERGEANT";
                value = "BRAF_Factions\braf_factions_insignia\ranks\HIAF1sarg_co.paa";
            };
            class subofficer {
                name = "$STR_Rank_PETTYOFFICER";
                value = "BRAF_Factions\braf_factions_insignia\ranks\HIAFsub_co.paa";
            };
            class 2lieutenant {
                name = "$STR_Rank_2LIEUTENANT";
                value = "BRAF_Factions\braf_factions_insignia\ranks\HIAF2ten_co.paa";
            };
            class 1lieutenant {
                name = "$STR_Rank_1LIEUTENANT";
                value = "BRAF_Factions\braf_factions_insignia\ranks\HIAF1ten_co.paa";
            };
            class captain {
                name = "$STR_Rank_CAPTAIN";
                value = "BRAF_Factions\braf_factions_insignia\ranks\HIAFcap_co.paa";
            };
            class major {
                name = "$STR_Rank_MAJOR";
                value = "BRAF_Factions\braf_factions_insignia\ranks\HIAFmajor_co.paa";
            };
            class lieutenantcolonel {
                name = "$STR_Rank_LIEUTENANTCOLONEL";
                value = "BRAF_Factions\braf_factions_insignia\ranks\HIAFtencoronel_co.paa";
            };
            class colonel {
                name = "$STR_Rank_COLONEL";
                value = "BRAF_Factions\braf_factions_insignia\ranks\HIAFcoronel_co.paa";
            };
            class brigadier {
                name = "$STR_Rank_brigadier";
                value = "BRAF_Factions\braf_factions_insignia\ranks\HIAFbrig_co.paa";
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
                value = "BRAF_Factions\braf_factions_insignia\branch\hiaf\inf_co.paa";
            };
            class branch_cavalry{
                name = "$STR_Branch_CAVALRY";
                value = "BRAF_Factions\braf_factions_insignia\branch\hiaf\cav_co.paa";
            };
            class branch_artillery{
                name = "$STR_Branch_ARTILLERY";
                value = "BRAF_Factions\braf_factions_insignia\branch\hiaf\art_co.paa";
            };
            class branch_enginnering{
                name = "$STR_Branch_ENGINNERING";
                value = "BRAF_Factions\braf_factions_insignia\branch\hiaf\eng_co.paa";
            };
			class branch_logistics{
                name = "$STR_Branch_LOGISTICS";
                value = "BRAF_Factions\braf_factions_insignia\branch\hiaf\log_co.paa";
            };
		};
	};
};