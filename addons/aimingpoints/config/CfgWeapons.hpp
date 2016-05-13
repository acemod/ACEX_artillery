class CfgWeapons {
    class ItemCore;
    class ACE_ItemCore;
    class InventoryItem_Base_F;

    class acex_artillery_AimingPost_Item: InventoryItem_Base_F {
        type = 0;
        allowedSlots[] = {901};
    };
    
    class acex_artillery_AimingPost: ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(Aimingpost_Item);
        author = ECSTRING(common,ACETeam);

        model=PATHTOF(arty_aimingpost_equip_f.p3d);
        icon=PATHTOF(data\ui\map_aimingpost_ca.paa);
        picture=PATHTOF(data\ui\aimingpost_equip_ca.paa);

        class ItemInfo: acex_artillery_AimingPost_Item {
            mass = 20;
            uniformModel = PATHTOF(arty_aimingpost_equip_f.p3d);
        };
    };

    class acex_artillery_Collimator: ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(Collimator_Item);
        author = ECSTRING(common,ACETeam);
        
        model=PATHTOF(arty_collimator_equip_f.p3d);
        icon=PATHTOF(data\ui\map_collimator_ca.paa);
        picture=PATHTOF(data\ui\collimator_equip_ca.paa);

        class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
};
