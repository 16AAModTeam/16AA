#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
		weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"LSR_common"};
        author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
    };
    class 16AA_crate_ammo {
    	units[] = {
			"16AA_container_ammo",
			"16AA_container_ammo_csw",
			"16AA_container_ammo_artillery_105",
			"16AA_container_ammo_artillery_81",
			"16AA_crate_csw_ammo",
			"16AA_crate_csw_ammo_50cal",
			"16AA_crate_csw_ammo_762",
			"16AA_crate_csw_ammo_40mm",
			"16AA_crate_artillery_105",
			"16AA_crate_artillery_105_he",
			"16AA_crate_artillery_105_wp",
			"16AA_crate_artillery_105_smoke",
			"16AA_crate_artillery_105_illum",
			"16AA_crate_artillery_81",
			"16AA_crate_artillery_81_he",
			"16AA_crate_artillery_81_illum",
			"16AA_crate_artillery_81_smoke_white",
			"16AA_crate_artillery_81_smoke_red",
			"16AA_crate_artillery_81_smoke_orange",
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
			"16AA_crate_ammo_explosives_detonator",
			"16AA_crate_ammo_launcher_at4",
			"16AA_crate_ammo_launcher_nlaw",
			"16AA_crate_ammo_launcher_stinger",
			"16AA_crate_ammo_launcher_javelin_tube",
			"16AA_crate_ammo_launcher_javelin_clu",
			"16AA_crate_ammo_misc",
			"16AA_backpack_resupply_section",
			"16AA_crate_ammo_bergen_section",
			"16AA_backpack_resupply_section_grenade",
			"16AA_crate_ammo_bergen_section_grenade"
		};
		requiredaddons[] = {"LSR_common","16aa_crates_a3"};
		requiredversion = REQUIRED_VERSION;
		author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
	};
	class 16AA_crate_16CSMR {
		units[] = {"16AA_crate_16CSMR"};
		requiredaddons[] = {"LSR_common","16aa_crates_a3"};
		requiredversion = REQUIRED_VERSION;
		author[] = {"Fletcher"};
        authorUrl = "";
        VERSION_CONFIG;
	};
	class 16AA_crate_csw {
		units[] = {"16AA_crate_csw"};
		requiredaddons[] = {"LSR_common","16aa_crates_a3"};
		requiredversion = REQUIRED_VERSION;
		author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
	};
	class 16AA_crate_equipment {
		units[] = {"16AA_crate_equipment"};
		requiredaddons[] = {"LSR_common","16aa_crates_a3"};
		requiredversion = REQUIRED_VERSION;
		author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
	};
	class 16AA_crate_flight {
		units[] = {"16AA_crate_flight"};
		requiredaddons[] = {"LSR_common","16aa_crates_a3"};
		requiredversion = REQUIRED_VERSION;
		author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
	};
	class 16AA_crate_fsg {
		units[] = {"16AA_crate_fsg"};
		requiredaddons[] = {"LSR_common","16aa_crates_a3"};
		requiredversion = REQUIRED_VERSION;
		author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
	};
	class 16AA_crate_main {
		units[] = {"16AA_crate_main"};
		requiredaddons[] = {"LSR_common","16aa_crates_a3"};
		requiredversion = REQUIRED_VERSION;
		author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
	};
	class 16AA_crate_medical {
		units[] = {"16AA_crate_medical","16aa_crate_medical_resupply_basic","16aa_crate_medical_resupply_advanced"};
		requiredaddons[] = {"LSR_common","16aa_crates_a3"};
		requiredversion = REQUIRED_VERSION;
		author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
	};
	class 16aa_crate_ordnance {
		units[] = {"16AA_crate_ordnance"};
		requiredaddons[] = {"LSR_common","16aa_crates_a3"};
		requiredversion = REQUIRED_VERSION;
		author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
	};
	class 16AA_crate_platoon {
		units[] = {"16AA_crate_platoon"};
		requiredaddons[] = {"LSR_common","16aa_crates_a3"};
		requiredversion = REQUIRED_VERSION;
		author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
	};
	class 16AA_crate_radio {
		units[] = {"16AA_crate_radio"};
		requiredaddons[] = {"LSR_common","16aa_crates_a3"};
		requiredversion = REQUIRED_VERSION;
		author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
	};
	class 16AA_crate_rha {
		units[] = {"16AA_crate_rha"};
		requiredaddons[] = {"LSR_common","16aa_crates_a3"};
		requiredversion = REQUIRED_VERSION;
		author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
	};
	class 16AA_crate_section {
		units[] = {"16AA_crate_section"};
		requiredaddons[] = {"LSR_common","16aa_crates_a3"};
		requiredversion = REQUIRED_VERSION;
		author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
	};
	class 16AA_crates_training
	{
		units[] = {"16AA_crate_training_main","16AA_crate_training_section","16AA_crate_csw_training"};
		requiredaddons[] = {"LSR_common","16aa_crates_a3"};
		requiredversion = REQUIRED_VERSION;
		author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
	};
};
#include "CfgVehicles.hpp"