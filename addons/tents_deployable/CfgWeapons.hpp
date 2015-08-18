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
            mass = 20;
        };
    };
    class 16aa_tent_medical_roll_item: ACE_ItemCore
    {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "Tent Bag - Medical";
        descriptionshort = "Duffel bag used to deploy a medical tent.";
        model = "\16aa_tents\Basha_packed.p3d";
        picture = "\16aa_tents\icon\Packed.paa";
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 130;
        };
    };
};