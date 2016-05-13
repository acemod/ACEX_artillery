class CfgWeapons {
    class ACE_ItemCore;
    class InventoryItem_Base_F;
    
    class ACE_MACS_M231_Charge_F: ACE_ItemCore {
        scope = 2;
        scopeCurator = 2;
        displayName = "MACS M231 Artillery Charge";
        author = ECSTRING(common,ACETeam);
        
        model=PATHTOF(macs_charge_m231_F.p3d);
        icon="";
        picture="";
        keepHorizontalPlacement = 1;
        
        class ItemInfo: InventoryItem_Base_F {
            mass = 5;
        };
    };
    class ACE_MACS_M232_Charge_F: ACE_ItemCore {
        scope = 2;
        scopeCurator = 2;
        displayName = "MACS M232 Artillery Charge";
        author = ECSTRING(common,ACETeam);
        
        model=PATHTOF(macs_charge_m232_F.p3d);
        icon="";
        picture="";
        keepHorizontalPlacement = 1;
        
        class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
};