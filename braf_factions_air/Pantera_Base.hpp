class BRAF_Pantera_K2_HIAF1 : BRAF_Pantera_Base {
    author = "BRAF";
    faction = "BRAF_HIAF";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 0;
    side = 1;
    displayName = "AS-565 Panther K2";
    editorPreview = "BRAF_Factions\braf_factions_air\data\Pantera\ui\BRAF_Pantera_K2_HIAF1.jpg";
    availableForSupportTypes[] = {
        "Drop",
        "Transport"
    };
    typicalCargo[] = { "braf_hiaf_pilot_regular" };
    crew = "braf_hiaf_pilot_regular";
    hiddenSelectionsTextures[] = {
        "braf_factions\braf_factions_air\data\Pantera\camo1\HIAF1_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo2\Camo2_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo3\Camo3_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo4\Camo4_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\Glass\Glass_ca.paa"
    };
    class textureSources {
        class hiaf_01 {
            displayName = "Armée D'Horizon Green";
            textures[] = {
                "braf_factions\braf_factions_air\data\Pantera\camo1\HIAF1_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo2\Camo2_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo3\Camo3_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo4\Camo4_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\Glass\Glass_ca.paa"
            };
        };
        class hiaf_02 {
            displayName = "Armée D'Horizon Camo";
            textures[] = {
                "braf_factions\braf_factions_air\data\Pantera\camo1\HIAF2_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo2\Camo2_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo3\Camo3_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo4\Camo4_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\Glass\Glass_ca.paa"
            };
        };
        class hiaf_03 {
            displayName = "HIAF Marines";
            textures[] = {
                "braf_factions\braf_factions_air\data\Pantera\camo1\HIAF_Navy_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo2\Camo2_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo3\Camo3_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo4\Camo4_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\Glass\Glass_ca.paa"
            };
        };
    };
    class AnimationSources {
        class collisionlightred {
            source = "MarkerLight";
            markerLight = "CollisionRed";
            animPeriod = 0;
            initPhase = 0;
        };
        class collisionlightwhite {
            source = "MarkerLight";
            markerLight = "CollisionWhite";
            animPeriod = 0;
            initPhase = 0;
        };
        class hoist_hide {
            source = "user";
            animPeriod = 0;
            initPhase = 1;
        };
        class Civilian_hide : hoist_hide {
            initPhase = 0;
        };
        class Plate_hide : hoist_hide {
            initPhase = 1;
        };
        class Door_L {
            source = "user";
            animPeriod = 1;
            initPhase = 0;
        };
        class Door_R {
            source = "user";
            animPeriod = 1;
            initPhase = 0;
        };
    };
};
class BRAF_Pantera_K2_HIAF2 : BRAF_Pantera_K2_HIAF1 {
    scope = 2;
    scopeCurator = 2;
    hiddenSelectionsTextures[] = {
        "braf_factions\braf_factions_air\data\Pantera\camo1\HIAF2_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo2\Camo2_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo3\Camo3_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo4\Camo4_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\Glass\Glass_ca.paa"
    };
};
class BRAF_Pantera_K2_HIAF_Navy : BRAF_Pantera_K2_HIAF1 {
    author = "BRAF";
    faction = "BRAF_HIAF";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 0;
    side = 1;
    displayName = "AS-565 Panther K2 Marines";
    editorPreview = "BRAF_Factions\braf_factions_air\data\Pantera\ui\BRAF_Pantera_K2_HIAF_Navy.jpg";
    availableForSupportTypes[] = {
        "Drop",
        "Transport"
    };
    typicalCargo[] = { "braf_hiaf_pilot_marine" };
    crew = "braf_hiaf_pilot_marine";
    canFloat = 1;
    WaterLeakiness = 50;
    hiddenSelectionsTextures[] = {
        "braf_factions\braf_factions_air\data\Pantera\camo1\HIAF_Navy_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo2\Camo2_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo3\Camo3_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo4\Camo4_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\Glass\Glass_ca.paa"
    };
    class AnimationSources {
        class collisionlightred {
            source = "MarkerLight";
            markerLight = "CollisionRed";
            animPeriod = 0;
            initPhase = 0;
        };
        class collisionlightwhite {
            source = "MarkerLight";
            markerLight = "CollisionWhite";
            animPeriod = 0;
            initPhase = 0;
        };
        class hoist_hide {
            source = "user";
            animPeriod = 0;
            initPhase = 1;
        };
        class Civilian_hide : hoist_hide {
            initPhase = 0;
        };
        class Plate_hide : hoist_hide {
            initPhase = 1;
        };
        class Door_L {
            source = "user";
            animPeriod = 1;
            initPhase = 0;
        };
        class Door_R {
            source = "user";
            animPeriod = 1;
            initPhase = 0;
        };
        class EFS_Hide {
            source = "user";
            animPeriod = 0;
            initPhase = 0;
        };
    };
    class UserActions
        {
            class Deploy_Rescue_Seat
            {
                displayname="<t color='#ffaa00'> Deploy Rescue Seat </t>";
                position="hoist_hook_pos";
                showWindow=1;
                radius=20;
                priority=1;
                onlyForPlayer=0;
                condition="this animationphase 'Hoist_Hide' > 0.9 AND (player in crew this) AND this animationphase 'Door_R_1' > 0.9 AND this animationphase 'Civilian_hide' < 0.1";
                statement="this execVM ""braf_SAR\braf_Scripts\DRS.sqf""; this animate ['Hoist_Hide',-0.5]";
            };
            class Hoist_Down: Deploy_Rescue_Seat
            {
                displayname="<t color='#ffaa00'> Extend Cable Hook </t>";
                condition="this animationphase 'Hoist_Hide' < -0.4 AND this animationphase 'Hoist_Hide' > -0.6 AND (player in crew this) AND this animationphase 'Door_R_1' > 0.9";
                statement="this execVM ""braf_SAR\braf_Scripts\hoist_down.sqf""; this animate ['Hoist_Hide',-1]; this say3d ""Winch""";
            };
            class Hoist_Up: Deploy_Rescue_Seat
            {
                displayname="<t color='#ffaa00'> Recover Cable Hook </t>";
                condition="this animationphase 'Hoist_Hide' < -0.9  AND (player in crew this) AND this animationphase 'Door_R_1' > 0.9";
                statement="this execVM ""braf_SAR\braf_Scripts\hoist_up.sqf""; this animate ['Hoist_Hide',-0.5]; this say3d ""Winch""";
            };
            class Recover_Rescue_Seat: Deploy_Rescue_Seat
            {
                displayname="<t color='#ffaa00'> Retrieve Rescue Seat </t>";
                condition="(player in crew this) AND this animationphase 'Door_R_1' > 0.9 AND this animationphase 'Hoist_Hide' < -0.4  AND this animationphase 'Hoist_Hide' > -0.6";
                statement="this execVM ""braf_SAR\braf_Scripts\recover_seat.sqf""; this animate ['Hoist_Hide',1]";
            };
            class Hoist_Cut: Deploy_Rescue_Seat
            {
                displayname="<t color='#b31d00'> Cut Hoist Hook Cable </t>";
                condition="(player in crew this) AND this animationphase 'Door_R_1' > 0.9 AND this animationphase 'Hoist_Hide' < 0";
                statement="this execVM ""braf_SAR\braf_Scripts\hoist_cut.sqf""; this animate ['Hoist_Hide',1]";
            };
            class Open_Door_Left
            {
                displayname="Open Left Door";
                position="door_pos";
                showWindow=1;
                radius=20;
                priority=0;
                onlyForPlayer=0;
                condition="this animationphase 'Door_L_1' < 0.1 AND (player in crew this)";
                statement="this animate ['Door_L_1',1], this animate ['Door_L_2',1], this animate ['Door_L_rot',1], this say3d ""Doors""";
            };
            class Close_Door_Left: Open_Door_Left
            {
                displayname="Close Left Door";
                condition="this animationphase 'Door_L_1' > 0.9 AND (player in crew this)";
                statement="this animate ['Door_L_1',0], this animate ['Door_L_2',0], this animate ['Door_L_rot',0], this say3d ""Doors""";
            };
            class Open_Door_Right: Open_Door_Left
            {
                displayname="Open Right Door";
                condition="this animationphase 'Door_R_1' < 0.1 AND (player in crew this)";
                statement="this animate ['Door_R_1',1], this animate ['Door_R_2',1], this animate ['Door_R_rot',1], this say3d ""Doors""";
            };
            class Close_Door_Right: Open_Door_Left
            {
                displayname="Close Right Door";
                condition="this animationphase 'Door_R_1' > 0.9 AND (player in crew this)";
                statement="this animate ['Door_R_1',0], this animate ['Door_R_2',0], this animate ['Door_R_rot',0], this say3d ""Doors""";
            };
            class Deploy_EFS: Open_Door_Left
            {
                displayname="<t color='#b31d00'> Deploy EFS </t>";
                condition="this animationphase 'EFS_Hide' < 0.1 AND (player in crew this)";
                statement="this animate ['EFS_Hide',1], this say3d ""EFS""";
            };
        };
        class EventHandlers : DefaultEventhandlers {
            //init = "_this execVM """"";
        };
    };
