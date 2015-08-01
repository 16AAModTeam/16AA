class CfgVehicles
{
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(place_basha_small) {
                    //displayName = CSTRING(Placedown);
                    displayName = "Deploy Basher - Small";
                    condition = QUOTE([ARR_2(_player,'16aa_basha_roll_item')] call ace_common_fnc_hasItem);
                    statement = QUOTE([ARR_3(_player,'16aa_basha_roll_item','16aa_Basha_Small')] call lsr_staticweapons_fnc_place);
                    showDisabled = 0;
                    priority = 2;
                    picture = "\16aa_tents\icon\Small.paa";
                };
				class GVAR(place_basha_large) {
                    //displayName = CSTRING(Placedown);
                    displayName = "Deploy Basher - Large";
                    condition = QUOTE([ARR_2(_player,'16aa_basha_roll_item')] call ace_common_fnc_hasItem);
                    statement = QUOTE([ARR_3(_player,'16aa_basha_roll_item','16aa_Basha_Large')] call lsr_staticweapons_fnc_place);
                    showDisabled = 0;
                    priority = 2;
                    picture = "\16aa_tents\icon\Large.paa";
                };
            };
        };
    };
    class Item_Base_F;
    class 16aa_basha_roll: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "Basha Roll";
        vehicleClass = "Items";
        class TransportItems {
            class 16aa_basha_roll_item {
                name = "16aa_basha_roll_item";
                count = 1;
            };
        };
	};
    class ReammoBox_F;
    class 16aa_Basha_Large : ReammoBox_F {
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0,0,0};
        ace_dragging_dragDirection = 0;
        ace_dragging_canCarry = 0;
         class ACE_Actions {
            class ACE_MainActions {
                selection = "interact";
                distance = 5;
                condition = "true";
                displayName = "Interact";
                class 16aa_Pickup_Basha_Large {
                    selection = "";
                    displayName = "Disassemble Basha";
                    distance = 5;
                    condition = "true";
                    statement = QUOTE([ARR_3(_target,_player,'16aa_basha_roll_item')] call lsr_staticweapons_fnc_pickup);
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                };
            };
        };
    };
    class 16aa_Basha_Small: ReammoBox_F {
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0,2.5,0};
        ace_dragging_dragDirection = 0;
        ace_dragging_canCarry = 0;
         class ACE_Actions {
            class ACE_MainActions {
                selection = "interact";
                distance = 5;
                condition = "true";
                displayName = "Interact";
                class 16aa_Pickup_Basha_Small {
                    selection = "";
                    displayName = "Disassemble Basha";
                    distance = 5;
                    condition = "true";
                    statement = QUOTE([ARR_3(_target,_player,'16aa_basha_roll_item')] call lsr_staticweapons_fnc_pickup);
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 4;
                };
            };
        };
    };
};