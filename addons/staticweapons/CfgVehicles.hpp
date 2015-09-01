class CfgVehicles
{
    //Self Interactions
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(place) {
                    //displayName = CSTRING(Placedown);
                    displayName = "Place Tripod";
                    condition = QUOTE([ARR_2(_player,'16aa_tripod')] call ace_common_fnc_hasItem);
                    statement = QUOTE([ARR_3(_player,'16aa_tripod','16aa_tripod_low')] call FUNC(placeTimer));
                    showDisabled = 0;
                    priority = 2;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
                class GVAR(l16_place) {
                    //displayName = CSTRING(Placedown);
                    displayName = "Place Base Plate";
                    condition = QUOTE([ARR_2(_player,'16aa_static_item_l16_baseplate')] call ace_common_fnc_hasItem);
                    statement = QUOTE([ARR_3(_player,'16aa_static_item_l16_baseplate','16aa_l16_baseplate_deployed')] call FUNC(placeTimer));
                    showDisabled = 0;
                    priority = 2;
                    icon = PATHTOF(UI\w_l16_baseplate_ca.paa);
                };
            };
        };
    };
    //Items
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
    //L2A1
    class 16aa_dummy_item_l2a1_barrel: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "L2A1 Barrel";
        vehicleClass = "Items";
        class TransportItems {
            class 16aa_static_item_l2a1_barrel {
                name = "16aa_static_item_l2a1_barrel";
                count = 1;
            };
        };
    };
    class 16aa_dummy_item_l2a1_receiver: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "L2A1 Receiver";
        vehicleClass = "Items";
        class TransportItems {
            class 16aa_static_item_l2a1_receiver {
                name = "16aa_static_item_l2a1_reciever";
                count = 1;
            };
        };
    };
    //GMG
    class 16aa_dummy_item_gmg_barrel: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "L134A1 Barrel";
        vehicleClass = "Items";
        class TransportItems {
            class 16aa_static_item_gmg_barrel {
                name = "16aa_static_item_gmg_barrel";
                count = 1;
            };
        };
    };
    class 16aa_dummy_item_gmg_receiver: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "L134A1 Receiver";
        vehicleClass = "Items";
        class TransportItems {
            class 16aa_static_item_gmg_receiver {
                name = "16aa_static_item_gmg_reciever";
                count = 1;
            };
        };
    };
    //L16 Mortar
    class 16aa_dummy_item_l16_baseplate: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "L16 Base Plate";
        vehicleClass = "Items";
        class TransportItems {
            class 16aa_static_item_l16_baseplate {
                name = "16aa_static_item_l16_baseplate";
                count = 1;
            };
        };
    };
    class 16aa_dummy_item_l16_bipod: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "L16 Bipod";
        vehicleClass = "Items";
        class TransportItems {
            class 16aa_static_item_l16_bipod {
                name = "16aa_static_item_l16_bipod";
                count = 1;
            };
        };
    };
    class 16aa_dummy_item_l16_tube: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "L16 Tube";
        vehicleClass = "Items";
        class TransportItems {
            class 16aa_static_item_l16_tube {
                name = "16aa_static_item_l16_tube";
                count = 1;
            };
        };
    };
    //Magazines
    //Ammoboxes
    class 16aa_dummy_item_ammobox_50cal: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = ".50cal Ammo Box";
        vehicleClass = "Items";
        class TransportItems {
            class 16aa_static_ammobox_50cal {
                name = "16aa_static_ammobox_50cal";
                count = 1;
            };
        };
    };
    class 16aa_dummy_item_ammobox_762: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "7.62mm Ammo Box";
        vehicleClass = "Items";
        class TransportMagazines {
            class 16aa_static_ammobox_762 {
                name = "16aa_static_ammobox_762";
                count = 1;
            };
        };
    };
    class 16aa_dummy_item_ammobox_40mm: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "40mm Ammo Box";
        vehicleClass = "Items";
        class TransportMagazines {
            class 16aa_static_ammobox_40mm {
                name = "16aa_static_ammobox_40mm";
                count = 1;
            };
        };
    };
    //L16 Mortar
    class 16aa_dummy_item_l16_ammo_he: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "81mm HE Round";
        vehicleClass = "Items";
        class TransportMagazines {
            class 16aa_static_magazine_l16_he {
                name = "16aa_static_magazine_l16_he";
                count = 1;
            };
        };
    };
    class 16aa_dummy_item_l16_ammo_illum: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "81mm Illum Round";
        vehicleClass = "Items";
        class TransportMagazines {
            class 16aa_static_magazine_l16_illum {
                name = "16aa_static_magazine_l16_illum";
                count = 1;
            };
        };
    };
    class 16aa_dummy_item_l16_ammo_smk_white: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "81mm White Smoke Round";
        vehicleClass = "Items";
        class TransportMagazines {
            class 16aa_static_magazine_l16_smoke_white {
                name = "16aa_static_magazine_l16_smoke_white";
                count = 1;
            };
        };
    };
    class 16aa_dummy_item_l16_ammo_smk_red: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "81mm Red Smoke Round";
        vehicleClass = "Items";
        class TransportMagazines {
            class 16aa_static_magazine_l16_smoke_red {
                name = "16aa_static_magazine_l16_smoke_red";
                count = 1;
            };
        };
    };
    class 16aa_dummy_item_l16_ammo_smk_orange: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "81mm Orange Smoke Round";
        vehicleClass = "Items";
        class TransportMagazines {
            class 16aa_static_magazine_l16_smoke_orange {
                name = "16aa_static_magazine_l16_smoke_orange";
                count = 1;
            };
        };
    };
    //Static Weapons & Tripods
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
    class 16aa_crate_empty_csw;
    class 16AA_crate_csw : 16aa_crate_empty_csw {
        class TransportItems {
            MACRO_ADDITEM(16aa_tripod,45);
            MACRO_ADDITEM(16aa_static_item_l2a1_barrel,15);
            MACRO_ADDITEM(16aa_static_item_l2a1_receiver,15);
            MACRO_ADDITEM(16aa_static_item_gmg_barrel,15);
            MACRO_ADDITEM(16aa_static_item_gmg_receiver,15);
            MACRO_ADDITEM(16aa_static_item_l16_baseplate,15);
            //MACRO_ADDITEM(16aa_static_item_l16_bipod,5);
            MACRO_ADDITEM(16aa_static_item_l16_tube,15);
        };
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_ammobox_50cal,50);
            /*
            MACRO_ADDMAGAZINE(16aa_static_magazine_ammobox_762,50);
            MACRO_ADDMAGAZINE(16aa_static_magazine_ammobox_40mm,50};
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_he,50);
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_illum,50);
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_smoke_white,50);
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_smoke_red,50);
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_smoke_orange,50);
            */
        };
    };
    //Empty Tripods
    class 16aa_tripod_base: StaticMGWeapon {
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
                displayName = "Interact";
                class 16aa_Pickup {
                    selection = "";
                    displayName = "Pick Up Tripod";
                    distance = 5;
                    condition = "true";
                    statement = QUOTE([ARR_3(_target,_player,'16aa_tripod')] call FUNC(pickupTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
                class 16aa_assemble_l2a1: 16aa_Pickup{
                    displayName = "Assemble L2A1";
                    condition = QUOTE([ARR_2(_player,'16aa_static_item_l2a1_receiver')] call ace_common_fnc_hasItem);
                };
                class 16aa_assemble_gmg: 16aa_Pickup{
                    displayName = "Assemble L134A1";
                    condition = QUOTE([ARR_2(_player,'16aa_static_item_gmg_receiver')] call ace_common_fnc_hasItem);
                };
                class 16aa_assemble_gpmg: 16aa_Pickup{
                    displayName = "Assemble GPMG SF";
                    condition = "'16aa_l7a2' in (weapons _player)";
                };
                class 16aa_assemble_javelin: 16aa_Pickup{
                    displayName = "Assemble Javelin";
                    condition = "'16aa_javelin_launcher' in (weapons _player)";
                };
            };
        };
    };
    class 16aa_tripod_low: 16aa_tripod_base {
        author = "3LSR";
        scope = 2;
        scopeCurator = 2;
        model = "\16aa_weapons_support\Tripod\tripod_low.p3d";
        displayName = "Tripod - Low";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0,0,0.4]";
                class 16aa_Pickup: 16aa_Pickup {};
                class 16aa_AdjustHeightUp: 16aa_Pickup {
                    selection = "";
                    displayName = "Raise Tripod";
                    distance = 5;
                    condition = "true";
                    statement = QUOTE([ARR_3(_target,'16aa_tripod_middle',_player)] call FUNC(adjustHeightTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
                class 16aa_assemble_l2a1: 16aa_assemble_l2a1{
                    displayName = "Assemble L2A1";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_L2A1_Static_Base','16aa_static_item_l2a1_receiver')] call FUNC(assembleTimer));
                };
                class 16aa_assemble_gmg: 16aa_assemble_gmg{
                    displayName = "Assemble L134A1";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_GMG_Static_Base','16aa_static_item_gmg_receiver')] call FUNC(assembleTimer));
                };
                class 16aa_assemble_gpmg: 16aa_assemble_gpmg{
                    displayName = "Assemble GPMG SF";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_GPMG_Static_Base','16aa_l7a2')] call FUNC(assembleTimer));
                };
                class 16aa_assemble_javelin: 16aa_assemble_javelin{
                    displayName = "Assemble Javelin";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_Javelin_Static_base','16aa_javelin_launcher')] call FUNC(assembleTimer));
                };
            };
        };
    };
    class 16aa_tripod_middle: 16aa_tripod_base {
        author = "3LSR";
        scope = 2;
        scopeCurator = 2;
        model = "\16aa_weapons_support\Tripod\tripod_middle.p3d";
        displayName = "Tripod - Middle";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0,0,0.78]";
                class 16aa_Pickup: 16aa_Pickup {};
                class 16aa_AdjustHeightUp: 16aa_Pickup {
                    displayName = "Raise Tripod";
                    statement = QUOTE([ARR_3(_target,'16aa_tripod_raised',_player)] call FUNC(adjustHeightTimer));
                };
                class 16aa_AdjustHeightLower: 16aa_AdjustHeightUp {
                    displayName = "Lower Tripod";
                    statement = QUOTE([ARR_3(_target,'16aa_tripod_low',_player)] call FUNC(adjustHeightTimer));
                };
                class 16aa_assemble_l2a1: 16aa_assemble_l2a1{
                    displayName = "Assemble L2A1";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_L2A1_Static_Base_middle','16aa_static_item_l2a1_receiver')] call FUNC(assembleTimer));
                };
                class 16aa_assemble_gmg: 16aa_assemble_gmg{
                    displayName = "Assemble L134A1";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_GMG_Static_Base_middle','16aa_static_item_gmg_receiver')] call FUNC(assembleTimer));
                };
                class 16aa_assemble_gpmg: 16aa_assemble_gpmg{
                    displayName = "Assemble GPMG SF";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_GPMG_Static_Base_middle','16aa_l7a2')] call FUNC(assembleTimer));
                };
                class 16aa_assemble_javelin: 16aa_assemble_javelin{
                    displayName = "Assemble Javelin";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_Javelin_Static_middle','16aa_javelin_launcher')] call FUNC(assembleTimer));
                };
            };
        };
    };
    class 16aa_tripod_raised: 16aa_tripod_base {
        author = "3LSR";
        scope = 2;
        scopeCurator = 2;
        model = "\16aa_weapons_support\Tripod\tripod_raised.p3d";
        displayName = "Tripod - High";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0,0,1.155]";
                class 16aa_Pickup: 16aa_Pickup {};
                class 16aa_AdjustHeightUp{
                    condition = "false";
                };
                class 16aa_AdjustHeightLower: 16aa_AdjustHeightUp {
                    condition = "true";
                    displayName = "Lower Tripod";
                    statement = QUOTE([ARR_3(_target,'16aa_tripod_middle',_player)] call FUNC(adjustHeightTimer));
                };
                class 16aa_assemble_l2a1: 16aa_assemble_l2a1{
                    displayName = "Assemble L2A1";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_L2A1_Static_Base_raised','16aa_static_item_l2a1_receiver')] call FUNC(assembleTimer));
                };
                class 16aa_assemble_gmg: 16aa_assemble_gmg{
                    displayName = "Assemble L134A1";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_GMG_Static_Base_raised','16aa_static_item_gmg_receiver')] call FUNC(assembleTimer));
                };
                class 16aa_assemble_gpmg: 16aa_assemble_gpmg{
                    displayName = "Assemble GPMG SF";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_GPMG_Static_base_raised','16aa_l7a2')] call FUNC(assembleTimer));
                };
                 class 16aa_assemble_javelin: 16aa_assemble_javelin{
                    displayName = "Assemble Javelin";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_Javelin_Static_raised','16aa_javelin_launcher')] call FUNC(assembleTimer));
                };
            };
        };
    };
    //L16 Mortar
    class 16aa_l16_baseplate_deployed: 16aa_tripod_base
    {
        author = "3LSR";
        scope = 2;
        scopeCurator = 2;
        model = PATHTOF(data\l16_baseplate_deployed);
        displayName = "L16 Base Plate";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0,0,0]";
                class 16aa_Pickup: 16aa_Pickup {
                    displayName = "Pick up Base Plate"
                    statement = QUOTE([ARR_3(_target,_player,'16aa_static_item_l16_baseplate')] call FUNC(pickupTimer));
                };
                class 16aa_assemble_l16: 16aa_Pickup{
                    displayName = "Assemble L16";
                    condition = QUOTE([ARR_2(_player,'16aa_static_item_l16_tube')] call ace_common_fnc_hasItem);
                    statement = QUOTE([ARR_4(_target,_player,'16aa_L16_Mortar','16aa_static_item_l16_tube')] call FUNC(assembleTimer));
                };
                 class 16aa_assemble_l2a1{
                    condition = "false";
                };
                class 16aa_assemble_gmg{
                    condition = "false";
                };
                class 16aa_assemble_gpmg{
                    condition = "false";
                };
                class 16aa_assemble_javelin{
                    condition = "false";
                };
            };
        };
    };
    class StaticMortar: StaticWeapon
    {
        class ACE_Actions {
            class ACE_MainActions;
        };
    };
    class Mortar_01_base_F: StaticMortar
    {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions;
        };
    };
    class B_Mortar_01_F: Mortar_01_base_F
    {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions;
        };
    };
    class 16aa_L16_Mortar : B_Mortar_01_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0,-0.1,-0.6]";
                condition = "true";
                displayName = "Interact";
                showDisabled = 0;
                distance = 2;
                priority = 2;
                class 16aa_Disassemble{
                     distance = 5;
                    displayName = "Disassemble L16";
                    condition = "alive _target && count crew _target == 0";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_l16_baseplate_deployed',['16aa_static_item_l16_tube'])] call FUNC(disassembleTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 6;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
            };
        };
    };

    //L2A1
    class 16aa_L2A1_Static_Base : StaticMGWeapon {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class 16aa_AdjustHeightUp_L2A1{
                    displayName = "Raise Tripod";
                    distance = 5;
                    condition = "alive _target && count crew _target == 0";
                    statement = QUOTE([ARR_3(_target,'16aa_L2A1_Static_Base_middle',_player)] call FUNC(adjustHeightTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
                class 16aa_Disassemble{
                    distance = 5;
                    displayName = "Disassemble L2A1";
                    condition = QUOTE([ARR_2(_target,_player)] call FUNC(canDisassemble));
                    statement = QUOTE([ARR_4(_target,_player,'16aa_tripod_low',['16aa_static_item_l2a1_receiver'])] call FUNC(disassembleTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 6;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
                class 16aa_Magazines_Category{
                    distance = 5;
                    displayName = "Magazine";
                    condition = true;
                    statement = "";
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 6;
                    class 16aa_LoadMagazine{
                        distance = 5;
                        displayName = "Load Magazine";
                        condition = QUOTE([ARR_2(_target,_player)] call FUNC(canLoadMagazine));
                        statement = QUOTE([ARR_2(_target,_player)] call FUNC(loadMagazine));
                        showDisabled = 0;
                        exceptions[] = {};
                        priority = 6;
                    };
                     class 16aa_Static_UnloadMagazine{
                        distance = 5;
                        displayName = "Unload Magazine";
                        condition = QUOTE([ARR_2(_target,_player)] call FUNC(canUnloadMagazine));
                        statement = QUOTE([ARR_2(_target,_player)] call FUNC(unloadMagazine));
                        showDisabled = 0;
                        exceptions[] = {};
                        priority = 2;
                    };
                };

            };
                class 16aa_Barrel_Mount{
                    distance = 2;
                    selection = "barrel_memory";
                    displayName = "Attach Barrel";
                    condition = QUOTE([ARR_3(_target,_player,'16aa_static_item_l2a1_barrel')] call FUNC(canMountBarrel));
                    statement = QUOTE([ARR_3(_target,_player,'16aa_static_item_l2a1_barrel')] call FUNC(mountBarrelTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 7;
                };
                class 16aa_Barrel_Dismount{
                    distance = 2;
                    selection = "barrel_memory";
                    displayName = "Detatch Barrel";
                    condition = QUOTE([ARR_2(_target,_player)] call FUNC(canDismountBarrel));
                    statement = QUOTE([ARR_3(_target,_player,'16aa_static_item_l2a1_barrel')] call FUNC(dismountBarrelTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 8;
                };
        };
    };
    class 16aa_L2A1_Static_Base_middle: 16aa_L2A1_Static_Base{
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class 16aa_AdjustHeightUp_L2A1{
                    displayName = "Raise Tripod";
                    distance = 5;
                    condition = "alive _target && count crew _target == 0";
                    statement = QUOTE([ARR_3(_target,'16aa_L2A1_Static_Base_raised',_player)] call FUNC(adjustHeightTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
                class 16aa_AdjustHeightUp_L2A1_Down: 16aa_AdjustHeightUp_L2A1{
                    displayName = "Lower Tripod";
                    statement = QUOTE([ARR_3(_target,'16aa_L2A1_Static_Base',_player)] call FUNC(adjustHeightTimer));
                };
                class 16aa_Disassemble: 16aa_Disassemble{
                    statement = QUOTE([ARR_4(_target,_player,'16aa_tripod_middle',['16aa_static_item_l2a1_receiver'])] call FUNC(disassembleTimer));
                };
            };
        };
    };
    class 16aa_L2A1_Static_Base_raised: 16aa_L2A1_Static_Base{
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class 16aa_AdjustHeightUp_L2A1{
                     condition = "false";
                };
                class 16aa_AdjustHeightUp_L2A1_Down: 16aa_AdjustHeightUp_L2A1{
                    displayName = "Lower Tripod";
                    condition = "alive _target && count crew _target == 0";
                    statement = QUOTE([ARR_3(_target,'16aa_L2A1_Static_Base_middle',_player)] call FUNC(adjustHeightTimer));
                };
                class 16aa_Disassemble: 16aa_Disassemble{
                    statement = QUOTE([ARR_4(_target,_player,'16aa_tripod_raised',['16aa_static_item_l2a1_receiver'])] call FUNC(disassembleTimer));
                };
            };
        };
    };
    //GMG
    class 16aa_GMG_Static_Base : StaticMGWeapon {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class 16aa_AdjustHeightUp_GMG {
                    selection = "";
                    displayName = "Raise Tripod";
                    distance = 5;
                    condition = "alive _target && count crew _target == 0";
                    statement = QUOTE([ARR_3(_target,'16aa_GMG_Static_Base_middle',_player)] call FUNC(adjustHeightTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
                class 16aa_Disassemble_GMG{
                    distance = 5;
                    displayName = "Disassemble L134A1";
                    condition = QUOTE([ARR_2(_target,_player)] call FUNC(canDisassemble));
                    statement = QUOTE([ARR_4(_target,_player,'16aa_tripod_low',['16aa_static_item_gmg_receiver'])] call FUNC(disassembleTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 6;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
            };
                class 16aa_Barrel_Mount{
                    distance = 5;
                    selection = "barrel_memory";
                    displayName = "Attach Barrel";
                    condition = QUOTE([ARR_3(_target,_player,'16aa_static_item_gmg_barrel')] call FUNC(canMountBarrel));
                    statement = QUOTE([ARR_3(_target,_player,'16aa_static_item_gmg_barrel')] call FUNC(mountBarrelTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 7;
                };
                class 16aa_Barrel_Dismount{
                    distance = 5;
                    selection = "barrel_memory";
                    displayName = "Detatch Barrel";
                    condition = QUOTE([ARR_2(_target,_player)] call FUNC(canDismountBarrel));
                    statement = QUOTE([ARR_3(_target,_player,'16aa_static_item_gmg_barrel')] call FUNC(dismountBarrelTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 8;
                };
        };
    };
    class 16aa_GMG_Static_Base_middle: 16aa_GMG_Static_Base{
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {

                class 16aa_AdjustHeightUp_GMG{
                    displayName = "Raise Tripod";
                    distance = 5;
                    condition = "alive _target && count crew _target == 0";
                    statement = QUOTE([ARR_3(_target,'16aa_GMG_Static_Base_raised',_player)] call FUNC(adjustHeightTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
                class 16aa_AdjustHeightDown_GMG: 16aa_AdjustHeightUp_GMG{
                    displayName = "Lower Tripod";
                    statement = QUOTE([ARR_3(_target,'16aa_GMG_Static_Base',_player)] call FUNC(adjustHeightTimer));
                };
                class 16aa_Disassemble_GMG: 16aa_Disassemble_GMG{
                    statement = QUOTE([ARR_4(_target,_player,'16aa_tripod_middle',['16aa_static_item_gmg_receiver'])] call FUNC(disassembleTimer));
                };
            };
        };
    };
    class 16aa_GMG_Static_Base_raised: 16aa_GMG_Static_Base{
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class 16aa_AdjustHeightUp_GMG{
                     condition = "false";
                };
                class 16aa_AdjustHeightDown_GMG: 16aa_AdjustHeightUp_GMG{
                    displayName = "Lower Tripod";
                    condition = "alive _target && count crew _target == 0";
                    statement = QUOTE([ARR_3(_target,'16aa_GMG_Static_Base_middle',_player)] call FUNC(adjustHeightTimer));
                };
                class 16aa_Disassemble_GMG:16aa_Disassemble_GMG{
                    statement = QUOTE([ARR_4(_target,_player,'16aa_tripod_raised',['16aa_static_item_gmg_receiver'])] call FUNC(disassembleTimer));
                };
            };
        };
    };
    //GPMG
    class 16aa_GPMG_Static_base : StaticMGWeapon {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class 16aa_AdjustHeightUp_GPMG {
                    selection = "";
                    displayName = "Raise Tripod";
                    distance = 5;
                    condition = "true";
                    statement = QUOTE([ARR_3(_target,'16aa_GPMG_Static_base_middle',_player)] call FUNC(adjustHeightTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
                class 16aa_Disassemble_GPMG{
                    distance = 5;
                    displayName = "Disassemble GPMG";
                    condition = "alive _target && count crew _target == 0";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_tripod_low',['16aa_l7a2'])] call FUNC(disassembleTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 6;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
            };
        };
    };
    class 16aa_GPMG_Static_base_middle: 16aa_GPMG_Static_base{
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class 16aa_AdjustHeightUp_GPMG{
                    displayName = "Raise Tripod";
                    distance = 5;
                    condition = "alive _target && count crew _target == 0";
                    statement = QUOTE([ARR_3(_target,'16aa_GPMG_Static_base_raised',_player)] call FUNC(adjustHeightTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
                class 16aa_AdjustHeightDown_GPMG: 16aa_AdjustHeightUp_GPMG{
                    displayName = "Lower Tripod";
                    statement = QUOTE([ARR_3(_target,'16aa_GPMG_Static_base',_player)] call FUNC(adjustHeightTimer));
                };
                class 16aa_Disassemble_GPMG:16aa_Disassemble_GPMG{
                    statement = QUOTE([ARR_4(_target,_player,'16aa_tripod_middle',['16aa_l7a2'])] call FUNC(disassembleTimer));
                };
            };
        };
    };
    class 16aa_GPMG_Static_base_raised: 16aa_GPMG_Static_base{
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class 16aa_AdjustHeightUp_GPMG{
                     condition = "false";
                };
                class 16aa_AdjustHeightDown_GPMG: 16aa_AdjustHeightUp_GPMG{
                    displayName = "Lower Tripod";
                    condition = "alive _target && count crew _target == 0";
                    statement = QUOTE([ARR_3(_target,'16aa_GPMG_Static_base_middle',_player)] call FUNC(adjustHeightTimer));
                };
                class 16aa_Disassemble_GPMG:16aa_Disassemble_GPMG{
                    statement = QUOTE([ARR_4(_target,_player,'16aa_tripod_raised',['16aa_l7a2'])] call FUNC(disassembleTimer));
                };
            };
        };
    };
    //Javelin
    class 16aa_Javelin_Static_base : StaticMGWeapon {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class 16aa_AdjustHeightUp_Javelin {
                    selection = "";
                    displayName = "Raise Tripod";
                    distance = 5;
                    condition = "alive _target && count crew _target == 0";
                    statement = QUOTE([ARR_3(_target,'16aa_Javelin_Static_middle',_player)] call FUNC(adjustHeightTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
                class 16aa_Disassemble_Javelin{
                    distance = 5;
                    displayName = "Disassemble Javelin";
                    condition = "alive _target && count crew _target == 0";
                    statement = QUOTE([ARR_4(_target,_player,'16aa_tripod_low',['16aa_javelin_launcher'])] call FUNC(disassembleTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 6;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
            };
        };
    };
    class 16aa_Javelin_Static_middle: 16aa_Javelin_Static_base{
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class 16aa_AdjustHeightUp_Javelin{
                    displayName = "Raise Tripod";
                    distance = 5;
                    condition = "alive _target && count crew _target == 0";
                    statement = QUOTE([ARR_3(_target,'16aa_Javelin_Static_raised',_player)] call FUNC(adjustHeightTimer));
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                    icon = PATHTOF(UI\w_tripod_ca.paa);
                };
                class 16aa_AdjustHeightDown_Javelin: 16aa_AdjustHeightUp_Javelin{
                    displayName = "Lower Tripod";
                    statement = QUOTE([ARR_3(_target,'16aa_Javelin_Static_base',_player)] call FUNC(adjustHeightTimer));
                };
                class 16aa_Disassemble_Javelin:16aa_Disassemble_Javelin{
                    statement = QUOTE([ARR_4(_target,_player,'16aa_tripod_middle',['16aa_javelin_launcher'])] call FUNC(disassembleTimer));
                };
            };
        };
    };
    class 16aa_Javelin_Static_raised: 16aa_Javelin_Static_base{
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class 16aa_AdjustHeightUp_Javelin{
                     condition = "false";
                };
                class 16aa_AdjustHeightDown_Javelin: 16aa_AdjustHeightUp_Javelin{
                    displayName = "Lower Tripod";
                    condition = "alive _target && count crew _target == 0";
                    statement = QUOTE([ARR_3(_target,'16aa_Javelin_Static_middle',_player)] call FUNC(adjustHeightTimer));
                };
                class 16aa_Disassemble_Javelin:16aa_Disassemble_Javelin{
                    statement = QUOTE([ARR_4(_target,_player,'16aa_tripod_raised',['16aa_javelin_launcher'])] call FUNC(disassembleTimer));
                };
            };
        };
    };
};