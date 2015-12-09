#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = 
        {
			"16aa_tripod_item",
			"16aa_tripod_base",
			"16aa_tripod_low",
			"16aa_tripod_middle",
			"16aa_tripod_raised",
            "16aa_dummy_item_l2a1_barrel",
            "16aa_dummy_item_l2a1_receiver",
            "16aa_dummy_item_gmg_barrel",
            "16aa_dummy_item_gmg_receiver",
            "16aa_dummy_item_l16_baseplate",
            "16aa_dummy_item_l16_bipod",
            "16aa_dummy_item_l16_tube",
            "16aa_dummy_item_ammobox_50cal",
            "16aa_dummy_item_ammobox_762",
            "16aa_dummy_item_ammobox_40mm",
            "16aa_dummy_item_l16_ammo_he",
            "16aa_dummy_item_l16_ammo_illum",
            "16aa_dummy_item_l16_ammo_smk_white",
            "16aa_dummy_item_l16_ammo_smk_red",
            "16aa_dummy_item_l16_ammo_smk_orange"
		};
		weapons[] = 
        {
            "16aa_tripod",
            "16aa_static_item_l2a1_barrel",
            "16aa_static_item_l2a1_receiver",
            "16aa_static_item_gmg_barrel",
            "16aa_static_item_gmg_receiver",
            "16aa_static_item_l16_baseplate",
            "16aa_static_item_l16_bipod",
            "16aa_static_item_l16_tube",
            "16aa_static_ammobox_50cal",
            "16aa_static_ammobox_762",
            "16aa_static_ammobox_40mm",
            "16aa_static_magazine_l16_he",
            "16aa_static_magazine_l16_illum",
            "16aa_static_magazine_l16_smoke_white",
            "16aa_static_magazine_l16_smoke_red",
            "16aa_static_magazine_l16_smoke_orange",
			"16aa_static_magazine_1Rnd_105mm_HE",
			"16aa_static_magazine_1Rnd_105mm_WP",
			"16aa_static_magazine_1Rnd_105mm_SMOKE",
			"16aa_static_magazine_1Rnd_105mm_ILLUM"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"LSR_common","16aa_crates_a3","16aa_weapons_support"};
        author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
