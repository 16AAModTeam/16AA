class CfgPatches {
	class 16AA_crate_equipment {
		requiredaddons[] = {"16aa_crates_a3"};
		requiredversion = 0.1;
		units[] = {"16AA_crate_equipment"};
		weapons[] = {};
		magazines[] = {};
	};
};

class CfgVehicles {
	class 16aa_crate_empty;	// External class reference

	class 16AA_crate_equipment : 16aa_crate_empty {
		author = "Adams & Beazley";
		displayName = "Equipment";
		vehicleClass = "16aa_Crates";
        class TransportItems {
            MACRO_ADDITEM(16aa_H_Mk7_Camo_E,20);
            MACRO_ADDITEM(16aa_Osprey_R,20);
            MACRO_ADDITEM(16aa_HMNVS,20);
            MACRO_ADDITEM(16aa_FieldUniform1_2Para,20);
            MACRO_ADDITEM(16aa_G_Tactical_Clear,20);
            MACRO_ADDITEM(16aa_G_Tactical_Clear_ACE,20);
            MACRO_ADDITEM(16aa_G_Tactical_Yellow,20);
            MACRO_ADDITEM(16aa_G_Tactical_Yellow_ACE,20);
            MACRO_ADDITEM(16aa_G_Tactical_Black,20);
            MACRO_ADDITEM(16aa_G_Tactical_Black_ACE,20);
        };
        class TransportBackpacks{
        	MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_Rifleman_L_A,20);
        };
    };
};
