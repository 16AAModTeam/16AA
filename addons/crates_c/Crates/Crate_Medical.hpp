class CfgPatches {
	class 16AA_crate_medical {
		requiredaddons[] = {"16aa_crates_a3"};
		requiredversion = 0.1;
		units[] = {"16AA_crate_medical"};
		weapons[] = {};
		magazines[] = {};
	};
};

class CfgVehicles {
	class 16aa_crate_empty_medical;	// External class reference

	class 16AA_crate_medical : 16aa_crate_empty_medical {
		author = "Adams & Beazley";
		displayName = "Medical";
		vehicleClass = "16aa_Crates";
        class TransportItems {
            MACRO_ADDITEM(ACE_fieldDressing,45);
            MACRO_ADDITEM(ACE_packingBandage,25);
            MACRO_ADDITEM(ACE_elasticBandage,25);
            MACRO_ADDITEM(ACE_tourniquet,15);
            MACRO_ADDITEM(ACE_morphine,15);
            MACRO_ADDITEM(ACE_atropine,15);
            MACRO_ADDITEM(ACE_epinephrine,15);
            MACRO_ADDITEM(ACE_plasmaIV,7);
            MACRO_ADDITEM(ACE_plasmaIV_500,7);
            MACRO_ADDITEM(ACE_plasmaIV_250,7);
            MACRO_ADDITEM(ACE_salineIV,7);
            MACRO_ADDITEM(ACE_salineIV_500,7);
            MACRO_ADDITEM(ACE_salineIV_250,7);
            MACRO_ADDITEM(ACE_bloodIV,7);
            MACRO_ADDITEM(ACE_bloodIV_500,7);
            MACRO_ADDITEM(ACE_bloodIV_250,7);
            MACRO_ADDITEM(ACE_quikClot,20);
            MACRO_ADDITEM(ACE_personalAidKit,3);
            MACRO_ADDITEM(ACE_surgicalKit,2);
            MACRO_ADDITEM(ACE_bodyBag,25);
            MACRO_ADDITEM(16aa_tent_medical_roll_small_item,4);
            MACRO_ADDITEM(16aa_tent_medical_roll_medium_item,4);
        };
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(SmokeShellGreen,10);
        	MACRO_ADDMAGAZINE(SmokeShellPurple,10);
        };
	};
};
