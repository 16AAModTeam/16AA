class CfgVehicles
{
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(repack_bandolier) {
                    displayName = "Repacking Using Bandolier";
                    condition = QUOTE(_player call FUNC(canRepack));
                    statement = QUOTE([ARR_3(_player,'16aa_basha_roll_item','16aa_Basha_Small')] call lsr_staticweapons_fnc_placeTimer);
                    showDisabled = 0;
                    priority = 2;
                    picture = "\16aa_tents\icon\Small.paa";
                };
            };
        };
    };
};