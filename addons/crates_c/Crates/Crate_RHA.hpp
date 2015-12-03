	class 16AA_crate_rha: 16aa_crate_empty_main {
		author = "Adams & Beazley";
		displayName = "7RHA";
		vehicleClass = "16aa_Crates";
		class TransportWeapons {
            MACRO_ADDWEAPON(16aa_Stinger_Launcher,2);
        };
        class TransportItems {
            MACRO_ADDITEM(B_UavTerminal,3);
            MACRO_ADDITEM(Laserdesignator,3);
            MACRO_ADDITEM(Laserbatteries,20);
            MACRO_ADDITEM(ACE_MapTools,10);
            MACRO_ADDITEM(ACE_RangeTable_82mm,20);
            MACRO_ADDITEM(ACE_UAVBattery,10);
            MACRO_ADDITEM(16aa_basha_roll_item,3);
            MACRO_ADDITEM(16aa_helmet_hivis_yellow,10);
            MACRO_ADDITEM(16aa_vest_hivis_yellow,10);
        };
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(16aa_Stinger_M,8);
        };
        class TransportBackpacks{
        	MACRO_ADDBACKPACK(B_UAV_01_backpack_F,2);
            MACRO_ADDBACKPACK(16aa_Carryall_2Para,4);
        	MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_Radio_L_A,5);
        };
	};