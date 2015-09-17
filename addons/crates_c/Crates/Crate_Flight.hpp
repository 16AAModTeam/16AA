class CfgPatches {
	class 16AA_crate_flight {
		requiredaddons[] = {"16aa_crates_a3"};
		requiredversion = 0.1;
		units[] = {"16AA_crate_flight"};
		weapons[] = {};
		magazines[] = {};
	};
};

class CfgVehicles {
	class 16aa_crate_empty;	// External class reference

	class 16AA_crate_flight : 16aa_crate_empty {
		author = "Adams & Beazley";
		displayName = "Flight";
		vehicleClass = "16aa_Crates";
		class TransportWeapons {
            MACRO_ADDWEAPON(16aa_l22_e,10);
        };
        class TransportItems {
            MACRO_ADDITEM(16aa_H_Mk7_Camo_E,12);
            MACRO_ADDITEM(H_Cap_headphones,12);
            MACRO_ADDITEM(RAF_Ground_Crew_Headset,12);
            MACRO_ADDITEM(RAF_Fighter_Pilot_Helmet_Green_Open,12);
            MACRO_ADDITEM(16aa_Osprey_R,10);
            MACRO_ADDITEM(16aa_H_PilotHelmetHeli_B,10);
            MACRO_ADDITEM(16aa_FieldUniform1_RAF,10);
            MACRO_ADDITEM(RAF_Fighter_Pilot_Vest,10);
            MACRO_ADDITEM(RAF_Fighter_Pilot_Outfit1,10);
            MACRO_ADDITEM(RAF_Fighter_Pilot_Outfit2,10);
            MACRO_ADDITEM(RAF_Fighter_Pilot_Outfit3,10);
            MACRO_ADDITEM(RAF_Fighter_Pilot_Outfit4,10);
            MACRO_ADDITEM(ACE_MapTools,10);
        };
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(30Rnd_556x45_Stanag,40);
        };
        class TransportBackpacks{
        	MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_Radio_L_B,20);
        	MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_JTAC_L_A_SATCOM,2);
        };
	};
};
