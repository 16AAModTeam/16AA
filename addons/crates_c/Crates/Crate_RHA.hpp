	class 16AA_crate_rha: 16aa_crate_empty_main {
		author = "Adams & Beazley";
		displayName = "7RHA";
		vehicleClass = "16aa_Crates";
		class TransportWeapons {
            MACRO_ADDWEAPON(16aa_Stinger_Launcher,2);
            MACRO_ADDWEAPON(16AA_L7A2,2);
        };
        class TransportItems {
            MACRO_ADDITEM(B_UavTerminal,3);
            MACRO_ADDITEM(Laserdesignator,3);
            MACRO_ADDITEM(Laserbatteries,20);
            MACRO_ADDITEM(ACE_MapTools,10);
            MACRO_ADDITEM(ACE_RangeTable_82mm,20);
            MACRO_ADDITEM(16aa_basha_roll_item,3);
        };
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(16aa_Stinger_M,8);
        	MACRO_ADDMAGAZINE(150Rnd_762x51_Box,8);
        };
        class TransportBackpack{
        	MACRO_ADDBACKPACK(B_UAV_01_backpack_F,2);
        	MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_Radio_L_A,5);
        };
	};