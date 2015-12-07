class CfgVehicles {
	class ThingX;
	class Item_Base_F;
	class NonStrategic;
	class ReammoBox_F;
	class LandVehicle;
	class MRAP_03_hmg_base_F;
	
	// class ACE_MACS_Sleeve_F: ThingX {   
		// scope = 2;
        // scopeCurator = 2;
		// displayName = "MACS Charge Loading Sleeve";
		// author = ECSTRING(common,ACETeam);
		// model=PATHTOF(macs_charge_sleeve_F.p3d);
		// icon="";
		// picture="";
		// vehicleClass = "Static";
	// };
	class ACE_MACS_M231_Pallet_F: MRAP_03_hmg_base_F {   
		scope = 2;
        scopeCurator = 2;
		displayName = "MACS M231 Supply Pallet";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(macs_pallet_m231_F.p3d);
		
		slingLoadCargoMemoryPoints[] = {"slingload_point_01","slingload_point_02","slingload_point_03","slingload_point_04"};
	};
	class ACE_MACS_M232_Pallet_F: ACE_MACS_M231_Pallet_F {   
		scope = 2;
        scopeCurator = 2;
		displayName = "MACS M232 Supply Pallet";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(macs_pallet_m232_F.p3d);
		icon="";
		picture="";
		vehicleClass = "Static";
	};
};

enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};