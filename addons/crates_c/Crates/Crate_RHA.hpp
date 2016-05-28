	class 16AA_crate_rha: 16aa_crate_empty_main {
		author = "3LSR";
		displayName = "7RHA";
		vehicleClass = "16aa_Crates";
		class TransportWeapons {
            MACRO_ADDWEAPON(16aa_Stinger_Launcher,2);
        };
        class TransportItems {
            MACRO_ADDITEM(B_UavTerminal,3);
            MACRO_ADDITEM(Laserdesignator,3);
            MACRO_ADDITEM(Laserbatteries,10);
            MACRO_ADDITEM(ACE_MapTools,2);
            MACRO_ADDITEM(ACE_RangeTable_82mm,2);
            MACRO_ADDITEM(ACE_UAVBattery,5);
            MACRO_ADDITEM(16aa_basha_roll_item,3);
            MACRO_ADDITEM(16aa_vest_hivis_yellow,2);
			MACRO_ADDITEM(ACE_EntrenchingTool,5);
			MACRO_ADDITEM(16aa_static_item_l16_baseplate,3);
            MACRO_ADDITEM(16aa_static_item_l16_tube,3);
			MACRO_ADDITEM(ACE_SpraypaintBlue,2);
			MACRO_ADDITEM(ACE_SpraypaintBlack,2);
			MACRO_ADDITEM(ACE_SpraypaintGreen,2);
			MACRO_ADDITEM(ACE_SpraypaintRed,2);
			MACRO_ADDITEM(US_Facepaint,8);
			MACRO_ADDITEM(Serbian_Facepaint,8);
			MACRO_ADDITEM(BW_Facepaint,8);
        };
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(16aa_Stinger_M,8);
			MACRO_ADDMAGAZINE(16aa_Smoke_Signalling_Blue,5);
        };
        class TransportBackpacks{
        	MACRO_ADDBACKPACK(B_UAV_01_backpack_F,2);
            MACRO_ADDBACKPACK(16aa_Carryall_2Para,4);
        	MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_Radio_L_A,2);
        };
	};