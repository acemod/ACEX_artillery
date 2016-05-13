class CfgVehicles {
    class ThingX;
    class Item_Base_F;
    class NonStrategic;

    class Item_Arty_AimingPost: Item_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Aimingpost_Item);
        author = ECSTRING(common,ACETeam);
        vehicleClass = "acex_artillery_System";

        class TransportItems {
            MACRO_ADDITEM(acex_artillery_AimingPost,2);
        };
    };

    class acex_artillery_AimingPost_F: NonStrategic {
        XEH_ENABLED;
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Aimingpost_Name);
        author = ECSTRING(common,ACETeam);
        vehicleClass = "acex_artillery_System";

        model=PATHTOF(arty_aimingpost_F.p3d);
        icon=PATHTOF(data\ui\map_aimingpost_ca.paa);
        picture=PATHTOF(data\ui\aimingpost_equip_ca.paa);

        class AnimationSources
        {
            class move_post_light {
                source = "user";
                animPeriod = 2.00;
                initPhase = 0;
            };
            class show_post_light {
                source = "user";
                animPeriod = 0.5;
                initPhase = 1;
            };
            class light_base {
                animPeriod = 0;
                initPhase = 0;
                minValue = 0;
                maxValue = 2;
            };
            class light_mode {
                source = "light_base";
                animPeriod = 0;
                initPhase = 0;
                minValue = 0;
                maxValue = 2;
            };
        };
        class ACE_Actions {
            class ACE_Aimingpost_Light {
                displayName="Toggle Light";
                distance = 1.25;
                condition = "(_target animationPhase 'show_post_light' == 1)";
                statement = QUOTE([_target] call FUNC(apost_toggle_light));
                showDisabled = 0;
                selection = "pos_light";
            };
            class ACE_Aimingpost_Move {
                displayName="Move Post Light";
                distance = 1.25;
                condition = "(_target animationPhase 'show_post_light' == 1)";
                statement = QUOTE([_target] call FUNC(apost_move_light));
                showDisabled = 0;
                selection = "pos_height";
            };
        };
    };
    class acex_artillery_Collimator_Item: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Collimator_Item);
        author = ECSTRING(common,ACETeam);
        model=PATHTOF(Arty_Collimator_Equip_F.p3d);
        icon=PATHTOF(data\ui\map_collimator_ca.paa);
        picture=PATHTOF(data\ui\collimator_equip_ca.paa);
        vehicleClass = "acex_artillery_System";
        class TransportItems {
            MACRO_ADDITEM(acex_artillery_Collimator,1);
        };
    };
    class acex_artillery_Collimator_F: ThingX {
        XEH_ENABLED;
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Collimator_Name);
        author = ECSTRING(common,ACETeam);
        model=PATHTOF(Arty_Collimator_F.p3d);
        icon=PATHTOF(data\ui\map_collimator_ca.paa);
        picture=PATHTOF(data\ui\collimator_equip_ca.paa);
        vehicleClass = "acex_artillery_System";

        class ACE_Actions {
            class ACE_Collimator_Adjust {
                displayName="Adjust Collimator";
                distance = 1.25;
                condition = "_target == _target";
                statement = QUOTE([_target] call FUNC(collim_adjust_sight));
                showDisabled = 0;
                selection = "action_adjust";
            };
        };

        class AnimationSources {
            class illuminate {
                // Do Not Use In Script - Use 'collimator_illuminate'
                source = "user";
                animPeriod=0;
                initPhase=0;
                minValue=-0;
                maxValue=2;
            };
            class expand {
                // Do Not Use In Script - Use 'collimator_size'
                source = "user";
                animPeriod=0;
                initPhase=0;
                minValue=-0;
                maxValue=1;
            };
            class collimator_illuminate {
                displayName = "Collimator Back-light";
                source = "illuminate";
                animPeriod = 0.01;
                minValue = 0;
                maxValue = 2;
                initPhase = 0;
            };
            class collimator_size {
                displayName = "Collimator Reticule Size";
                source = "expand";
                animPeriod = 1.0;
                initPhase = 0;
                minValue = 0;
                maxValue = 1;
            };
            class collimator_offset {
                displayName = "Collimator Offset";
                source="user";
                animPeriod=0.01;
                initPhase = 0;
                minValue = -1;
                maxValue = 1;
            };
            class collimator_rotation {
                // Animation phase loops through rad -360/+360
                displayName = "Collimator Rotation";
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
                minValue = "-6400";
                maxValue = "6400";
            };
            class collimator_elevation {
                // Animation phase 0-1 Loops through rad -90/+30
                displayName = "Collimator Elevation";
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
                minValue = "-1593";
                maxValue = "531";
            };
            class fold_legs {
                displayName = "Fold Collimator Legs";
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class foot_01 {
                displayName = "Extend Collimator Leg 1";
                source = "user";
                animPeriod = 0;
                initPhase = 0;
            };
            class foot_02: foot_01 {
                displayName = "Extend Collimator Leg 2";
            };
            class foot_03: foot_01 {
                displayName = "Extend Collimator Leg 3";
            };
        };
    };
};
