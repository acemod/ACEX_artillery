class CfgVehicles {
    class ThingX;
    class Item_Base_F;
    class NonStrategic;
    class ReammoBox_F;
    class LandVehicle;
    class ACE_RepairItem_Base;
    class StaticWeapon: LandVehicle
    {
        class Turrets
        {
            class MainTurret;
        };
    };
    class StaticMortar: StaticWeapon
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class ViewOptics;
            };
        };
    };
    class StaticHowitzer: StaticMortar{};

    class ACE_M198_F: StaticHowitzer
    {
        scope = 2;
        displayName = "M198 Howitzer";
        model = PATHTOF(M198_Howitzer_F.p3d);

        slingLoadCargoMemoryPoints[] = {"slingload_point_01","slingload_point_02","slingload_point_03","slingload_point_04"};
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                animationSourceBody = "";
                animationSourceGun = "";

                body = "main_turret";
                gun = "main_gun";

                gunBeg = "usti hlavne";        //front
                gunEnd = "konec hlavne";    //back

                turretAxis = "turret_axis";
                gunAxis = "elevation_axis";

                gunnerAction = "Mortar_Gunner";
                gunnergetInAction = "";
                gunnergetOutAction = "";
                weapons[] = {"ACE_155_Howitzer_M198"};
                elevationMode = 1;
                initCamElev = 0;
                minCamElev = -35;
                maxCamElev = 35;
                initElev = 0;
                minTurn = -45;
                maxTurn = +45;
                initTurn = 0;
                cameraDir = "eye";
                discreteDistance[] = {100,200,300,400,500,700,1000,1600,2000,2400,2800};
                discreteDistanceCameraPoint[] = {"eye"};
                discreteDistanceInitIndex = 5;
                turretInfoType = "RscWeaponRangeArtillery";
                gunnerForceOptics = 0;
                memoryPointGunnerOptics = "look";
                gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
                class ViewOptics: ViewOptics
                {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.174;
                    minFov = 0.0077778;
                    maxFov = 0.14;
                    visionMode[] = {"Normal","NVG"};
                };
                minelev = -16;
                maxelev = +63;
                magazines[] = {"1Rnd_ACE_155mm_M982","1Rnd_ACE_155mm_M982","1Rnd_ACE_155mm_M982","1Rnd_ACE_155mm_M982","1Rnd_ACE_155mm_M982"};
            };
        };

        class AnimationSources {
            class open_breach {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class left_leg {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class right_leg {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class lower_wheels {
                source = "user";
                animPeriod = 10;
                initPhase = 0;
            };
            class lever_wheel {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class lever_shift {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class shift_foot {
                source = "user";
                animPeriod = 10;
                initPhase = 0;
            };
            class deploy_support {
                source = "user";
                animPeriod = 3;
                initPhase = 0;
            };
            class front_shackles_rotate {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
            class mid_shackles_rotate {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
            class rear_shackle_left_rotate {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
            class rear_shackle_right_rotate {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
            class hide_base_plate {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
            };
            class hide_left_foot {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
            };
            class hide_right_foot {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
            };
            class left_foot_translate {
                animPeriod = 0;
                initPhase = 0;
                minValue = 0;
                maxValue = 1;
            };
            class move_left_foot {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
                minValue = 0;
                maxValue = 1;
            };
            class right_foot_translate {
                animPeriod = 0;
                initPhase = 0;
                minValue = 0;
                maxValue = 1;
            };
            class move_right_foot {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
                minValue = 0;
                maxValue = 1;
            };

            class hide_jack_handle_left {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class hide_jack_handle_right {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class jack_left {
                source = "user";
                animPeriod = 2.5;
                initPhase = 1;
            };
            class jack_right {
                source = "user";
                animPeriod = 2.5;
                initPhase = 1;
            };

            class elevation{
                animPeriod = 0;
                initPhase = 0;
                minValue = -0.279253;
                maxValue = 1.09956;
            };
            class main_gun {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
                minValue = -0.279253;
                maxValue = 1.09956;
            };
            class traverse{
                animPeriod = 0;
                initPhase = 0;
                minValue = -0.785398;
                maxValue = 0.785398;
            };
            class main_turret {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
                minValue = -0.785398;
                maxValue = 0.785398;
            };

            class muzzle_hide_arty {
                source = "reload";
                weapon = "ACE_155_Howitzer_M198";
            };
            class recoil_source {
                source = "reload";
                weapon = "ACE_155_Howitzer_M198";
            };
        };
        class ACE_Actions {
            class ACE_Hyd_Jack_Left {
                displayName = "Operate";
                distance = 1;
                condition = QUOTE(true);
                statement = "[_target] call acex_artillery_m198_howitzer_fnc_operateHydraulics";
                showDisabled = 0;
                selection = "pos_jack_left";
            };
            class ACE_Hyd_Jack_Right: ACE_Hyd_Jack_Left {
                selection = "pos_jack_right";
            };
            class ACE_Lever_Shift {
                displayName = "Speed Shift";
                distance = 1;
                condition = QUOTE(true);
                statement = QUOTE(true);
                showDisabled = 0;
                selection = "pos_lever_shift";
                class ACE_Lever_Down {
                    displayName = "Down";
                    condition = QUOTE(true);
                    statement = "_target animate ['lever_shift',-1]";
                };
                class ACE_Lever_Off {
                    displayName = "Off";
                    condition = QUOTE(true);
                    statement = "_target animate ['lever_shift',0]";
                };
                class ACE_Lever_Up {
                    displayName = "Up";
                    condition = QUOTE(true);
                    statement = "_target animate ['lever_shift',+1]";
                };
            };
            class ACE_Lever_Wheels {
                displayName = "Wheels";
                distance = 1.5;
                condition = QUOTE(true);
                statement = QUOTE(true);
                showDisabled = 0;
                selection = "pos_lever_wheel";
                class ACE_Lever_Down {
                    displayName = "Down";
                    condition = QUOTE(true);
                    statement = "_target animate ['lever_wheel',-1]";
                };
                class ACE_Lever_Off {
                    displayName = "Off";
                    condition = QUOTE(true);
                    statement = "_target animate ['lever_wheel',0]";
                };
                class ACE_Lever_Up {
                    displayName = "Up";
                    condition = QUOTE(true);
                    statement = "_target animate ['lever_wheel',+1]";
                };
            };
            class ACE_Support_L {
                displayName = "Support";
                selection = "pos_support_l";
                distance = 1.5;
                condition = QUOTE(true);
                statement = QUOTE(true);
                showDisabled = 0;
                class ACE_Support_Up {
                    displayName = "Remove Support";
                    condition = "_target animationPhase 'deploy_support' < 0.5";
                    statement = "_target animate ['deploy_support',1]";
                };
                class ACE_Support_Down{
                    displayName = "Install Support";
                    condition = "_target animationPhase 'deploy_support' > 0.5";
                    statement = "_target animate ['deploy_support',0]";
                };
            };
            class ACE_Shackle_Front_Raise {
                displayName = "Raise Shackle";
                selection = "front_shackle_axis";
                distance = 1.5;
                condition = "_target animationPhase 'front_shackles_rotate' < 0.5";
                statement = "_target animate ['front_shackles_rotate',1]";
                showDisabled = 0;
            };
            class ACE_Shackle_Front_Lower: ACE_Shackle_Front_Raise {
                displayName = "Lower Shackle";
                condition = "_target animationPhase 'front_shackles_rotate' > 0.5";
                statement = "_target animate ['front_shackles_rotate',0]";
            };
            class ACE_Shackle_Middle_Raise: ACE_Shackle_Front_Raise {
                selection = "mid_shackle_axis";
                condition = "_target animationPhase 'mid_shackles_rotate' < 0.5";
                statement = "_target animate ['mid_shackles_rotate',1]";
            };
            class ACE_Shackle_Middle_Lower: ACE_Shackle_Front_Lower {
                selection = "mid_shackle_axis";
                condition = "_target animationPhase 'mid_shackles_rotate' > 0.5";
                statement = "_target animate ['mid_shackles_rotate',0]";
            };
            class ACE_Shackle_Rear_Left_Raise: ACE_Shackle_Front_Raise {
                selection = "rear_shackle_left_axis";
                condition = "_target animationPhase 'rear_shackle_left_rotate' < 0.5";
                statement = "_target animate ['rear_shackle_left_rotate',1]";
            };
            class ACE_Shackle_Rear_L_Lower: ACE_Shackle_Front_Lower {
                selection = "rear_shackle_left_axis";
                condition = "_target animationPhase 'rear_shackle_left_rotate' > 0.5";
                statement = "_target animate ['rear_shackle_left_rotate',0]";
            };
            class ACE_Shackle_Rear_R_Raise: ACE_Shackle_Front_Raise {
                selection = "rear_shackle_right_axis";
                condition = "_target animationPhase 'rear_shackle_right_rotate' < 0.5";
                statement = "_target animate ['rear_shackle_right_rotate',1]";
            };
            class ACE_Shackle_Rear_R_Lower: ACE_Shackle_Front_Lower {
                selection = "rear_shackle_right_axis";
                condition = "_target animationPhase 'rear_shackle_right_rotate' > 0.5";
                statement = "_target animate ['rear_shackle_right_rotate',0]";
            };
            class ACE_Jack_Handle_Detach_L {
                displayName = "Detach Jack";
                selection = "pos_jack_handle_left";
                distance = 1.75;
                condition = QUOTE([ARR_2(_target,[[ARR_3('hide_jack_handle_left',0,0)]])] call FUNC(canDetachPart));
                statement = QUOTE([ARR_4(_target,_player,[[ARR_2('hide_jack_handle_left',1)]],'ACE_M198_Jack_Handle_F')] call FUNC(detachPart));
                showDisabled = 0;
            };
            class ACE_Jack_Handle_Attach_L {
                displayName = "Attach Jack";
                selection = "pos_jack_handle_left";
                distance = 1.75;
                condition = QUOTE([ARR_4(_target,_player,[[ARR_3('hide_jack_handle_left',1,0)]],'ACE_M198_Jack_Handle_F')] call FUNC(canAttachPart));
                statement = QUOTE([ARR_4(_target,_player,[[ARR_2('hide_jack_handle_left',0)]],'ACE_M198_Jack_Handle_F')] call FUNC(attachPart));
                showDisabled = 0;
            };
            class ACE_Jack_Handle_Detach_R {
                displayName = "Detach Jack";
                selection = "pos_jack_handle_right";
                distance = 1.75;
                condition = QUOTE([ARR_2(_target,[[ARR_3('hide_jack_handle_right',0,0)]])] call FUNC(canDetachPart));
                statement = QUOTE([ARR_4(_target,_player,[[ARR_2('hide_jack_handle_right',1)]],'ACE_M198_Jack_Handle_F')] call FUNC(detachPart));
                showDisabled = 0;
            };
            class ACE_Jack_Handle_Attach_R {
                displayName = "Attach Jack";
                selection = "pos_jack_handle_right";
                distance = 1.75;
                condition = QUOTE([ARR_4(_target,_player,[[ARR_3('hide_jack_handle_right',1,0)]],'ACE_M198_Jack_Handle_F')] call FUNC(canAttachPart));
                statement = QUOTE([ARR_4(_target,_player,[[ARR_2('hide_jack_handle_right',0)]],'ACE_M198_Jack_Handle_F')] call FUNC(attachPart));
                showDisabled = 0;
            };
            class ACE_Foot_Detach_L {
                displayName = "Detach Foot";
                selection = "pos_left_foot";
                distance = 1.75;
                condition = QUOTE([ARR_2(_target,[ARR_2([ARR_3('hide_left_foot',0,-1)],[ARR_3('move_left_foot',0,-1)])])] call FUNC(canDetachPart));
                statement = QUOTE([ARR_4(_target,_player,[[ARR_2('hide_left_foot',1)]],'ACE_M198_Foot_F')] call FUNC(detachPart));
                showDisabled = 0;
            };
            class ACE_Foot_Attach_L {
                displayName = "Attach Foot";
                selection = "pos_left_foot";
                distance = 1.75;
                condition = QUOTE([ARR_4(_target,_player,[[ARR_3('hide_left_foot',1,0)]],'ACE_M198_Foot_F')] call FUNC(canAttachPart));
                statement = QUOTE([ARR_4(_target,_player,[[ARR_2('hide_left_foot',0)]],'ACE_M198_Foot_F')] call FUNC(attachPart));
                showDisabled = 0;
            };
            class ACE_Foot_Store_L {
                displayName = "Store Foot";
                selection = "pos_left_foot2";
                distance = 1.75;
                condition = QUOTE([ARR_4(_target,_player,[[ARR_3('hide_left_foot',1,0)]],'ACE_M198_Foot_F')] call FUNC(canAttachPart));
                statement = QUOTE([ARR_4(_target,_player,[ARR_4([ARR_2('move_left_foot',1)],[ARR_2('rotate_left_foot',1)],[ARR_2('rotate_left_foot_2',1)],[ARR_2('hide_left_foot',0)])],'ACE_M198_Foot_F')] call FUNC(attachPart));
                showDisabled = 0;
            };
            class ACE_Foot_UnStore_L {
                displayName = "Detach Foot";
                selection = "pos_left_foot2";
                distance = 1.75;
                condition = QUOTE([ARR_2(_target,[ARR_2([ARR_3('hide_left_foot',0,0)],[ARR_3('move_left_foot',1,0)])])] call FUNC(canDetachPart));
                statement = QUOTE([ARR_4(_target,_player,[ARR_4([ARR_2('move_left_foot',0)],[ARR_2('rotate_left_foot',0)],[ARR_2('rotate_left_foot_2',0)],[ARR_2('hide_left_foot',1)])],'ACE_M198_Foot_F')] call FUNC(detachPart));
                showDisabled = 0;
            };
            class ACE_Foot_Detach_R {
                displayName = "Detach Foot";
                selection = "pos_right_foot";
                distance = 1.75;
                condition = QUOTE([ARR_2(_target,[ARR_2([ARR_3('hide_right_foot',0,-1)],[ARR_3('move_right_foot',0,-1)])])] call FUNC(canDetachPart));
                statement = QUOTE([ARR_4(_target,_player,[[ARR_2('hide_right_foot',1)]],'ACE_M198_Foot_F')] call FUNC(detachPart));
                showDisabled = 0;
            };
            class ACE_Foot_Attach_R {
                displayName = "Attach Foot";
                selection = "pos_right_foot";
                distance = 1.75;
                condition = QUOTE([ARR_4(_target,_player,[[ARR_3('hide_right_foot',1,0)]],'ACE_M198_Foot_F')] call FUNC(canAttachPart));
                statement = QUOTE([ARR_4(_target,_player,[[ARR_2('hide_right_foot',0)]],'ACE_M198_Foot_F')] call FUNC(attachPart));
                showDisabled = 0;
            };
            class ACE_Foot_Store_R {
                displayName = "Store Foot";
                selection = "pos_right_foot2";
                distance = 1.75;
                condition = QUOTE([ARR_4(_target,_player,[[ARR_3('hide_right_foot',1,0)]],'ACE_M198_Foot_F')] call FUNC(canAttachPart));
                statement = QUOTE([ARR_4(_target,_player,[ARR_4([ARR_2('move_right_foot',1)],[ARR_2('rotate_right_foot',1)],[ARR_2('rotate_right_foot_2',1)],[ARR_2('hide_right_foot',0)])],'ACE_M198_Foot_F')] call FUNC(attachPart));
                showDisabled = 0;
            };
            class ACE_Foot_UnStore_R {
                displayName = "Detach Foot";
                selection = "pos_right_foot2";
                distance = 1.75;
                condition = QUOTE([ARR_2(_target,[ARR_2([ARR_3('hide_right_foot',0,0)],[ARR_3('move_right_foot',1,0)])])] call FUNC(canDetachPart));
                statement = QUOTE([ARR_4(_target,_player,[ARR_4([ARR_2('move_right_foot',0)],[ARR_2('rotate_right_foot',0)],[ARR_2('rotate_right_foot_2',0)],[ARR_2('hide_right_foot',1)])],'ACE_M198_Foot_F')] call FUNC(detachPart));
                showDisabled = 0;
            };
        };
    };
    class ACE_M198_Des_F: ACE_M198_F {
        displayName = "M198 Desert";
        hiddenSelections[] = {"camo1","camo2","camo3"};
        hiddenSelectionsTextures[] = {"\z\acex_artillery\addons\m198_howitzer\data\camo1_d_co.paa","\z\acex_artillery\addons\m198_howitzer\data\camo2_d_co.paa","\z\acex_artillery\addons\m198_howitzer\data\camo3_d_co.paa"};
        class ACE_Actions: ACE_Actions {
            class ACE_Foot_Detach_L: ACE_Foot_Detach_L {
                statement = QUOTE([ARR_4(_target,_player,[[ARR_2('hide_left_foot',1)]],'ACE_M198_Foot_Des_F')] call FUNC(detachPart));
            };
            class ACE_Foot_Attach_L: ACE_Foot_Attach_L {
                condition = QUOTE([ARR_4(_target,_player,[[ARR_3('hide_left_foot',1,0)]],'ACE_M198_Foot_Des_F')] call FUNC(canAttachPart));
                statement = QUOTE([ARR_4(_target,_player,[[ARR_2('hide_left_foot',0)]],'ACE_M198_Foot_Des_F')] call FUNC(attachPart));
            };
            class ACE_Foot_Store_L: ACE_Foot_Store_L {
                condition = QUOTE([ARR_4(_target,_player,[[ARR_3('hide_left_foot',1,0)]],'ACE_M198_Foot_Des_F')] call FUNC(canAttachPart));
                statement = QUOTE([ARR_4(_target,_player,[ARR_4([ARR_2('move_left_foot',1)],[ARR_2('rotate_left_foot',1)],[ARR_2('rotate_left_foot_2',1)],[ARR_2('hide_left_foot',0)])],'ACE_M198_Foot_Des_F')] call FUNC(attachPart));
            };
            class ACE_Foot_UnStore_L: ACE_Foot_UnStore_L {
                statement = QUOTE([ARR_4(_target,_player,[ARR_4([ARR_2('move_left_foot',0)],[ARR_2('rotate_left_foot',0)],[ARR_2('rotate_left_foot_2',0)],[ARR_2('hide_left_foot',1)])],'ACE_M198_Foot_Des_F')] call FUNC(detachPart));
            };
            class ACE_Foot_Detach_R: ACE_Foot_Detach_R {
                statement = QUOTE([ARR_4(_target,_player,[[ARR_2('hide_right_foot',1)]],'ACE_M198_Foot_Des_F')] call FUNC(detachPart));
            };
            class ACE_Foot_Attach_R: ACE_Foot_Attach_R {
                condition = QUOTE([ARR_4(_target,_player,[[ARR_3('hide_right_foot',1,0)]],'ACE_M198_Foot_Des_F')] call FUNC(canAttachPart));
                statement = QUOTE([ARR_4(_target,_player,[[ARR_2('hide_right_foot',0)]],'ACE_M198_Foot_Des_F')] call FUNC(attachPart));
            };
            class ACE_Foot_Store_R: ACE_Foot_Store_R {
                condition = QUOTE([ARR_4(_target,_player,[[ARR_3('hide_right_foot',1,0)]],'ACE_M198_Foot_Des_F')] call FUNC(canAttachPart));
                statement = QUOTE([ARR_4(_target,_player,[ARR_4([ARR_2('move_right_foot',1)],[ARR_2('rotate_right_foot',1)],[ARR_2('rotate_right_foot_2',1)],[ARR_2('hide_right_foot',0)])],'ACE_M198_Foot_Des_F')] call FUNC(attachPart));
            };
            class ACE_Foot_UnStore_R: ACE_Foot_UnStore_R {
                statement = QUOTE([ARR_4(_target,_player,[ARR_4([ARR_2('move_right_foot',0)],[ARR_2('rotate_right_foot',0)],[ARR_2('rotate_right_foot_2',0)],[ARR_2('hide_right_foot',1)])],'ACE_M198_Foot_Des_F')] call FUNC(detachPart));
            };
        };
    };
    class ACE_M198_Foot_F: ACE_RepairItem_Base {
        scope = 2;
        displayName = "M198 Howitzer Foot";
        model = PATHTOF(M198_Foot_F.p3d);
        vehicleClass = "Static";

        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0,1,0};
        ace_dragging_dragDirection = 0;
    };
    class ACE_M198_Foot_Des_F: ACE_M198_Foot_F {
        scope = 2;
        displayName = "M198 Howitzer Foot Desert";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\z\acex_artillery\addons\m198_howitzer\data\camo3_d_co.paa"};
    };
    class ACE_M198_Baseplate_F: ACE_RepairItem_Base {
        scope = 2;
        displayName = "M198 Howitzer Baseplate";
        model = PATHTOF(M198_Baseplate_F.p3d);
        vehicleClass = "Static";

        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0,1.3,0};
        ace_dragging_dragDirection = 0;
    };
    class ACE_M198_Baseplate_Des_F: ACE_M198_Baseplate_F {
        scope = 2;
        displayName = "M198 Howitzer Baseplate Desert";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\z\acex_artillery\addons\m198_howitzer\data\camo3_d_co.paa"};
    };
    class ACE_M198_Jack_Handle_F: ThingX {
        scope = 2;
        scopeCurator = 2;
        displayName = "M198 Howitzer Jack Handle";
        author = ECSTRING(common,ACETeam);
        model = PATHTOF(M198_Jack_Handle_F.p3d);
        icon = PATHTOF(data\ui\map_loadingtray_ca.paa);
        picture = PATHTOF(data\ui\loadingtray_equip_ca.paa);
        vehicleClass = "Static";

        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0,1.3,0};
        ace_dragging_carryDirection = 0;
    };
    class ACE_155_LoadingTray_F: ThingX {
        scope = 2;
        scopeCurator = 2;
        displayName = "Loading Tray (155mm Howitzer)";
        author = ECSTRING(common,ACETeam);
        model = PATHTOF(M198_Loading_Tray_F.p3d);
        icon = PATHTOF(data\ui\map_loadingtray_ca.paa);
        picture = PATHTOF(data\ui\loadingtray_equip_ca.paa);
        vehicleClass = "Static";
    };
    class ACE_155_PushRod_F: ThingX {
        scope = 2;
        scopeCurator = 2;
        displayName = "Loading Push-rod (155mm Howitzer)";
        author = ECSTRING(common,ACETeam);
        model = PATHTOF(M198_Push_Rod_F.p3d);
        icon = PATHTOF(data\ui\map_pushrod_ca.paa);
        picture = PATHTOF(data\ui\pushrod_equip_ca.paa);
        vehicleClass = "Static";
    };
};
