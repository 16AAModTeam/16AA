class CfgWeapons {
    class ACE_ItemCore ;
    class WeaponSlotsInfo;
    class InventoryItem_Base_F;
	class 16aa_basha_roll_item: ACE_ItemCore
	{
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "Basha Roll";
        descriptionshort = "Basha Roll used to set up a Basha";
        model = "\16aa_tents\Basha_packed.p3d";
        picture = "\16aa_tents\icon\Packed.paa";
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 50;
        };
    };
    class 16aa_tent_medical_roll_small_item: ACE_ItemCore
    {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "Tent Bag - Medical (Small)";
        descriptionshort = "Duffel bag used to deploy a small medical tent.";
        model = "\16aa_tents\Basha_packed.p3d";
        picture = "\16aa_tents\icon\Packed.paa";
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 130;
        };
    };
    class 16aa_tent_medical_roll_medium_item: ACE_ItemCore
    {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "Tent Bag - Medical (Medium)";
        descriptionshort = "Duffel bag used to deploy a large medical tent.";
        model = "\16aa_tents\medical_tent_medium_packed.p3d";
        picture = "\16aa_tents\icon\packed_medical_tent.paa";
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 150;
        };
    };
};