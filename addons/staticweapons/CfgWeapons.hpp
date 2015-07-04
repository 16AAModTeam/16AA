class CfgWeapons {
    class ACE_ItemCore ;
    class WeaponSlotsInfo;
    class InventoryItem_Base_F;
    class 16aa_tripod : ACE_ItemCore  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "Folded Tripod";
        descriptionshort = "Tripod designed for use with static weapons";
        model = "\16aa_weapons_support\Tripod\tripod_item.p3d";
        picture = PATHTOF(UI\tripod.paa);
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
    class 16aa_static_item_l2a1_barrel : ACE_ItemCore  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "L2A1 Barrel";
        descriptionshort = "L2A1 Barrel. Required to assemble L2A1 Heavy Machine Gun";
        model = PATHTOF(data\l2a1_barrel.p3d);
        picture = PATHTOF(UI\l2a1_barrel.paa);
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
    class 16aa_static_item_l2a1_receiver : ACE_ItemCore  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "L2A1 Receiver";
        descriptionshort = "L2A1 Receiver. Required to assemble L2A1 Heavy Machine Gun";
        model = PATHTOF(data\l2a1_receiver.p3d);
        picture = PATHTOF(UI\l2a1_receiver.paa);
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
    class 16aa_static_item_gmg_barrel : ACE_ItemCore  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "L134A1 Barrel";
        descriptionshort = "L134A1 Barrel. Required to assemble L134A1 Grenade Machine Gun";
        model = PATHTOF(data\gmg_barrel.p3d);
        picture = PATHTOF(UI\gmg_barrel.paa);
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
    class 16aa_static_item_gmg_receiver : ACE_ItemCore  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "L134A1 Receiver";
        descriptionshort = "L134A1 Receiver. Required to assemble L134A1 Heavy Machine Gun";
        model = PATHTOF(data\gmg_receiver.p3d);
        picture = PATHTOF(UI\gmg_receiver.paa);
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
    class 16aa_static_item_ammobox_50cal : ACE_ItemCore  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = ".50cal Ammo Box";
        descriptionshort = "100Rd .50cal. Used in L2A1 Heavy Machine Gun";
        model = PATHTOF(data\ammobox_50cal.p3d);
        picture = PATHTOF(UI\ammobox_50cal.paa);
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
    class 16aa_static_item_ammobox_762 : ACE_ItemCore  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "7.62mm Ammo Box";
        descriptionshort = "200Rd 7.62mm Used in L7A2 General Purpose Machine Gun";
        model = PATHTOF(data\ammobox_762.p3d);
        picture = PATHTOF(UI\ammobox_762.paa);
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
    class 16aa_static_item_ammobox_40mm : ACE_ItemCore  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "40mm Ammo Box";
        descriptionshort = "96Rd 40mm. Used in L134A1 Grenade Machine Gun";
        model = PATHTOF(data\ammobox_50cal.p3d);
        picture = PATHTOF(UI\ammobox_50cal.paa);
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
};