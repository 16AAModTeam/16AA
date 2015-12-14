	class 16AA_crate_16CSMR: 16aa_crate_empty {
		author = "3LSR";
		displayName = "16CSMR";
		vehicleClass = "16aa_Crates";
		class TransportWeapons {
            MACRO_ADDWEAPON(16aa_M1014_breacher,6);
        };
        class TransportItems {
            MACRO_ADDITEM(16aa_optic_LDS,10);
            MACRO_ADDITEM(16aa_optic_LDS_2d,10);
            MACRO_ADDITEM(16aa_optic_LDS_pip,10);
            MACRO_ADDITEM(ACE_MapTools,10);
            MACRO_ADDITEM(ACE_bodyBag,10);
            MACRO_ADDITEM(16aa_tent_medical_roll_small_item,4);
            MACRO_ADDITEM(16aa_tent_medical_roll_medium_item,4);
        };
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(16aa_8Rnd_12Gauge_Pellets,35);
			MACRO_ADDMAGAZINE(16aa_8Rnd_12Gauge_Slug,35);
			MACRO_ADDMAGAZINE(SmokeShellYellow,10);
			MACRO_ADDMAGAZINE(SmokeShellBlue,10);
        	MACRO_ADDMAGAZINE(SmokeShellGreen,10);
        	MACRO_ADDMAGAZINE(SmokeShellPurple,10);
        	MACRO_ADDMAGAZINE(chemlight_blue,10);
        	MACRO_ADDMAGAZINE(chemlight_red,10);
        	MACRO_ADDMAGAZINE(chemlight_green,10);
            MACRO_ADDMAGAZINE(16aa_chemlight_ir,10);
        };
		class TransportBackpacks{
			MACRO_ADDBACKPACK(16aa_Carryall_16CSMR,4);
			MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_JTAC_L_A_SATCOM,3);
        };
	};