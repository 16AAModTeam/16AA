class CfgVehicles
{
    //Self Interactions
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(lowerHeadset) {
                    displayName = "Lower Headset";
                    condition = QUOTE([ARR_1(_player)] call FUNC(canLowerHeadset));
                    statement = QUOTE([ARR_1(_player)] call FUNC(lowerHeadset));
                    showDisabled = 0;
                    priority = 2;
                    icon = PATHTOF(UI\icon_headset.paa);
                };
                class GVAR(raiseHeadset) {
                    displayName = "RaiseHeadset";
                    condition = QUOTE([ARR_1(_player)] call FUNC(canRaiseHeadset));
                    statement = QUOTE([ARR_1(_player)] call FUNC(raiseHeadset));
                    showDisabled = 0;
                    priority = 3;
                    icon = PATHTOF(UI\icon_headset.paa);
                };
            };
        };
    };
};