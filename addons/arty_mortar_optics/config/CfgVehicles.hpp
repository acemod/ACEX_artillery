class CfgVehicles {
	class ThingX;
	class Arty_Optic_Base: ThingX {
		author = ECSTRING(common,ACETeam);
		scope = 2;
        scopeCurator = 2;
	};
	class ACE_Arty_M67: Arty_Optic_Base {
		scope = 2;
        scopeCurator = 2;
		displayName = "M67 Mortar Sight";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(optics_m67.p3d);
		vehicleClass = "ACE_Arty_System";
		editorCategory = "EdCat_ACE_Arty_System";
		editorSubcategory = "EdSubcat_ACE_Arty_Equipment";
	};	
};
