class CfgVehicles {
	class ThingX;
	class Arty_Optic_Base: ThingX {
		author = ECSTRING(common,ACETeam);
		scope = 2;
        scopeCurator = 2;
	};
	class acex_artillery_M67: Arty_Optic_Base {
		scope = 2;
        scopeCurator = 2;
		displayName = "M67 Mortar Sight";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(optics_m67.p3d);
		vehicleClass = "acex_artillery_System";
		editorCategory = "EdCat_acex_artillery_System";
		editorSubcategory = "EdSubcat_acex_artillery_Equipment";
	};	
};
