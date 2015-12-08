	class 16AA_crate_radio: 16aa_crate_empty {
		scope = 2;
		author = "3LSR";
		displayName = "Radio";
		vehicleClass = "16aa_Crates";
        class TransportItems {
            MACRO_ADDITEM(tf_anprc152,10);
            MACRO_ADDITEM(tf_rf7800str,10);
        };
        class TransportBackpacks{
        	MACRO_ADDBACKPACK(tf_rt1523g,10);
        	MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_SL_L_A,10);
        	MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_JTAC_L_A_SATCOM,10);
        	MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_Radio_L_A,10);
        	MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_Radio_L_B,10);
        	MACRO_ADDBACKPACK(16aa_B_Bergen_MTP_JTAC_L_A,10);
        };
	};