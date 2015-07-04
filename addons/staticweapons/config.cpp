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
            "16aa_dummy_item_ammobox_50cal",
            "16aa_dummy_item_ammobox_762",
            "16aa_dummy_item_ammobox_40mm"
		};
		weapons[] = 
        {
            "16aa_tripod",
            "16aa_static_item_l2a1_barrel",
            "16aa_static_item_l2a1_receiver",
            "16aa_static_item_gmg_barrel",
            "16aa_static_item_gmg_receiver",
            "16aa_static_ammobox_50cal",
            "16aa_static_ammobox_762",
            "16aa_static_ammobox_40mm"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"LSR_common"};
        author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"