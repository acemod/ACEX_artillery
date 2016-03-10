class CfgVehicles {
	class ThingX;
	class Item_Base_F;
	class NonStrategic;
	class ReammoBox_F;
	class LandVehicle;
	class ACE_RepairItem_Base;
	
	class FAPP_Metal_F: ThingX {
		XEH_ENABLED;
		
		scope = 2;
		scopeCurator = 2;
		displayName = "FAPP Pallet (Metal)";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(FAPP_Metal_F.p3d);
		vehicleClass = "ACE_Arty_System";
	};
	
	class ACE_Wood_Pallet_Small_F: ThingX {
		XEH_ENABLED;
		EGVAR(dragging,canDrag) = 1;
        EGVAR(dragging,dragPosition[]) = {0,1,0};
        EGVAR(dragging,dragDirection) = 0;
		
		scope = 2;
		scopeCurator = 2;
		displayName = "Wooden Pallet (Small)";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(Wood_Pallet_Small_F.p3d);
		vehicleClass = "ACE_Arty_System";
	};
	class ACE_Wood_Pallet_Large_F: ThingX {
		XEH_ENABLED;
        EGVAR(dragging,canDrag) = 1;
        EGVAR(dragging,dragPosition[]) = {0,1,0};
        EGVAR(dragging,dragDirection) = 0;
		
		scope = 2;
		scopeCurator = 2;
		displayName = "Wooden Pallet (Large)";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(Wood_Pallet_Large_F.p3d);
		vehicleClass = "ACE_Arty_System";
	};
	
	class ACE_155_M982_Pallet_F: ThingX {
		XEH_ENABLED;
        EGVAR(dragging,canDrag) = 1;
        EGVAR(dragging,dragPosition[]) = {0,1,0};
        EGVAR(dragging,dragDirection) = 0;
		
		EGVAR(roundCount) = 3;	
		
		scope = 2;
		scopeCurator = 2;
		displayName = "M982 Excalibur Pallet";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(M982_Pallet_F.p3d);
		icon=PATHTOF(m198_howitzer\data\ui\map_pushrod_ca.paa);
		picture=PATHTOF(m198_howitzer\data\ui\pushrod_equip_ca.paa);
		vehicleClass = "ACE_Arty_System";
		
		slingLoadCargoMemoryPoints[] = {"slingload_point_01","slingload_point_02","slingload_point_03","slingload_point_04"};		
		
		class AnimationSources
		{
			class hide_packaging {
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class hide_01: hide_packaging {};
			class hide_02: hide_packaging {};
			class hide_03: hide_packaging {};
		};
		class ACE_Actions {
			class ACE_MainActions {
				displayName = CSTRING(MainAction);
                distance = 4;
                condition = QUOTE(true);
                statement = "";
				class ACE_Unpack_Pallet {
					displayName = "Unpack Pallet";
					// selection = "aimpoint";
					distance = 2;
					condition = "_target animationPhase 'hide_packaging' <= 0";
					statement = "_target animate ['hide_packaging',1]";
					showDisabled = 0;
				};
			};
			class ACE_Unpack_01 {
				displayName = "Get Round";
				selection = "c_01";
				distance = 1.25;
				condition = "(_target animationPhase 'hide_01' <= 0) AND (_target animationPhase 'hide_packaging' == 1)";
				statement = "_target animate ['hide_01',1]";
				showDisabled = 0;
			};
			class ACE_Unpack_02 {
				displayName = "Get Round";
				selection = "c_02";
				distance = 1.25;
				condition = "(_target animationPhase 'hide_02' <= 0) AND (_target animationPhase 'hide_packaging' == 1)";
				statement = "_target animate ['hide_02',1]";
				showDisabled = 0;
			};
			class ACE_Unpack_03 {
				displayName = "Get Round";
				selection = "c_03";
				distance = 1.25;
				condition = "(_target animationPhase 'hide_03' <= 0) AND (_target animationPhase 'hide_packaging' == 1)";
				statement = "_target animate ['hide_03',1]";
				showDisabled = 0;
			};
		};
	};
	class ACE_155_BASE_F: ThingX {
		XEH_ENABLED;
        EGVAR(dragging,canDrag) = 1;
        EGVAR(dragging,dragPosition[]) = {0,1,0};
        EGVAR(dragging,dragDirection) = 0;
		
		EGVAR(dragging,canCarry) = 1;
        EGVAR(dragging,carryPosition[]) = {0,1.2,0};
        EGVAR(dragging,carryDirection) = 0;
		
		scope = 1;
		scopeCurator = 1;
		vehicleClass = "ACE_Arty_System";
		
		class AnimationSources
		{
			class remove_plug_rot {
				source="user";
				animPeriod=3;
				initPhase=0;
			};
			class remove_plug_tra {
				source="user";
				animPeriod=3;
				initPhase=0;
			};
			class hide_plug {
				source="user";
				animPeriod=0.1;
				initPhase=0;
			}
			class hide_driving_band {
				source="user";
				animPeriod = 0;
				initPhase = 1;
			};
			class hide_grommet {
				source="user";
				animPeriod = 0;
				initPhase = 0;
			};
		};
		
		class ACE_Actions {
			class ACE_MainActions {
				displayName = CSTRING(MainAction);
                distance = 4;
                condition = QUOTE(true);
                statement = "";
				class ACE_Remove_Grommet {
					displayName = "Remove Grommet";
					selection = "pos_grommet";
					distance = 2;
					condition = "_target animationPhase 'hide_grommet' <= 0";
					statement = "_target animate ['hide_driving_band',0]; _target animate ['hide_grommet',1]";
					showDisabled = 0;
				};
			};
			class ACE_Remove_Plug {
				displayName = "Remove Lifting Plug";
				selection = "pos_plug";
				distance = 2;
				condition = "_target animationPhase 'remove_plug_rot' <= 0";
				statement = "_target animate ['remove_plug_rot',1], _target animate ['remove_plug_tra',1]";
				showDisabled = 0;
			};
			class ACE_Take_Plug{
				displayName = "Take Lifting Plug";
				selection = "pos_plug";
				distance = 2;
				condition = "(_target animationPhase 'remove_plug_rot' >= 1) AND (_target animationPhase 'hide_plug' <= 0)";
				statement = "_target animate ['hide_plug',1]";
				showDisabled = 0;
			};
		};
	};
	class ACE_155_M107_F: ACE_155_BASE_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "M107 HE";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(M107_HE_F.p3d);
		icon=PATHTOF(m198_howitzer\data\ui\map_pushrod_ca.paa);
		picture=PATHTOF(m198_howitzer\data\ui\pushrod_equip_ca.paa);
	};
	class ACE_155_M483_F: ACE_155_BASE_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "M483 DPICM";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(M483_DPICM_F.p3d);
		icon=PATHTOF(m198_howitzer\data\ui\map_pushrod_ca.paa);
		picture=PATHTOF(m198_howitzer\data\ui\pushrod_equip_ca.paa);
	};
	
	class ACE_155_M982_F: ThingX {
		XEH_ENABLED;
        EGVAR(dragging,canDrag) = 1;
        EGVAR(dragging,dragPosition[]) = {0,1,0};
        EGVAR(dragging,dragDirection) = 0;
		
		EGVAR(dragging,canCarry) = 1;
        EGVAR(dragging,carryPosition[]) = {0,1.2,0};
        EGVAR(dragging,carryDirection) = 0;
		
		scope = 2;
		scopeCurator = 2;
		displayName = "M982 Excalibur";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(M982_Excalibur_F.p3d);
		icon=PATHTOF(m198_howitzer\data\ui\map_pushrod_ca.paa);
		picture=PATHTOF(m198_howitzer\data\ui\pushrod_equip_ca.paa);
		vehicleClass = "ACE_Arty_System";
		
		class AnimationSources
		{
			class hide_band {
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		
		class ACE_Actions {
			class ACE_MainActions {
				displayName = CSTRING(MainAction);
                distance = 4;
                condition = QUOTE(true);
                statement = "";
				class ACE_Remove_Band {
					displayName = "Remove Retaining Band";
					selection = "pos_band";
					distance = 2;
					condition = "_target animationPhase 'hide_band' <= 0";
					statement = "_target animate ['hide_band',1]";
					showDisabled = 0;
				};
			};
		};
	};
};
