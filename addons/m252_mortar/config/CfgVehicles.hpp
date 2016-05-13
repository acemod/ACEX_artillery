class CfgVehicles
{
	class Mortar_01_base_F;
	class ACE_M252_Mortar_F: Mortar_01_base_F
	{
		author = ECSTRING(common,ACETeam);
		_generalMacro = "ACE_M252_Mortar_F";
		scope = 2;
		side = 1;
		displayname = "M252 Mortar";
		vehicleClass = "acex_artillery_System";
		editorCategory = "EdCat_acex_artillery_System";
		editorSubcategory = "EdSubcat_acex_artillery_Equipment";
		
		model=PATHTOF(m252_mortar.p3d);

		faction = "BLU_F";
		crew = "B_Soldier_F";
		availableForSupportTypes[] = {"Artillery"};
		//hiddenSelections[] = {"Camo"};
		//hiddenSelectionsTextures[] = {"\A3\Static_f\Mortar_01\data\Mortar_01_CO.paa"};
	};
	// class B_Mortar_01_F: Mortar_01_base_F
	// {
		// author = "$STR_A3_Bohemia_Interactive";
		// _generalMacro = "B_Mortar_01_F";
		// scope = 2;
		// side = 1;
		// faction = "BLU_F";
		// crew = "B_Soldier_F";
		// availableForSupportTypes[] = {"Artillery"};
	// };
	// class B_G_Mortar_01_F: I_G_Mortar_01_F
	// {
		// scope = 2;
		// scopeCurator = 2;
		// side = 1;
		// faction = "BLU_G_F";
		// crew = "B_G_Soldier_F";
	// };

	// class B_Mortar_01_support_F: Bag_Base
	// {
		// author = "$STR_A3_Bohemia_Interactive";
		// _generalMacro = "B_Mortar_01_support_F";
		// faction = "BLU_F";
		// scope = 2;
		// displayName = "$STR_A3_CfgVehicles_B_Mortar_01_Support0";
		// model = "\A3\Weapons_F\Ammoboxes\Bags\Backpack_Small.p3d";
		// editorCategory = "EdCat_Equipment";
		// editorSubcategory = "EdSubcat_DismantledWeapons";
		// hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\data\backpack_small_mcamo_co.paa"};
		// picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_mcamo.paa";
		// icon = "iconBackpack";
		// mass = 180;
		// maximumLoad = 0;
		// class assembleInfo
		// {
			// primary = 0;
			// base = "";
			// assembleTo = "";
			// dissasembleTo[] = {};
			// displayName = "";
		// };
	// };
	// class B_Mortar_01_weapon_F: Weapon_Bag_Base
	// {
		// faction = "BLU_F";
		// author = "$STR_A3_Bohemia_Interactive";
		// _generalMacro = "B_Mortar_01_weapon_F";
		// scope = 2;
		// editorCategory = "EdCat_Equipment";
		// editorSubcategory = "EdSubcat_DismantledWeapons";
		// displayName = "$STR_A3_CfgVehicles_B_Mortar_01_Wpn0";
		// hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_mcamo_co.paa"};
		// picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_mcamo.paa";
		// mass = 380;
		// class assembleInfo: assembleInfo
		// {
			// displayName = "$STR_A3_CfgVehicles_B_Mortar_01_Wpn_assembleInfo0";
			// assembleTo = "B_Mortar_01_F";
			// base[] = {"B_Mortar_01_support_F","O_Mortar_01_support_F","I_Mortar_01_support_F"};
		// };
	// };
};