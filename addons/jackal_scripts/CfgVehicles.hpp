class CfgVehicles{
	class LandVehicle;	// External class reference

	class Car : LandVehicle {
		 class ACE_Actions {
            class ACE_MainActions;
        };
	};

	class Car_F : Car {
		 class ACE_Actions: ACE_Actions{
            class ACE_MainActions: ACE_MainActions{};
		 };
	};
	class 16aa_Jackal2_BASE_D : Car_F {
		class ACE_Actions: ACE_Actions{
            class ACE_MainActions;
            /*
            ACE_MainActions{
                class 16aa_Debug {
                displayName = "Debug";
                distance = 5;
                condition = true;
                statement = QUOTE([ARR_2(_target,_player)] call FUNC(debug));
                showDisabled = 0;
                exceptions[] = {};
                priority = 5;
                };
            };
            */
            class 16aa_Dismount_GPMG {
                //position = "[1,0,0.5]";
                selection = "GPMG";
                displayName = "Dismount GPMG";
                distance = 5;
                condition = QUOTE([ARR_2(_target,_player)] call FUNC(canDismount));
                statement = QUOTE([ARR_2(_target,_player)] call FUNC(dismountGPMGTimer));
                showDisabled = 0;
                exceptions[] = {};
                priority = 5;
            };
            class 16aa_Mount_GPMG {
                //position = "[0,1,0.5]";
                selection = "GPMG";
                displayName = "Mount GPMG";
                distance = 5;
                condition = QUOTE([ARR_2(_target,_player)] call FUNC(canMount));
                statement = QUOTE([ARR_2(_target,_player)] call FUNC(mountGPMGTimer));
                showDisabled = 0;
                exceptions[] = {};
                priority = 5;
            };
		 };
	};
};