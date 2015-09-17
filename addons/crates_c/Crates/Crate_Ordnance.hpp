	class 16AA_crate_ordnance: 16aa_crate_empty_launchers {
		author = "Adams & Beazley";
		displayName = "Ordnance";
		vehicleClass = "16aa_Crates";
		class TransportWeapons {
            MACRO_ADDWEAPON(16aa_AT4CSHP,30);
            MACRO_ADDWEAPON(launch_NLAW_F,30);
        };
        class TransportItems {
            MACRO_ADDITEM(ACE_M26_Clacker,50);
        };
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,15);
        	MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,20);
        	MACRO_ADDMAGAZINE(ClaymoreDirectionalMine_Remote_Mag,20);
        	MACRO_ADDMAGAZINE(ATMine_Range_Mag,20);
        	MACRO_ADDMAGAZINE(16AA_HandGrenade,50);
        	MACRO_ADDMAGAZINE(NLAW_F,50);
        };
	};