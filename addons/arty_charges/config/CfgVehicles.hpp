class CfgVehicles {
	class ThingX;
	class Item_Base_F;
	class NonStrategic;
	class ReammoBox_F;
	class LandVehicle;
	class MRAP_03_hmg_base_F;

	class ACE_MACS_M231_Charge_F: ThingX {
		scope = 2;
		scopeCurator = 2;
		displayName = "MACS M231 Charge";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(macs_charge_m231_F.p3d);
		icon="iconObject_1x1";
		picture="\A3\Weapons_F\Data\placeholder_co.paa";

		vehicleClass = "ACE_Arty_System";
		editorCategory = "EdCat_ACE_Arty_System";
		editorSubcategory = "EdSubcat_ACE_Arty_Ammunition";
		
		class AnimationSources {
			class charge_base{
				initPhase = 1;
				minValue = 1;
				maxValue = 4;
			};
			class charge_size {
				source = "charge_base";
				animPeriod = 0;
				initPhase = 1;
				minValue = 1;
				maxValue = 4;
			};
		};
	};
	class ACE_MACS_M232_Charge_F: ThingX {
		scope = 2;
    	scopeCurator = 2;
		displayName = "MACS M232 Charge";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(macs_charge_m232_F.p3d);
		icon="iconObject_1x1";
		picture="\A3\Weapons_F\Data\placeholder_co.paa";
		
		vehicleClass = "ACE_Arty_System";
		editorCategory = "EdCat_ACE_Arty_System";
		editorSubcategory = "EdSubcat_ACE_Arty_Ammunition";

		class AnimationSources {
			class charge_base{
				initPhase = 1;
				minValue = 1;
				maxValue = 5;
			};
			class charge_size {
				source = "charge_base";
				animPeriod = 0;
				initPhase = 1;
				minValue = 1;
				maxValue = 5;
			};
		};
	};

	class ACE_MACS_M231_Sleeve_F: ThingX {
		scope = 2;
        scopeCurator = 2;
		displayName = "MACS M231 Charge Sleeve";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(macs_sleeve_m231_F.p3d);
		icon="";
		picture="";
		
		vehicleClass = "ACE_Arty_System";
		editorCategory = "EdCat_ACE_Arty_System";
		editorSubcategory = "EdSubcat_ACE_Arty_Ammunition";
	};
	class ACE_MACS_M232_Sleeve_F: ThingX {
		scope = 2;
        scopeCurator = 2;
		displayName = "MACS M232 Charge Sleeve";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(macs_sleeve_m232_F.p3d);
		icon="";
		picture="";
		
		vehicleClass = "ACE_Arty_System";
		editorCategory = "EdCat_ACE_Arty_System";
		editorSubcategory = "EdSubcat_ACE_Arty_Ammunition";
	};
	class ACE_MACS_M231_Pallet_F: ThingX {
		XEH_ENABLED;
		scope = 2;
        scopeCurator = 2;
		displayName = "MACS M231 Supply Pallet";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(macs_pallet_m231_F.p3d);
		
		vehicleClass = "ACE_Arty_System";
		editorCategory = "EdCat_ACE_Arty_System";
		editorSubcategory = "EdSubcat_ACE_Arty_Ammunition";
		
		slingLoadCargoMemoryPoints[] = {"slingload_point_01","slingload_point_02","slingload_point_03","slingload_point_04"};
		
		class AnimationSources {
			class open_01_base{
				initPhase = 0;
				minValue = 0;
				maxValue = 1;
			};
			class open_02_base: open_01_base{};
			class open_03_base: open_01_base{};
			class open_04_base: open_01_base{};
			class open_05_base: open_01_base{};
			class open_06_base: open_01_base{};
			
			class open_01 {
				source = "open_01_base";
				animPeriod = 0;
				initPhase = 0;
				minValue = 0;
				maxValue = 1;
			};
			class open_02: open_01 { source = "open_02_base"; };
			class open_03: open_01 { source = "open_03_base"; };
			class open_04: open_01 { source = "open_04_base"; };
			class open_05: open_01 { source = "open_05_base"; };
			class open_06: open_01 { source = "open_06_base"; };
		};
		
		class ACE_Actions {
			class ACE_Open_01 {
				displayName="Open Tube";
				distance = 1.50;
				condition = "(_target animationPhase 'open_01' == 0)";
				statement = QUOTE([ARR_2(_target,'01')] call FUNC(openTube));
				showDisabled = 0;
				selection = "action_01";
			};
			class ACE_Open_02 {
				displayName="Open Tube";
				distance = 1.50;
				condition = "(_target animationPhase 'open_02' == 0)";
				statement = QUOTE([ARR_2(_target,'02')] call FUNC(openTube));
				showDisabled = 0;
				selection = "action_02";
			};
		};
		
	};
	class ACE_MACS_M232_Pallet_F: ACE_MACS_M231_Pallet_F {
		XEH_ENABLED;
		scope = 2;
        scopeCurator = 2;
		displayName = "MACS M232 Supply Pallet";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(macs_pallet_m232_F.p3d);
		icon="";
		picture="";
		
		vehicleClass = "ACE_Arty_System";
		editorCategory = "EdCat_ACE_Arty_System";
		editorSubcategory = "EdSubcat_ACE_Arty_Ammunition";
	};
};