class BRAF_Pantera_K2_PLA1 : BRAF_Pantera_Base {
    author = "BRAF";
    side = 0;
    faction = "OPF_T_F";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 0;
    displayName = "Z-9 Harbin White";
    editorPreview = "BRAF_Factions\braf_factions_air\data\Pantera\ui\BRAF_Pantera_K2_PLA1.jpg";
    availableForSupportTypes[] = {
        "Drop",
        "Transport"
    };
    typicalCargo[] = {
        "O_T_Soldier_F"
    };
    crew = "O_T_Helipilot_F";
    hiddenSelectionsTextures[] = {
        "braf_factions\braf_factions_air\data\Pantera\camo1\PLA1_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo2\Camo2_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo3\Camo3_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo4\Camo4_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\Glass\Glass_ca.paa"
    };
    class textureSources {
        class csat_01 {
            displayName = "Armée D'Horizon Green";
            textures[] = {
                "braf_factions\braf_factions_air\data\Pantera\camo1\PLA1_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo2\Camo2_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo3\Camo3_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo4\Camo4_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\Glass\Glass_ca.paa"
            };
        };
    };
    class AnimationSources {
        class collisionlightred {
            source = "MarkerLight";
            markerLight = "CollisionRed";
            animPeriod = 0;
            initPhase = 0;
        };
        class collisionlightwhite {
            source = "MarkerLight";
            markerLight = "CollisionWhite";
            animPeriod = 0;
            initPhase = 0;
        };
        class hoist_hide {
            source = "user";
            animPeriod = 0;
            initPhase = 1;
        };
        class Civilian_hide : hoist_hide {
            initPhase = 1;
        };
        class Civilian_Unhide : hoist_hide {
            initPhase = 0;
        };
        class Plate_hide : hoist_hide {
            initPhase = 1;
        };
        class Door_L {
            source = "user";
            animPeriod = 1;
            initPhase = 0;
        };
        class Door_R {
            source = "user";
            animPeriod = 1;
            initPhase = 0;
        };
        class EFS_Hide {
            source = "user";
            animPeriod = 1;
            initPhase = 0;
        };
    };
};
class BRAF_Pantera_K2_FFV_PLA1 : BRAF_Pantera_FFV_Base {
    author = "BRAF";
    side = 0;
    faction = "OPF_T_F";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 0;
    displayName = "Z-9 Harbin White FFV";
    editorPreview = "BRAF_Factions\braf_factions_air\data\Pantera\ui\BRAF_Pantera_K2_FFV_PLA1.jpg";
    availableForSupportTypes[] = {
        "Drop",
        "Transport"
    };
    typicalCargo[] = {
        "O_T_Soldier_F"
    };
    crew = "O_T_Helipilot_F";
    hiddenSelectionsTextures[] = {
        "braf_factions\braf_factions_air\data\Pantera\camo1\PLA1_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo2\Camo2_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo3\Camo3_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\camo4\Camo4_co.paa",
        "braf_factions\braf_factions_air\data\Pantera\Glass\Glass_ca.paa"
    };
    class textureSources {
        class csat_01 {
            displayName = "Armée D'Horizon Green";
            textures[] = {
                "braf_factions\braf_factions_air\data\Pantera\camo1\PLA1_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo2\Camo2_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo3\Camo3_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\camo4\Camo4_co.paa",
                "braf_factions\braf_factions_air\data\Pantera\Glass\Glass_ca.paa"
            };
        };
    };
    class AnimationSources {
        class collisionlightred {
            source = "MarkerLight";
            markerLight = "CollisionRed";
            animPeriod = 0;
            initPhase = 0;
        };
        class collisionlightwhite {
            source = "MarkerLight";
            markerLight = "CollisionWhite";
            animPeriod = 0;
            initPhase = 0;
        };
        class hoist_hide {
            source = "user";
            animPeriod = 0;
            initPhase = 1;
        };
        class Civilian_hide : hoist_hide {
            initPhase = 1;
        };
        class Civilian_Unhide : hoist_hide {
            initPhase = 0;
        };
        class SAR_hide : hoist_hide {
            mass = -150;
            initPhase = 1;
        };
        class Plate_hide : hoist_hide {
            initPhase = 1;
        };
        class Door_L {
            source = "user";
            animPeriod = 1;
            initPhase = 1;
        };
        class Door_R {
            source = "user";
            animPeriod = 1;
            initPhase = 1;
        };
    };
};