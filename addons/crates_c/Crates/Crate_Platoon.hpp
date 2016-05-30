	class 16AA_crate_platoon: 16aa_crate_empty_platoon {
		scope = 2;
		author = "3LSR";
		displayName = "Platoon";
		vehicleClass = "16aa_Crates";
		class TransportWeapons {
            MACRO_ADDWEAPON(16AA_L7A2,2);
            MACRO_ADDWEAPON(16aa_M1014_breacher,6);
        };
        class TransportItems {
            MACRO_ADDITEM(ACE_CableTie,20);
            MACRO_ADDITEM(ACE_bodyBag,10);
            MACRO_ADDITEM(ACE_Clacker,10);
            MACRO_ADDITEM(ACE_M26_Clacker,2);
            MACRO_ADDITEM(tf_anprc152,5);
            MACRO_ADDITEM(optic_NVS,2);
            MACRO_ADDITEM(optic_TWS,2);
            MACRO_ADDITEM(ACE_MapTools,10);
			MACRO_ADDITEM(ACE_MX2A,1);
			MACRO_ADDITEM(ACE_EntrenchingTool,8);
			MACRO_ADDITEM(ACE_SpraypaintBlue,2);
			MACRO_ADDITEM(ACE_SpraypaintBlack,2);
			MACRO_ADDITEM(ACE_SpraypaintGreen,2);
			MACRO_ADDITEM(ACE_SpraypaintRed,2);
			MACRO_ADDITEM(US_Facepaint,8);
			MACRO_ADDITEM(Serbian_Facepaint,8);
			MACRO_ADDITEM(BW_Facepaint,8);
			MACRO_ADDITEM(ACE_VMH3,4);
        };
        class TransportMagazines{
			MACRO_ADDMAGAZINE(16aa_200Rnd_762x51_belt_gpmg,12);
			MACRO_ADDMAGAZINE(16aa_50Rnd_762x51_belt_gpmg,12);
        	MACRO_ADDMAGAZINE(16aa_8Rnd_12Gauge_Pellets,35);
        	MACRO_ADDMAGAZINE(16aa_8Rnd_12Gauge_Slug,35);
        	MACRO_ADDMAGAZINE(ClaymoreDirectionalMine_Remote_Mag,3);
        	MACRO_ADDMAGAZINE(ATMine_Range_Mag,5);
        	MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,5);
        	MACRO_ADDMAGAZINE(B_IR_Grenade,8);
        	MACRO_ADDMAGAZINE(ACE_M84,20);
        	MACRO_ADDMAGAZINE(16aa_Smoke_Screening_White,10);
			MACRO_ADDMAGAZINE(16aa_Smoke_Signalling_Red,10);
			MACRO_ADDMAGAZINE(16aa_Smoke_Signalling_Blue,10);
        	MACRO_ADDMAGAZINE(16aa_Smoke_Signalling_Green,10);
			MACRO_ADDMAGAZINE(16aa_Smoke_signalling_Orange,10);
        	MACRO_ADDMAGAZINE(16aa_Smoke_Signalling_Purple,10);
        	MACRO_ADDMAGAZINE(chemlight_blue,30);
        	MACRO_ADDMAGAZINE(chemlight_red,30);
        	MACRO_ADDMAGAZINE(chemlight_green,30);
            MACRO_ADDMAGAZINE(16aa_chemlight_ir,30);
        	MACRO_ADDMAGAZINE(UGL_FlareRed_F,20);
        	MACRO_ADDMAGAZINE(UGL_FlareWhite_F,20);
        };
        class TransportBackpacks {
            MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_SL_L_A,3);
        };
	};