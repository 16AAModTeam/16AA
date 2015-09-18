	class 16AA_container_ammo: Land_Cargo20_military_green_F{
		scope = 2;
		scopeCurator = 2;
		displayName = "Container - Ammo";
		vehicleClass = "16aa_Crates_Ammo";
		ace_cargo_space = 150;
        ace_caro_size = 100;
		class ACE_Cargo {
            class Cargo {
                class 16AA_crate_ammo_556_stanag {
                    type = "16AA_crate_ammo_556_stanag";
                    amount = 10;
                };
                class 16AA_crate_ammo_556_link {
                    type = "16AA_crate_ammo_556_link";
                    amount = 10;
                };
                class 16AA_crate_ammo_762_stanag {
                    type = "16AA_crate_ammo_762_stanag";
                    amount = 10;
                };
                class 16AA_crate_ammo_762_link {
                    type = "16AA_crate_ammo_762_link";
                    amount = 10;
                };
                class 16AA_crate_ammo_12ga {
                    type = "16AA_crate_ammo_12ga";
                    amount = 5;
                };
                class 16AA_crate_ammo_grenades_smoke {
                    type = "16AA_crate_ammo_grenades_smoke";
                    amount = 5;
                };
                class 16AA_crate_ammo_grenades_frag {
                    type = "16AA_crate_ammo_grenades_frag";
                    amount = 5;
                };
                class 16AA_crate_ammo_grenades_flashbang {
                    type = "16AA_crate_ammo_grenades_flashbang";
                    amount = 5;
                };
                class 16AA_crate_ammo_grenades_chemlight {
                    type = "16AA_crate_ammo_grenades_chemlight";
                    amount = 2;
                };
                class 16AA_crate_ammo_grenades_40mm {
                    type = "16AA_crate_ammo_grenades_40mm";
                    amount = 5;
                };
                class 16AA_crate_ammo_explosives {
                    type = "16AA_crate_ammo_explosives";
                    amount = 5;
                };
                class 16AA_crate_ammo_explosives_detonator {
                    type = "16AA_crate_ammo_explosives_detonator";
                    amount = 5;
                };
                class 16AA_crate_ammo_launcher_at4 {
                    type = "16AA_crate_ammo_launcher_at4";
                    amount = 5;
                };
                class 16AA_crate_ammo_launcher_nlaw {
                    type = "16AA_crate_ammo_launcher_nlaw";
                    amount = 5;
                };
                class 16AA_crate_ammo_launcher_stinger {
                    type = "16AA_crate_ammo_launcher_stinger";
                    amount = 2;
                };
                class 16AA_crate_ammo_launcher_javelin_tube{
                    type = "16AA_crate_ammo_launcher_javelin_tube";
                    amount = 3;
                };
                 class 16AA_crate_ammo_launcher_javelin_clu{
                    type = "16AA_crate_ammo_launcher_javelin_clu";
                    amount = 2;
                };
                class 16AA_crate_ammo_misc {
                    type = "16AA_crate_ammo_misc";
                    amount = 2;
                };
                class 16AA_crate_medical {
                    type = "16AA_crate_medical";
                    amount = 2;
                };
            };
        };
	};
    class 16AA_container_ammo_csw: 16AA_container_ammo{
        scope = 2;
        scopeCurator = 2;
        displayName = "Container - CSW Ammo";
        class ACE_Cargo {
            class Cargo {
                class 16AA_crate_csw_ammo_50cal {
                    type = "16AA_crate_csw_ammo_50cal";
                    amount = 30;
                };
                class 16AA_crate_csw_ammo_762 {
                    type = "16AA_crate_csw_ammo_762";
                    amount = 30;
                };
                class 16AA_crate_csw_ammo_40mm {
                    type = "16AA_crate_csw_ammo_40mm";
                    amount = 30;
                };
            };
        };
    };
	class 16AA_container_ammo_artillery_105: 16AA_container_ammo{
		scope = 2;
		scopeCurator = 2;
		displayName = "Container - 105MM Ammo";
		class ACE_Cargo {
            class Cargo {
                class 16AA_crate_artillery_105_he {
                    type = "16AA_crate_artillery_105_he";
                    amount = 30;
                };
                class 16AA_crate_artillery_105_wp {
                    type = "16AA_crate_artillery_105_wp";
                    amount = 15;
                };

                class 16AA_crate_artillery_105_illum {
                    type = "16AA_crate_artillery_105_illum";
                    amount = 15;
                };

                class 16AA_crate_artillery_105_smoke {
                    type = "16AA_crate_artillery_105_smoke";
                    amount = 30;
                };
            };
        };
	};
    class 16AA_container_ammo_artillery_81: 16AA_container_ammo{
        scope = 2;
        scopeCurator = 2;
        displayName = "Container - 81MM Ammo";
        class ACE_Cargo {
            class Cargo {
                class 16aa_static_magazine_l16_he {
                    type = "16aa_static_magazine_l16_he";
                    amount = 20;
                };
                class 16aa_static_magazine_l16_illum {
                    type = "16aa_static_magazine_l16_illum";
                    amount = 10;
                };
                class 16aa_static_magazine_l16_smoke_white {
                    type = "16aa_static_magazine_l16_smoke_white";
                    amount = 20;
                };
                class 16aa_static_magazine_l16_smoke_red {
                    type = "16aa_static_magazine_l16_smoke_red";
                    amount = 20;
                };
                class 16aa_static_magazine_l16_smoke_orange {
                    type = "16aa_static_magazine_l16_smoke_orange";
                    amount = 20;
                };
            };
        };
    };

	class 16AA_container_slingloading: CargoNet_01_box_F{
		scope = 2;
		scopeCurator = 2;
		displayName = "Container - Slingloading";
		vehicleClass = "16aa_Crates_Empty";
		ace_cargo_space = 20;
		ace_cargo_hasCargo = 1;
		//ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;
	};
	class 16AA_crate_csw_ammo : 16aa_crate_empty_csw {
		author = "3LSR";
		displayName = "CSW";
		vehicleClass = "16aa_Crates_Ammo";
		class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_ammobox_50cal,50);
            MACRO_ADDMAGAZINE(16aa_static_magazine_ammobox_762,50);
            MACRO_ADDMAGAZINE(16aa_static_magazine_ammobox_40mm,50);
            MACRO_ADDMAGAZINE(16aa_javelin_m,50);
        };
	};
    class 16AA_crate_csw_ammo_50cal : 16aa_crate_empty_wooden_medium {
        author = "3LSR";
        displayName = "CSW - 50Cal";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_ammobox_50cal,5);
        };
    };
    class 16AA_crate_csw_ammo_762 : 16aa_crate_empty_wooden_medium {
        author = "3LSR";
        displayName = "CSW - 7.62MM";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_ammobox_762,5);
        };
    };
    class 16AA_crate_csw_ammo_40mm : 16aa_crate_empty_wooden_medium {
        author = "3LSR";
        displayName = "CSW - 40MM";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_ammobox_40mm,5);
        };
    };
	class 16AA_crate_artillery_105 : 16aa_crate_empty_artillery {
		author = "3LSR";
		displayName = "105MM";
		vehicleClass = "16aa_Crates_Ammo";
		class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_1Rnd_105mm_HE,50);
            MACRO_ADDMAGAZINE(16aa_static_magazine_1Rnd_105mm_WP,50);
            MACRO_ADDMAGAZINE(16aa_static_magazine_1Rnd_105mm_SMOKE,50);
            MACRO_ADDMAGAZINE(16aa_static_magazine_1Rnd_105mm_ILLUM,50);
        };
	};
    class 16AA_crate_artillery_105_he : 16aa_crate_empty_artillery {
        author = "3LSR";
        displayName = "105MM - HE";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_1Rnd_105mm_HE,2);
        };
    };
    class 16AA_crate_artillery_105_wp : 16aa_crate_empty_artillery {
        author = "3LSR";
        displayName = "105MM - WP";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_1Rnd_105mm_WP,2);
        };
    };
    class 16AA_crate_artillery_105_smoke : 16aa_crate_empty_artillery {
        author = "3LSR";
        displayName = "105MM - Smoke";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_1Rnd_105mm_SMOKE,2);
        };
    };
    class 16AA_crate_artillery_105_illum : 16aa_crate_empty_artillery {
        author = "3LSR";
        displayName = "105MM - Illum";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_1Rnd_105mm_ILLUM,2);
        };
    };
	class 16AA_crate_artillery_81 : 16aa_crate_empty_wooden_large {
		author = "3LSR";
		displayName = "81MM";
		vehicleClass = "16aa_Crates_Ammo";
		class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_he,50);
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_illum,50);
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_smoke_white,50);
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_smoke_red,50);
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_smoke_orange,50);
        };
	};
    class 16AA_crate_artillery_81_he : 16aa_crate_empty_wooden_large {
        author = "3LSR";
        displayName = "81MM - HE";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_he,4);
        };
    };
    class 16AA_crate_artillery_81_illum : 16aa_crate_empty_wooden_large {
        author = "3LSR";
        displayName = "81MM - Illum";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_illum,4);
        };
    };
    class 16AA_crate_artillery_81_smoke_white : 16aa_crate_empty_wooden_large {
        author = "3LSR";
        displayName = "81MM - Smoke (White)";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_smoke_white,4);
        };
    };
    class 16AA_crate_artillery_81_smoke_red : 16aa_crate_empty_wooden_large {
        author = "3LSR";
        displayName = "81MM - Smoke (Red)";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_smoke_red,4);
        };
    };
    class 16AA_crate_artillery_81_smoke_orange : 16aa_crate_empty_wooden_large {
        author = "3LSR";
        displayName = "81MM - Smoke (Orange)";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_static_magazine_l16_smoke_orange,4);
        };
    };
	class 16AA_crate_ammo_556_stanag : 16aa_crate_empty_wooden_small {
		author = "3LSR";
		displayName = "5.56MM Stanag";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(30Rnd_556x45_Stanag,30);
        };
	};
	class 16AA_crate_ammo_556_link : 16aa_crate_empty_wooden_small {
		author = "3LSR";
		displayName = "5.56MM Link";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(sti_200Rnd_556x45,10);
        };
	};
	class 16AA_crate_ammo_762_stanag : 16aa_crate_empty_wooden_small {
		author = "3LSR";
		displayName = "7.62MM Stanag";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,20);
        };
	};
	class 16AA_crate_ammo_762_link : 16aa_crate_empty_wooden_small {
		author = "3LSR";
		displayName = "7.62MM Link";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(16aa_150Rnd_762x51_box_gpmg,10);
        };
	};
	class 16AA_crate_ammo_12ga: 16aa_crate_empty_wooden_small {
		author = "3LSR";
		displayName = "12 Guage";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(16aa_8Rnd_12Gauge_Slug,20);
        	MACRO_ADDMAGAZINE(16aa_8Rnd_12Gauge_Pellets,20);

        };
	};
	class 16AA_crate_ammo_grenades_smoke : 16aa_crate_empty_wooden_medium {
		author = "3LSR";
		displayName = "Smoke Grenades";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(SmokeShellRed,20);
        	MACRO_ADDMAGAZINE(SmokeShellYellow,20);
        	MACRO_ADDMAGAZINE(SmokeShellBlue,20);
        	MACRO_ADDMAGAZINE(SmokeShellGreen,20);
        	MACRO_ADDMAGAZINE(SmokeShellPurple,20);
        };
	};
	class 16AA_crate_ammo_grenades_frag : 16aa_crate_empty_wooden_small {
		author = "3LSR";
		displayName = "Frag Grenades";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(16AA_HandGrenade,20);
        };
	};
	class 16AA_crate_ammo_grenades_flashbang : 16aa_crate_empty_wooden_small {
		author = "3LSR";
		displayName = "Flashbangs";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(ACE_M84,20);
        };
	};
	class 16AA_crate_ammo_grenades_chemlight : 16aa_crate_empty_wooden_medium {
		author = "3LSR";
		displayName = "Chemlight/IR";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(chemlight_blue,20);
        	MACRO_ADDMAGAZINE(chemlight_red,20);
        	MACRO_ADDMAGAZINE(chemlight_green,20);
        	MACRO_ADDMAGAZINE(B_IR_Grenade,20);
        };
	};
	class 16AA_crate_ammo_grenades_40mm : 16aa_crate_empty_wooden_medium {
		author = "3LSR";
		displayName = "40MM";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(1Rnd_SmokeRed_Grenade_shell,20);
        	MACRO_ADDMAGAZINE(1Rnd_SmokeBlue_Grenade_shell,20);
        	MACRO_ADDMAGAZINE(1Rnd_SmokeYellow_Grenade_shell,20);
        	MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,20);
        	MACRO_ADDMAGAZINE(UGL_FlareWhite_F,20);
        	MACRO_ADDMAGAZINE(UGL_FlareRed_F,20);
        };
	};
	class 16AA_crate_ammo_explosives: 16aa_crate_empty_wooden_large {
		author = "3LSR";
		displayName = "Explosives";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(ATMine_Range_Mag,5);
        	MACRO_ADDMAGAZINE(ClaymoreDirectionalMine_Remote_Mag,5);
        };
	};
    class 16AA_crate_ammo_explosives_detonator: 16aa_crate_empty_wooden_medium {
        author = "3LSR";
        displayName = "Explosives (Clacker)";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportItems {
            MACRO_ADDITEM(ACE_M26_Clacker,5);
        };
        class TransportMagazines{
            MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,5);
        };
    };
	class 16AA_crate_ammo_launcher_at4: 16aa_crate_empty_wooden_large {
		author = "3LSR";
		displayName = "Launcher (AT4)";
		vehicleClass = "16aa_Crates_Ammo";
		class TransportWeapons {
			MACRO_ADDWEAPON(16aa_AT4CSHP,2);
        };
	};
    class 16AA_crate_ammo_launcher_nlaw: 16aa_crate_empty_wooden_large {
        author = "3LSR";
        displayName = "Launcher (NLAW)";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportWeapons {
            MACRO_ADDWEAPON(launch_NLAW_F,2);
        };
    };
    class 16AA_crate_ammo_launcher_stinger: 16aa_crate_empty_wooden_large {
        author = "3LSR";
        displayName = "Launcher (Stinger)";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_Stinger_M,2);
        };
    };
    class 16AA_crate_ammo_launcher_javelin_tube: 16aa_crate_empty_wooden_large {
        author = "3LSR";
        displayName = "Javelin Tubes";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
            MACRO_ADDMAGAZINE(16aa_javelin_m,2);
        };
    };
     class 16AA_crate_ammo_launcher_javelin_clu: 16aa_crate_empty_wooden_large {
        author = "3LSR";
        displayName = "Javelin Clu";
        vehicleClass = "16aa_Crates_Ammo";
        class TransportWeapons {
            MACRO_ADDWEAPON(16aa_javelin_launcher,1);
        };
    };
	class 16AA_crate_ammo_misc: 16aa_crate_empty_wooden_large {
		author = "3LSR";
		displayName = "Miscellaneous";
		vehicleClass = "16aa_Crates_Ammo";
		class TransportItems {
            MACRO_ADDITEM(ACE_CableTie,40);
        };
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(16aa_cone,30);
        	MACRO_ADDMAGAZINE(16aa_sign_road_closed,15);
        	MACRO_ADDMAGAZINE(16aa_sign_checkpoint,15);
            MACRO_ADDITEM(ACE_Sandbag_empty,50);
        };
	};
