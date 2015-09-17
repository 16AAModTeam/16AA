class CfgPatches {
	class 16AA_crate_ammo {
		requiredaddons[] = {"16aa_crates_a3"};
		requiredversion = 0.1;
		units[] = {
			"16AA_container_ammo",
			"16AA_container_ammo_artillery",
			"16AA_crate_csw_ammo",
			"16AA_crate_artillery_105",
			"16AA_crate_artillery_81",
			"16AA_crate_ammo_556_stanag",
			"16AA_crate_ammo_556_link",
			"16AA_crate_ammo_762_stanag",
			"16AA_crate_ammo_762_link",
			"16AA_crate_ammo_12ga",
			"16AA_crate_ammo_grenades_smoke",
			"16AA_crate_ammo_grenades_frag",
			"16AA_crate_ammo_grenades_flashbang",
			"16AA_crate_ammo_grenades_chemlight",
			"16AA_crate_ammo_grenades_40mm",
			"16AA_crate_ammo_explosives",
			"16AA_crate_ammo_launcher",
			"16AA_crate_ammo_misc"
		};
		weapons[] = {};
		magazines[] = {};
	};
};
class CfgVehicles {
	class 16aa_crate_empty_csw;
	class 16aa_crate_empty_artillery;
	class 16aa_crate_empty_wooden_large;
	class 16aa_crate_empty_wooden_small;
	class Land_Cargo20_military_green_F;
	class Cargo_base_F;
	class 16AA_container_ammo: Land_Cargo20_military_green_F{
		scope = 2;
		scopeCurator = 2;
		displayName = "Container - Ammo";
		vehicleClass = "16aa_Crates_Ammo";
		ace_cargo_space = 99;
        ace_caro_size = 100;
		class ACE_Cargo {
            class Cargo {
                class 16AA_crate_csw_ammo {
                    type = "16AA_crate_csw_ammo";
                    amount = 5;
                };
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
                    amount = 6;
                };
                class 16AA_crate_ammo_grenades_frag {
                    type = "16AA_crate_ammo_grenades_frag";
                    amount = 6;
                };
                class 16AA_crate_ammo_grenades_flashbang {
                    type = "16AA_crate_ammo_grenades_flashbang";
                    amount = 5;
                };
                class 16AA_crate_ammo_grenades_chemlight {
                    type = "16AA_crate_ammo_grenades_chemlight";
                    amount = 5;
                };
                class 16AA_crate_ammo_grenades_40mm {
                    type = "16AA_crate_ammo_grenades_40mm";
                    amount = 6;
                };
                class 16AA_crate_ammo_explosives {
                    type = "16AA_crate_ammo_explosives";
                    amount = 5;
                };
                class 16AA_crate_ammo_launcher {
                    type = "16AA_crate_ammo_launcher";
                    amount = 5;
                };
                class 16AA_crate_ammo_misc {
                    type = "16AA_crate_ammo_misc";
                    amount = 5;
                };
                class 16AA_crate_medical {
                    type = "16AA_crate_medical";
                    amount = 5;
                };
            };
        };
	};
	class 16AA_container_ammo_artillery: 16AA_container_ammo{
		scope = 2;
		scopeCurator = 2;
		displayName = "Container - Artillery Ammo";
		class ACE_Cargo {
            class Cargo {
                class 16AA_crate_artillery_105 {
                    type = "16AA_crate_artillery_105";
                    amount = 55;
                };
                class 16AA_crate_artillery_81 {
                    type = "16AA_crate_artillery_81";
                    amount = 40;
                };
            };
        };
	};
	class CargoNet_01_box_F;
	class 16AA_container_slingloading: CargoNet_01_box_F{
		scope = 2;
		scopeCurator = 2;
		displayName = "Container - Slingloading";
		vehicleClass = "16aa_Crates_Empty";
		ace_cargo_space = 20;
		ace_cargo_hasCargo = 1;
		ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;
        ace_cargo_size = 50;
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
	class 16AA_crate_ammo_556_stanag : 16aa_crate_empty_wooden_small {
		author = "3LSR";
		displayName = "5.56MM Stanag";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(30Rnd_556x45_Stanag,40);
        };
	};
	class 16AA_crate_ammo_556_link : 16aa_crate_empty_wooden_small {
		author = "3LSR";
		displayName = "5.56MM Link";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(sti_200Rnd_556x45,30);
        };
	};
	class 16AA_crate_ammo_762_stanag : 16aa_crate_empty_wooden_small {
		author = "3LSR";
		displayName = "7.62MM Stanag";
		vehicleClass = "16aa_Crates_Ammo";
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,40);
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
	class 16AA_crate_ammo_grenades_smoke : 16aa_crate_empty_wooden_small {
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
	class 16AA_crate_ammo_grenades_chemlight : 16aa_crate_empty_wooden_small {
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
	class 16AA_crate_ammo_grenades_40mm : 16aa_crate_empty_wooden_small {
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
        class TransportItems {
            MACRO_ADDITEM(ACE_M26_Clacker,10);
        };
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,5);
        	MACRO_ADDMAGAZINE(ATMine_Range_Mag,5);
        	MACRO_ADDMAGAZINE(ClaymoreDirectionalMine_Remote_Mag,3);
        };
	};
	class 16AA_crate_ammo_launcher: 16aa_crate_empty_wooden_large {
		author = "3LSR";
		displayName = "Launcher";
		vehicleClass = "16aa_Crates_Ammo";
		class TransportWeapons {
			MACRO_ADDWEAPON(16aa_AT4CSHP,10);
            MACRO_ADDWEAPON(launch_NLAW_F,10);
        };
        class TransportMagazines{
        	MACRO_ADDMAGAZINE(16aa_Stinger_M,10);
        	MACRO_ADDMAGAZINE(16aa_javelin_m,10);
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
        };
	};
};
