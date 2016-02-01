	class 16AA_crate_medical: 16aa_crate_empty_medical {
		author = "3LSR";
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
        };
        class TransportMagazines{};
	};
	class 16aa_crate_medical_resupply_basic: 16aa_crate_empty_medical{
		author = "3LSR";
		displayName = "Medical Resupply - Basic";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportItems {
            MACRO_ADDITEM(ACE_fieldDressing,25);
            MACRO_ADDITEM(ACE_packingBandage,25);
            MACRO_ADDITEM(ACE_elasticBandage,25);
            MACRO_ADDITEM(ACE_tourniquet,15);
            MACRO_ADDITEM(ACE_morphine,15);
			MACRO_ADDITEM(ACE_salineIV_500,7);
        };
        class TransportMagazines{};
	};
	class 16aa_crate_medical_resupply_advanced: 16aa_crate_empty_medical{
		author = "3LSR";
		displayName = "Medical Resupply - Advanced";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportItems {
            MACRO_ADDITEM(ACE_atropine,15);
            MACRO_ADDITEM(ACE_epinephrine,15);
            MACRO_ADDITEM(ACE_salineIV,7);
            MACRO_ADDITEM(ACE_quikClot,20);
            MACRO_ADDITEM(ACE_personalAidKit,1);
            MACRO_ADDITEM(ACE_surgicalKit,1);
        };
        class TransportMagazines{};
	};