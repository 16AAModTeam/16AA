class CfgPatches {
	class 16AA_crate_platoon {
		requiredaddons[] = {"16aa_crates_a3"};
		requiredversion = 0.1;
		units[] = {"16AA_crate_platoon"};
		weapons[] = {};
		magazines[] = {};
	};
};

class CfgAddons {
	class PreloadAddons {
		class 16AA_crate_platoon {
			list[] = {"16AA_crate_platoon"};
		};
	};
};

class CfgVehicles {
	class 16aa_crate_empty_platoon;	// External class reference

	class 16AA_crate_platoon : 16aa_crate_empty_platoon {
		scope = public;
		author = "Adams & Beazley";
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
        };
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(16aa_150Rnd_762x51_box_gpmg,12);
        	MACRO_ADDMAGAZINE(16aa_8Rnd_12Gauge_Pellets,35);
        	MACRO_ADDMAGAZINE(16aa_8Rnd_12Gauge_Slug,35);
        	MACRO_ADDMAGAZINE(ClaymoreDirectionalMine_Remote_Mag,3);
        	MACRO_ADDMAGAZINE(ATMine_Range_Mag,5);
        	MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,5);
        	MACRO_ADDMAGAZINE(B_IR_Grenade,8);
        	MACRO_ADDMAGAZINE(ACE_M84,20);
        	MACRO_ADDMAGAZINE(SmokeShellBlue,5);
        	MACRO_ADDMAGAZINE(SmokeShellGreen,5);
        	MACRO_ADDMAGAZINE(SmokeShellPurple,5);
        	MACRO_ADDMAGAZINE(chemlight_blue,20);
        	MACRO_ADDMAGAZINE(chemlight_red,20);
        	MACRO_ADDMAGAZINE(chemlight_green,20);
        	MACRO_ADDMAGAZINE(UGL_FlareRed_F,20);
        	MACRO_ADDMAGAZINE(UGL_FlareWhite_F,20);
        };
        class TransportBackpacks {
            MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_SL_L_A,3);
        };
	};
};
