class RscTitles
{
    class RscPicture;
    class RscLSRLoweredHeadset
    {
        idd=-1;
        onLoad="with uiNameSpace do { RscLSRLoweredHeadset = _this select 0 };";
        name = "RscLSRLoweredHeadset";
        movingEnable=0;
        duration=99999;
        class controls
        {
            class headsetIcon: RscPicture
            {
                idc=-1;
                style = 48;
                text= PATHTOF(ui\icon_headset.paa);
                x="SafeZoneX + 0.001";
                y="SafeZoneY + 0.001";
                w=0.1;
                h=0.1*4/3;
            };
        };
    };
};