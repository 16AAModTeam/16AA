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
        picture = PATHTOF(UI\w_sniper_tripod_ca.paa);
        magazines[] = {};
         class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };
};