class CfgPatches {
	class 16AA_crate_csw {
		requiredaddons[] = {16aa_crates_a3};
		requiredversion = 0.1;
		units[] = {"16AA_crate_csw"};
		weapons[] = {};
		magazines[] = {};
	};
};

class CfgVehicles {
	class 16aa_crate_empty_csw;	// External class reference

	class 16AA_crate_csw : 16aa_crate_empty_csw {
		scope = public;
		author = "3LSR";
		displayName = "CSW";
		vehicleClass = "16aa_Crates";
		 class TransportWeapons {
            MACRO_ADDWEAPON(16aa_javelin_launcher,15);
            MACRO_ADDWEAPON(16aa_l7a2,15);
        };
        class TransportItems {
            MACRO_ADDITEM(16aa_tripod,75);
            MACRO_ADDITEM(16aa_static_item_l2a1_barrel,15);
            MACRO_ADDITEM(16aa_static_item_l2a1_receiver,15);
            MACRO_ADDITEM(16aa_static_item_gmg_barrel,15);
            MACRO_ADDITEM(16aa_static_item_gmg_receiver,15);
            MACRO_ADDITEM(16aa_static_item_l16_baseplate,15);
            MACRO_ADDITEM(16aa_static_item_l16_tube,15);
            MACRO_ADDITEM(ACE_Sandbag_empty,50);
        };
	};
};
