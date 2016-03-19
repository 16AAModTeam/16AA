	class 16AA_crate_fsg: 16aa_crate_empty_main {
		author = "3LSR";
		displayName = "FSG";
		vehicleClass = "16aa_Crates";
		class TransportWeapons {
            MACRO_ADDWEAPON(16aa_L129A1_HG_Bipod,1);
            MACRO_ADDWEAPON(16aa_l85a2_ris_e_r,2);
            MACRO_ADDWEAPON(16aa_l85a2_ugl_ladder_e_r,2);
            MACRO_ADDWEAPON(16AA_L7A2,3);
            MACRO_ADDWEAPON(16aa_l110a2_mk1,3);
            MACRO_ADDWEAPON(16aa_AT4CSHP,2);
            MACRO_ADDWEAPON(16aa_javelin_launcher,3);
            MACRO_ADDWEAPON(16aa_l115a3,1);
			MACRO_ADDWEAPON(16aa_Stinger_Launcher,4);
        };
        class TransportItems {
            MACRO_ADDITEM(tf_anprc152,5);
            MACRO_ADDITEM(Laserdesignator,2);
            MACRO_ADDITEM(Laserbatteries,2);
            MACRO_ADDITEM(itemGPS,1);
            MACRO_ADDITEM(16aa_optic_LDS_2d,4);
            MACRO_ADDITEM(16aa_optic_LDS_pip,4);
            MACRO_ADDITEM(RKSL_optic_PMII_312,2);
            MACRO_ADDITEM(16aa_HMNVS,8);
            MACRO_ADDITEM(optic_NVS,4);
            MACRO_ADDITEM(16aa_llm_mk3_lz,4);
            MACRO_ADDITEM(RH_ta648,2);
			MACRO_ADDITEM(16aa_ToolKit,1);
			MACRO_ADDITEM(ACE_Kestrel4500,1);
			MACRO_ADDITEM(16aa_tripod,2);
			MACRO_ADDITEM(ACE_EntrenchingTool,4);
			MACRO_ADDITEM(16aa_tripod,2);
			MACRO_ADDITEM(ACE_SpraypaintBlue,2);
			MACRO_ADDITEM(ACE_SpraypaintBlack,2);
			MACRO_ADDITEM(ACE_SpraypaintGreen,2);
			MACRO_ADDITEM(ACE_SpraypaintRed,2);
        };
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(16aa_150Rnd_762x51_box_gpmg,20);
            MACRO_ADDMAGAZINE(sti_200Rnd_556x45,20);
        	MACRO_ADDMAGAZINE(30Rnd_556x45_Stanag,50);
        	MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,20);
        	MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,20);
        	MACRO_ADDMAGAZINE(1Rnd_SmokeYellow_Grenade_shell,40);
        	MACRO_ADDMAGAZINE(16aa_javelin_m,10);
        	MACRO_ADDMAGAZINE(16aa_5x338_Mag,10);
        };
        class TransportBackpacks{
        	MACRO_ADDBACKPACK(16aa_Carryall_2Para,2);
			MACRO_ADDBACKPACK(B_Kitbag_MTP,4);
        	MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_Radio_L_B,2);
			MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_JTAC_L_A_SATCOM,1);
        };
	};