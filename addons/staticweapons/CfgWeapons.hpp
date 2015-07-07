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
        picture = PATHTOF(UI\w_tripod_ca.paa);
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
        picture = PATHTOF(UI\w_l2a1_barrel_ca.paa);
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
        picture = PATHTOF(UI\w_l2a1_receiver_ca.paa);
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
        picture = PATHTOF(UI\w_gmg_barrel_ca.paa);
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
        picture = PATHTOF(UI\w_gmg_receiver_ca.paa);
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
    class 16aa_static_item_l16_baseplate : ACE_ItemCore  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "L16 Base Plate";
        descriptionshort = "L16 Base Plate. Required to assemble L16 Mortar";
        model = PATHTOF(data\l16_baseplate.p3d);
        picture = PATHTOF(UI\w_l16_baseplate_ca.paa);
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
    class 16aa_static_item_l16_bipod : ACE_ItemCore  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "L16 Bipod";
        descriptionshort = "L16 Bipod. Required to assemble L16 Mortar";
        model = PATHTOF(data\l16_bipod.p3d);
        picture = PATHTOF(UI\w_l16_bipod_ca.paa);
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
    class 16aa_static_item_l16_tube : ACE_ItemCore  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "L16 Tube";
        descriptionshort = "L16 Tube. Required to assemble L16 Mortar";
        model = PATHTOF(data\l16_tube.p3d);
        picture = PATHTOF(UI\w_l16_tube_ca.paa);
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
};