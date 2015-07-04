class CfgVehicles
{
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(place) {
                    //displayName = CSTRING(Placedown);
                    displayName = "Place Tripod";
                    condition = QUOTE([ARR_2(_player,'16aa_tripod')] call EFUNC(common,hasItem));
                    statement = QUOTE([ARR_2(_player,'16aa_tripod')] call FUNC(place));
                    showDisabled = 0;
                    priority = 2;
                    icon = PATHTOF(UI\w_sniper_tripod_ca.paa);
                };
            };
        };
    };
    class LandVehicle;  // External class reference
    class StaticWeapon : LandVehicle
    {
        class Turrets;  // External class reference
        class MainTurret;   // External class reference
        class ACE_Actions
        {
            class ACE_MainActions;
        };
    };
    class StaticMGWeapon : StaticWeapon {};

    class Item_Base_F;
    class 16aa_tripod_item: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "Folded Tripod";
        vehicleClass = "Items";
        class TransportItems {
            class 16aa_tripod {
                name = "16aa_tripod";
                count = 1;
            };
        };
    };
    class Box_NATO_Support_F;
    class ACE_Box_Misc: Box_NATO_Support_F {
        class TransportItems {
            MACRO_ADDITEM(16aa_tripod,5);
        };
    };

    class 16aa_tripod_base : StaticMGWeapon {
        author = "3LSR";
        model = "";
        mapSize = 2;
        scope = 1;
        scopeCurator = 1;
        displayName = "";
        faction = 16aa_Faction;
        vehicleClass = "16aa_Static";
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0,1.5,0};
        ace_dragging_dragDirection = 0;
        ace_dragging_canCarry = 0;
        class Turrets{};
        class AnimationSources {};
         class ACE_Actions {
            class ACE_MainActions {
                selection = "";
                distance = 5;
                condition = "true";
                class 16aa_Pickup {
                    selection = "";
                    //displayName = CSTRING(PickUp);
                    displayName = "Pick Up Tripod";
                    distance = 5;
                    condition = "true";
                    statement = QUOTE([ARR_2(_target,_player)] call FUNC(pickup));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                    icon = PATHTOF(UI\w_sniper_tripod_ca.paa);
                };
            };
        };
    };
    class 16aa_tripod_low : 16aa_tripod_base
    {
        author = "3LSR";
        scope = 2;
        scopeCurator = 2;
        model = "\16aa_weapons_support\Tripod\tripod_low.p3d";
        displayName = "Tripod - Low";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                selection = "";
                distance = 5;
                condition = "true";
                class 16aa_Pickup:16aa_Pickup{};
                class 16aa_AdjustHeightUp {
                    selection = "";
                    //displayName = CSTRING(PickUp);
                    displayName = "Raise Tripod";
                    distance = 5;
                    condition = "true";
                    statement = QUOTE([ARR_3(_target,'16aa_tripod_middle',_player)] call FUNC(adjustHeight));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                    icon = PATHTOF(UI\w_sniper_tripod_ca.paa);
                };
            };
        };
    };
    class 16aa_tripod_middle: 16aa_tripod_base
    {
        author = "3LSR";
        scope = 2;
        scopeCurator = 2;
        model = "\16aa_weapons_support\Tripod\tripod_middle.p3d";
        displayName = "Tripod - Middle";
    };
    class 16aa_tripod_raised: 16aa_tripod_base
    {
        author = "3LSR";
        scope = 2;
        scopeCurator = 2;
        model = "\16aa_weapons_support\Tripod\tripod_raised.p3d";
        displayName = "Tripod - High";
    };
};