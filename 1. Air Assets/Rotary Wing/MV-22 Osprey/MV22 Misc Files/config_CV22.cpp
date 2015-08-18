class RCWSOptics;
class CfgPatches
{
	class USAF_CV22
	{
		units[]=
		{
			"USAF_CV22"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F"
		};
	};
};
class IGUIBack;
class RscFrame;
class RscPicture;
class RscCombo;
class RscButtonMenu;
class USAF_CV22_RscButtonMenu: RscButtonMenu
{
	animTextureNormal="\USAF_CV22\data\UI\USAF_CV22_GUI_main_button_normal_ca.paa";
	animTextureDisabled="\USAF_CV22\data\UI\USAF_CV22_GUI_main_button_disabled_ca.paa";
	animTextureOver="\USAF_CV22\data\UI\USAF_CV22_GUI_main_button_over_ca.paa";
	animTextureFocused="\USAF_CV22\data\UI\USAF_CV22_GUI_main_button_focus_ca.paa";
	animTexturePressed="\USAF_CV22\data\UI\USAF_CV22_GUI_main_button_down_ca.paa";
	animTextureDefault="\USAF_CV22\data\UI\USAF_CV22_GUI_main_button_default_ca.paa";
	colorBackground[]={0,0,0,0.80000001};
	colorBackground2[]={1,1,1,0.5};
	color[]={1,1,1,1};
	color2[]={1,1,1,1};
	colorText[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.25};
};
class USAF_CV22_MAIN_UI
{
	idd=3000;
	movingenable="false";
	onLoad="uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class USAF_CV22_MAIN_BOX_1200: RscPicture
		{
			idc=1200;
			x="safezoneX";
			y="safezoneY";
			w="0.1 + safezoneW";
			h="0.1 + safezoneH";
			text="\USAF_CV22\data\UI\USAF_CV22_GUI_background.paa";
		};
		class USAF_CV22_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc=1204;
			text="\USAF_CV22\data\UI\USAF_CV22_GUI_main_menu.paa";
			x="0 * safezoneW + safezoneX";
			y="0.052 * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="0.84 * safezoneH";
		};
		class USAF_CV22_MAIN_FRAME: RscFrame
		{
			idc=1205;
			x="0.005 * safezoneW + safezoneX";
			y="0.005 * safezoneH + safezoneY";
			w="0.99 * safezoneW";
			h="0.99 * safezoneH";
		};
		class USAF_CV22_LOADOUTS_BUTTON_1610: USAF_CV22_RscButtonMenu
		{
			idc=1610;
			x="0.456693 * safezoneW + safezoneX";
			y="0.23114 * safezoneH + safezoneY";
			w="0.0826794 * safezoneW";
			h="0.13723 * safezoneH";
			text="";
			size=0.023;
			tooltip="Loadout selection menu";
			action="[]Spawn USAF_CV22_LOADOUTS_UI";
		};
		class USAF_CV22_SKINS_BUTTON_1611: USAF_CV22_RscButtonMenu
		{
			idc=1611;
			x="0.312332 * safezoneW + safezoneX";
			y="0.418782 * safezoneH + safezoneY";
			w="0.0826794 * safezoneW";
			h="0.13723 * safezoneH";
			text="";
			size=0.023;
			tooltip="Paint schemes library menu";
			action="[]Spawn USAF_CV22_SKINS_UI";
		};
		class USAF_CV22_OPTIONS_BUTTON_1612: USAF_CV22_RscButtonMenu
		{
			idc=1612;
			x="0.59974 * safezoneW + safezoneX";
			y="0.418782 * safezoneH + safezoneY";
			w="0.0826794 * safezoneW";
			h="0.13723 * safezoneH";
			text="";
			size=0.023;
			tooltip="Options";
			action="[]Spawn USAF_CV22_SETTINGS_UI";
		};
		class USAF_CV22_MANUAL_BUTTON_1613: USAF_CV22_RscButtonMenu
		{
			idc=1613;
			x="0.455379 * safezoneW + safezoneX";
			y="0.634429 * safezoneH + safezoneY";
			w="0.0826794 * safezoneW";
			h="0.13723 * safezoneH";
			text="";
			size=0.023;
			tooltip="Pilots manual";
			action="[]Spawn USAF_CV22_MANUAL_UI";
		};
		class USAF_CV22_CREDITS_EULA_BUTTON_1612: USAF_CV22_RscButtonMenu
		{
			idc=1612;
			x="0.787409 * safezoneW + safezoneX";
			y="0.110712 * safezoneH + safezoneY";
			w="0.0918668 * safezoneW";
			h="0.0280066 * safezoneH";
			text="";
			size=0.023;
			tooltip="Credits & EULA";
			action="[]Spawn USAF_CV22_CREDITS_EULA_UI";
		};
		class USAF_CV22_CLOSE_DIALOG_BUTTON_1614: USAF_CV22_RscButtonMenu
		{
			idc=1614;
			x="0.877963 * safezoneW + safezoneX";
			y="0.110712 * safezoneH + safezoneY";
			w="0.094491 * safezoneW";
			h="0.0255 * safezoneH";
			text="";
			size=0.023;
			tooltip="Close this menu";
			action="closeDialog 0";
		};
	};
};
class USAF_CV22_LOADOUTS_UI
{
	idd=3010;
	movingenable="false";
	onLoad="uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class USAF_CV22_MAIN_BOX_1200: RscPicture
		{
			idc=1200;
			x="safezoneX";
			y="safezoneY";
			w="0.1 + safezoneW";
			h="0.1 + safezoneH";
			text="\USAF_CV22\data\UI\USAF_CV22_GUI_background.paa";
		};
		class USAF_CV22_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc=1205;
			text="\USAF_CV22\data\UI\USAF_CV22_GUI_main_loadouts.paa";
			x="0 * safezoneW + safezoneX";
			y="0.052 * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="0.84 * safezoneH";
		};
		class USAF_CV22_MAIN_FRAME: RscFrame
		{
			idc=1204;
			x="0.005 * safezoneW + safezoneX";
			y="0.005 * safezoneH + safezoneY";
			w="0.99 * safezoneW";
			h="0.99 * safezoneH";
		};
		class USAF_CV22_LOAD_CUSTOM_BUTTON_1600: USAF_CV22_RscButtonMenu
		{
			idc=1600;
			x="0.422572 * safezoneW + safezoneX";
			y="0.634429 * safezoneH + safezoneY";
			w="0.1490 * safezoneW";
			h="0.0898 * safezoneH";
			text="";
			size=0.023;
			tooltip="Apply custom loadout";
			action="[]Spawn USAF_CV22_LOADOUTS_EXEC";
		};
		class USAF_CV22_STATION_1_COMBO_3101: RscCombo
		{
			idc=3101;
			x="0.741475 * safezoneW + safezoneX";
			y="0.36277 * safezoneH + safezoneY";
			w="0.0879288 * safezoneW";
			h="0.0280062 * safezoneH";
			tooltip="Weapon station 1";
		};
		class USAF_CV22_STATION_2_COMBO_3102: RscCombo
		{
			idc=3102;
			x="0.687668 * safezoneW + safezoneX";
			y="0.404779 * safezoneH + safezoneY";
			w="0.0879288 * safezoneW";
			h="0.0280062 * safezoneH";
			tooltip="Weapon station 2";
		};
		class USAF_CV22_STATION_3_COMBO_3103: RscCombo
		{
			idc=3103;
			x="0.643049 * safezoneW + safezoneX";
			y="0.443988 * safezoneH + safezoneY";
			w="0.0879288 * safezoneW";
			h="0.0280062 * safezoneH";
			tooltip="Weapon station 3";
		};
		class USAF_CV22_STATION_4_COMBO_3104: RscCombo
		{
			idc=3104;
			x="0.528873 * safezoneW + safezoneX";
			y="0.488798 * safezoneH + safezoneY";
			w="0.0879288 * safezoneW";
			h="0.0280062 * safezoneH";
			tooltip="Weapon station 4";
		};
		class USAF_CV22_STATION_5_COMBO_3105: RscCombo
		{
			idc=3105;
			x="0.454067 * safezoneW + safezoneX";
			y="0.536409 * safezoneH + safezoneY";
			w="0.0879288 * safezoneW";
			h="0.0280062 * safezoneH";
			tooltip="Weapon station 5";
		};
		class USAF_CV22_STATION_6_COMBO_3106: RscCombo
		{
			idc=3106;
			x="0.454067 * safezoneW + safezoneX";
			y="0.387975 * safezoneH + safezoneY";
			w="0.0879288 * safezoneW";
			h="0.0280062 * safezoneH";
			tooltip="Weapon station 6";
		};
		class USAF_CV22_STATION_7_COMBO_3107: RscCombo
		{
			idc=3107;
			x="0.454067 * safezoneW + safezoneX";
			y="0.581218 * safezoneH + safezoneY";
			w="0.0879288 * safezoneW";
			h="0.0280062 * safezoneH";
			tooltip="Weapon station 7";
		};
		class USAF_CV22_STATION_8_COMBO_3108: RscCombo
		{
			idc=3108;
			x="0.380577 * safezoneW + safezoneX";
			y="0.488798 * safezoneH + safezoneY";
			w="0.0879288 * safezoneW";
			h="0.0280062 * safezoneH";
			tooltip="Weapon station 8";
		};
		class USAF_CV22_STATION_9_COMBO_3109: RscCombo
		{
			idc=3109;
			x="0.263773 * safezoneW + safezoneX";
			y="0.443988 * safezoneH + safezoneY";
			w="0.0879288 * safezoneW";
			h="0.0280062 * safezoneH";
			tooltip="Weapon station 9";
		};
		class USAF_CV22_STATION_10_COMBO_3110: RscCombo
		{
			idc=3110;
			x="0.212591 * safezoneW + safezoneX";
			y="0.401978 * safezoneH + safezoneY";
			w="0.0879288 * safezoneW";
			h="0.0280062 * safezoneH";
			tooltip="Weapon station 10";
		};
		class USAF_CV22_STATION_11_COMBO_3111: RscCombo
		{
			idc=3111;
			x="0.160096 * safezoneW + safezoneX";
			y="0.362768 * safezoneH + safezoneY";
			w="0.0879288 * safezoneW";
			h="0.0280062 * safezoneH";
			tooltip="Weapon station 11";
		};
		class USAF_CV22_REARM_BUTTON_1601: USAF_CV22_RscButtonMenu
		{
			idc=1601;
			x="0.160096 * safezoneW + safezoneX";
			y="0.743653 * safezoneH + safezoneY";
			w="0.0813676 * safezoneW";
			h="0.137235 * safezoneH";
			text="";
			size=0.023;
			tooltip="Rearm aircraft";
			action="[]Spawn USAF_CV22_REARM";
		};
		class USAF_CV22_REPAIR_BUTTON_1602: USAF_CV22_RscButtonMenu
		{
			idc=1602;
			x="0.257212 * safezoneW + safezoneX";
			y="0.743653 * safezoneH + safezoneY";
			w="0.0813676 * safezoneW";
			h="0.137235 * safezoneH";
			text="";
			size=0.023;
			tooltip="Repair aircraft";
			action="[]Spawn USAF_CV22_REPAIR";
		};
		class USAF_CV22_REFUEL_BUTTON_1603: USAF_CV22_RscButtonMenu
		{
			idc=1603;
			x="0.356953 * safezoneW + safezoneX";
			y="0.743653 * safezoneH + safezoneY";
			w="0.0813676 * safezoneW";
			h="0.137235 * safezoneH";
			text="";
			size=0.023;
			tooltip="Refuel aircraft";
			action="[]Spawn USAF_CV22_REFUEL";
		};
		class USAF_CV22_MR_LOADOUT_BUTTON_1604: USAF_CV22_RscButtonMenu
		{
			idc=1604;
			x="0.552495 * safezoneW + safezoneX";
			y="0.743659 * safezoneH + safezoneY";
			w="0.0813676 * safezoneW";
			h="0.137235 * safezoneH";
			text="";
			size=0.023;
			tooltip="Multirole loadout";
			action="[]Spawn USAF_CV22_LOADOUT_CAS1";
		};
		class USAF_CV22_CAP_LOADOUT_BUTTON_1605: USAF_CV22_RscButtonMenu
		{
			idc=1605;
			x="0.649609 * safezoneW + safezoneX";
			y="0.743655 * safezoneH + safezoneY";
			w="0.0813676 * safezoneW";
			h="0.137235 * safezoneH";
			text="";
			size=0.023;
			tooltip="Combat Air Patrol loadout";
			action="[]Spawn USAF_CV22_LOADOUT_CAS2";
		};
		class USAF_CV22_CAS_LOADOUT_BUTTON_1606: USAF_CV22_RscButtonMenu
		{
			idc=1606;
			x="0.455379 * safezoneW + safezoneX";
			y="0.743653 * safezoneH + safezoneY";
			w="0.0813676 * safezoneW";
			h="0.137235 * safezoneH";
			text="";
			size=0.023;
			tooltip="Combat Air Support loadout";
			action="[]Spawn USAF_CV22_LOADOUT_CAS3";
		};
		class USAF_CV22_EMPTY_LOADOUT_BUTTON_1607: USAF_CV22_RscButtonMenu
		{
			idc=1607;
			x="0.748036 * safezoneW + safezoneX";
			y="0.743653 * safezoneH + safezoneY";
			w="0.0813676 * safezoneW";
			h="0.137235 * safezoneH";
			text="";
			size=0.023;
			tooltip="Empty loadout, no weapons";
			action="[]Spawn USAF_CV22_LOADOUT_EMPTY";
		};
		class USAF_CV22_RETURN_TO_MAIN_BUTTON_1608: USAF_CV22_RscButtonMenu
		{
			idc=1608;
			x="0.787409 * safezoneW + safezoneX";
			y="0.110712 * safezoneH + safezoneY";
			w="0.0918668 * safezoneW";
			h="0.0280066 * safezoneH";
			text="";
			size=0.023;
			tooltip="Return to main menu";
			action="[]Spawn USAF_CV22_RETURN_MAIN";
		};
		class USAF_CV22_CLOSE_DIALOG_BUTTON_1609: USAF_CV22_RscButtonMenu
		{
			idc=1609;
			x="0.877963 * safezoneW + safezoneX";
			y="0.110712 * safezoneH + safezoneY";
			w="0.094491 * safezoneW";
			h="0.0255 * safezoneH";
			text="";
			size=0.023;
			tooltip="Close this menu";
			action="closeDialog 0";
		};
	};
};
class USAF_CV22_MANUAL_UI
{
	idd=3000;
	movingenable="false";
	onLoad="uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class USAF_CV22_MAIN_BOX_1200: RscPicture
		{
			idc=1200;
			x="safezoneX";
			y="safezoneY";
			w="0.1 + safezoneW";
			h="0.1 + safezoneH";
			text="\USAF_CV22\data\UI\USAF_CV22_GUI_background.paa";
		};
		class USAF_CV22_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc=1204;
			text="\USAF_CV22\data\UI\USAF_CV22_GUI_main_manual.paa";
			x="0 * safezoneW + safezoneX";
			y="0.052 * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="0.84 * safezoneH";
		};
		class USAF_CV22_MAIN_FRAME: RscFrame
		{
			idc=1205;
			x="0.005 * safezoneW + safezoneX";
			y="0.005 * safezoneH + safezoneY";
			w="0.99 * safezoneW";
			h="0.99 * safezoneH";
		};
		class USAF_CV22_RETURN_TO_MAIN_BUTTON_1612: USAF_CV22_RscButtonMenu
		{
			idc=1612;
			x="0.787409 * safezoneW + safezoneX";
			y="0.110712 * safezoneH + safezoneY";
			w="0.0918668 * safezoneW";
			h="0.0280066 * safezoneH";
			text="";
			size=0.023;
			tooltip="Return to main menu";
			action="[]Spawn USAF_CV22_RETURN_MAIN";
		};
		class USAF_CV22_CLOSE_DIALOG_BUTTON_1614: USAF_CV22_RscButtonMenu
		{
			idc=1614;
			x="0.877963 * safezoneW + safezoneX";
			y="0.110712 * safezoneH + safezoneY";
			w="0.094491 * safezoneW";
			h="0.0255 * safezoneH";
			text="";
			size=0.023;
			tooltip="Close this menu";
			action="closeDialog 0";
		};
	};
};
class USAF_CV22_SETTINGS_UI
{
	idd=3000;
	movingenable="false";
	onLoad="uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class USAF_CV22_MAIN_BOX_1200: RscPicture
		{
			idc=1200;
			x="safezoneX";
			y="safezoneY";
			w="0.1 + safezoneW";
			h="0.1 + safezoneH";
			text="\USAF_CV22\data\UI\USAF_CV22_GUI_background.paa";
		};
		class USAF_CV22_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc=1204;
			text="\USAF_CV22\data\UI\USAF_CV22_GUI_main_options.paa";
			x="0 * safezoneW + safezoneX";
			y="0.052 * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="0.84 * safezoneH";
		};
		class USAF_CV22_MAIN_FRAME: RscFrame
		{
			idc=1205;
			x="0.005 * safezoneW + safezoneX";
			y="0.005 * safezoneH + safezoneY";
			w="0.99 * safezoneW";
			h="0.99 * safezoneH";
		};
		class USAF_CV22_RETURN_TO_MAIN_BUTTON_1612: USAF_CV22_RscButtonMenu
		{
			idc=1612;
			x="0.787409 * safezoneW + safezoneX";
			y="0.110712 * safezoneH + safezoneY";
			w="0.0918668 * safezoneW";
			h="0.0280066 * safezoneH";
			text="";
			size=0.023;
			tooltip="Return to main menu";
			action="[]Spawn USAF_CV22_RETURN_MAIN";
		};
		class USAF_CV22_CLOSE_DIALOG_BUTTON_1614: USAF_CV22_RscButtonMenu
		{
			idc=1614;
			x="0.877963 * safezoneW + safezoneX";
			y="0.110712 * safezoneH + safezoneY";
			w="0.094491 * safezoneW";
			h="0.0255 * safezoneH";
			text="";
			size=0.023;
			tooltip="Close this menu";
			action="closeDialog 0";
		};
	};
};
class USAF_CV22_SKINS_UI
{
	idd=3000;
	movingenable="false";
	onLoad="uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class USAF_CV22_MAIN_BOX_1200: RscPicture
		{
			idc=1200;
			x="safezoneX";
			y="safezoneY";
			w="0.1 + safezoneW";
			h="0.1 + safezoneH";
			text="\USAF_CV22\data\UI\USAF_CV22_GUI_background.paa";
		};
		class USAF_CV22_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc=1204;
			text="\USAF_CV22\data\UI\USAF_CV22_GUI_main_skins.paa";
			x="0 * safezoneW + safezoneX";
			y="0.052 * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="0.84 * safezoneH";
		};
		class USAF_CV22_MAIN_FRAME: RscFrame
		{
			idc=1205;
			x="0.005 * safezoneW + safezoneX";
			y="0.005 * safezoneH + safezoneY";
			w="0.99 * safezoneW";
			h="0.99 * safezoneH";
		};
		class USAF_CV22_SKIN_VFA14CAG_1601: USAF_CV22_RscButtonMenu
		{
			idc=1601;
			x="0.0944777 * safezoneW + safezoneX";
			y="0.222737 * safezoneH + safezoneY";
			w="0.149175 * safezoneW";
			h="0.14163 * safezoneH";
			text="";
			size=0.023;
			tooltip="USAF BLUE GREY SKIN";
			action="[]Spawn USAF_CV22_GREY_PAINT";
		};
		class USAF_CV22_SKIN_VFA14LOW_1602: USAF_CV22_RscButtonMenu
		{
			idc=1602;
			x="0.313644 * safezoneW + safezoneX";
			y="0.222739 * safezoneH + safezoneY";
			w="0.149175 * safezoneW";
			h="0.14163 * safezoneH";
			text="";
			size=0.023;
			tooltip="USAF LIGHT GREY SKIN";
			action="[]Spawn USAF_CV22_GREEN_PAINT";
		};
		class USAF_CV22_SKIN_VFA27CAG_1603: USAF_CV22_RscButtonMenu
		{
			idc=1603;
			x="0.522308 * safezoneW + safezoneX";
			y="0.222739 * safezoneH + safezoneY";
			w="0.149175 * safezoneW";
			h="0.14163 * safezoneH";
			text="";
			size=0.023;
			tooltip="USAF DARK GREY SKIN";
			action="[]Spawn USAF_CV22_DESERT_PAINT";
		};
		class USAF_CV22_SKIN_VFA27LOW_1604: USAF_CV22_RscButtonMenu
		{
			idc=1604;
			x="0.734915 * safezoneW + safezoneX";
			y="0.222739 * safezoneH + safezoneY";
			w="0.149175 * safezoneW";
			h="0.14163 * safezoneH";
			text="";
			size=0.023;
			tooltip="USAF BLACK GREY SKIN";
			action="[]Spawn USAF_CV22_BLACK_PAINT";
		};
		class USAF_CV22_SKIN_VFA31CAG_1605: USAF_CV22_RscButtonMenu
		{
			idc=1605;
			x="0.0905405 * safezoneW + safezoneX";
			y="0.547609 * safezoneH + safezoneY";
			w="0.145675 * safezoneW";
			h="0.13723 * safezoneH";
			text="";
			size=0.023;
			tooltip="";
			action="";
		};
		class USAF_CV22_SKIN_VFA31LOW_1606: USAF_CV22_RscButtonMenu
		{
			idc=1606;
			x="0.313642 * safezoneW + safezoneX";
			y="0.547611 * safezoneH + safezoneY";
			w="0.145675 * safezoneW";
			h="0.13723 * safezoneH";
			text="";
			size=0.023;
			tooltip="";
			action="";
		};
		class USAF_CV22_SKIN_GENERIC_USMC_1607: USAF_CV22_RscButtonMenu
		{
			idc=1607;
			x="0.522311 * safezoneW + safezoneX";
			y="0.547609 * safezoneH + safezoneY";
			w="0.145675 * safezoneW";
			h="0.13723 * safezoneH";
			text="";
			size=0.023;
			tooltip="";
			action="";
		};
		class USAF_CV22_SKIN_GENERIC_USMC_1608: USAF_CV22_RscButtonMenu
		{
			idc=1608;
			x="0.730977 * safezoneW + safezoneX";
			y="0.547611 * safezoneH + safezoneY";
			w="0.145675 * safezoneW";
			h="0.13723 * safezoneH";
			text="";
			size=0.023;
			tooltip="";
			action="";
		};
		class USAF_CV22_RETURN_TO_MAIN_BUTTON_1612: USAF_CV22_RscButtonMenu
		{
			idc=1612;
			x="0.787409 * safezoneW + safezoneX";
			y="0.110712 * safezoneH + safezoneY";
			w="0.0918668 * safezoneW";
			h="0.0280066 * safezoneH";
			text="";
			size=0.023;
			tooltip="Return to main menu";
			action="[]Spawn USAF_CV22_RETURN_MAIN";
		};
		class USAF_CV22_CLOSE_DIALOG_BUTTON_1613: USAF_CV22_RscButtonMenu
		{
			idc=1613;
			x="0.877963 * safezoneW + safezoneX";
			y="0.110712 * safezoneH + safezoneY";
			w="0.094491 * safezoneW";
			h="0.0255 * safezoneH";
			text="";
			size=0.023;
			tooltip="Close this menu";
			action="closeDialog 0";
		};
	};
};
class USAF_CV22_CREDITS_EULA_UI
{
	idd=3000;
	movingenable="false";
	onLoad="uiNamespace setVariable ['myDisplay', (_this select 0)]";
	class Controls
	{
		class USAF_CV22_MAIN_BOX_1200: RscPicture
		{
			idc=1200;
			x="safezoneX";
			y="safezoneY";
			w="0.1 + safezoneW";
			h="0.1 + safezoneH";
			text="\USAF_CV22\data\UI\USAF_CV22_GUI_background.paa";
		};
		class USAF_CV22_MAIN_PIC_LOADOUTS: RscPicture
		{
			idc=1204;
			text="\USAF_CV22\data\UI\USAF_CV22_GUI_main_credits.paa";
			x="0 * safezoneW + safezoneX";
			y="0.052 * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="0.84 * safezoneH";
		};
		class USAF_CV22_MAIN_FRAME: RscFrame
		{
			idc=1205;
			x="0.005 * safezoneW + safezoneX";
			y="0.005 * safezoneH + safezoneY";
			w="0.99 * safezoneW";
			h="0.99 * safezoneH";
		};
		class USAF_CV22_RETURN_TO_MAIN_BUTTON_1612: USAF_CV22_RscButtonMenu
		{
			idc=1612;
			x="0.787409 * safezoneW + safezoneX";
			y="0.110712 * safezoneH + safezoneY";
			w="0.0918668 * safezoneW";
			h="0.0280066 * safezoneH";
			text="";
			size=0.023;
			tooltip="Return to main menu";
			action="[]Spawn USAF_CV22_RETURN_MAIN";
		};
		class USAF_CV22_CLOSE_DIALOG_BUTTON_1614: USAF_CV22_RscButtonMenu
		{
			idc=1614;
			x="0.877963 * safezoneW + safezoneX";
			y="0.110712 * safezoneH + safezoneY";
			w="0.094491 * safezoneW";
			h="0.0255 * safezoneH";
			text="";
			size=0.023;
			tooltip="Close this menu";
			action="closeDialog 0";
		};
	};
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class Turrets;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
	};
	class USAF_CV22: Plane_Base_F
	{
		destrType="DestructWreck";
		scope=2;
		side=1;
		faction="USAF";
		author="USAF";
		displayName="CV-22B Osprey";
		vehicleClass="Air";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\USAF_CV22\data\mv22_01_co.paa",
			"\USAF_CV22\data\mv22_02_co.paa"
		};
		model="\USAF_CV22\USAF_CV22.p3d";
		picture="\USAF_CV22\data\UI\USAF_CV22_picture.paa";
		icon="\USAF_CV22\data\UI\USAF_CV22_icon.paa";
		mapSize=28;
		driverRightHandAnimName="pilot_stick";
		crew="USAF_SFS_HeliPilot_Green";
		accuracy=0.5;
		soundGetIn[]=
		{
			"USAF_CV22\DATA\Sounds\close",
			0.31622776,
			1
		};
		soundGetOut[]=
		{
			"USAF_CV22\DATA\Sounds\open",
			0.31622776,
			1,
			40
		};
		soundDammage[]=
		{
			"USAF_CV22\DATA\Sounds\int-alarm_loop",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"USAF_CV22\DATA\Sounds\int_start",
			0.56234133,
			1
		};
		soundEngineOnExt[]=
		{
			"USAF_CV22\DATA\Sounds\ext_start",
			0.56234133,
			1,
			800
		};
		soundEngineOffInt[]=
		{
			"USAF_CV22\DATA\Sounds\int_stop",
			0.56234133,
			1
		};
		soundEngineOffExt[]=
		{
			"USAF_CV22\DATA\Sounds\ext_stop",
			0.56234133,
			1,
			800
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"USAF_CV22\DATA\Sounds\ext_engine_low",
					1.7782794,
					1,
					1000
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="camPos*engineOn*(rpm factor[0.85, 0])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"USAF_CV22\DATA\Sounds\ext_engine_hi",
					1.7782794,
					1,
					1200
				};
				frequency="1";
				volume="camPos*engineOn*(rpm factor[0.55, 1.0])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"USAF_CV22\DATA\Sounds\ext_forsage",
					1.7782794,
					1,
					1800
				};
				frequency="1";
				volume="camPos*engineOn*(thrust factor[0.5, 1.0])";
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"USAF_CV22\DATA\Sounds\int-wind1",
					0.017782794,
					0.60000002,
					100
				};
				frequency="(0.1+(1.2*(speed factor[1, 100])))";
				volume="camPos*(speed factor[1, 100])";
			};
			class EngineLowIn
			{
				sound[]=
				{
					"USAF_CV22\DATA\Sounds\int_engine_low",
					1,
					1
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"USAF_CV22\DATA\Sounds\int_engine_hi",
					1,
					1
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
			};
			class ForsageIn
			{
				sound[]=
				{
					"USAF_CV22\DATA\Sounds\int_forsage",
					1.4125376,
					1.1
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"USAF_CV22\DATA\Sounds\int-wind1",
					0.0017782794,
					0.60000002
				};
				frequency="(0.1+(1.2*(speed factor[1, 100])))";
				volume="(1-camPos)*(speed factor[1, 100])";
			};
		};
		ejectSpeed[]={0,-2,0};
		cabinOpening=0;
		gearRetracting=1;
		driverAction="MV22_Pilot";
		cargoAction[]=
		{
			"Mi17_Cargo02"
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment2"
		};
		maxSpeed=556;
		transportSoldier=24;
		vtol=3;
		supplyRadius=8;
		LockDetectionSystem="CM_Lock_Radar";
		incomingMissileDetectionSystem="CM_Missile";
		armor=25;
		damageResistance=0.0017199999;
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		selectionRotorStill="engine_static";
		selectionRotorMove="engine_blur";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"USAF_CV22\data\mv22_sklo.rvmat",
				"USAF_CV22\data\mv22_sklo_damage.rvmat",
				"USAF_CV22\data\mv22_sklo_damage.rvmat",
				"USAF_CV22\data\mv22_sklo_in.rvmat",
				"USAF_CV22\data\mv22_sklo_in_damage.rvmat",
				"USAF_CV22\data\mv22_sklo_in_damage.rvmat",
				"USAF_CV22\data\mv22_01.rvmat",
				"USAF_CV22\data\mv22_01_damage.rvmat",
				"USAF_CV22\data\mv22_01_destruct.rvmat",
				"USAF_CV22\data\mv22_02.rvmat",
				"USAF_CV22\data\mv22_02_damage.rvmat",
				"USAF_CV22\data\mv22_02_destruct.rvmat"
			};
		};
		dammageHalf[]={};
		dammageFull[]={};
		class AnimationSources
		{
			class fl_switch
			{
				source="user";
				initPhase=0;
				animPeriod=9.9999997e-006;
			};
			class Door_1_top
			{
				source="user";
				initPhase=0;
				animPeriod=5;
			};
			class Door_1_bottom
			{
				source="user";
				initPhase=0;
				animPeriod=5;
			};
			class fuel_hose
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class circlelight
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class circlelight1
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class ramp_bottom
			{
				source="user";
				initPhase=0;
				animPeriod=10;
			};
			class service_menu_switch
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class rearming_done_switch
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Ramp_top
			{
				source="user";
				initPhase=0;
				animPeriod=10;
			};
			class probe
			{
				source="user";
				initPhase=1;
				animPeriod=5;
			};
			class pack_engine_1
			{
				source="user";
				animPeriod=30;
			};
			class engine_prop_1_1_turn: pack_engine_1
			{
			};
			class engine_prop_1_2_turn: pack_engine_1
			{
			};
			class engine_prop_1_3_turn: pack_engine_1
			{
			};
			class engine_prop_2_1_turn: pack_engine_1
			{
			};
			class engine_prop_2_2_turn: pack_engine_1
			{
			};
			class engine_prop_2_3_turn: pack_engine_1
			{
			};
			class engine_prop_1_1_close: pack_engine_1
			{
			};
			class engine_prop_1_3_close: pack_engine_1
			{
			};
			class engine_prop_2_1_close: pack_engine_1
			{
			};
			class engine_prop_2_2_close: pack_engine_1
			{
			};
			class pack_engine_2: pack_engine_1
			{
			};
			class turn_wing: pack_engine_1
			{
			};
		};
		class useractions
		{
			class extendrefueling
			{
				displayName="Extend Refueling Probe";
				position="zamerny";
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
				radius=5;
				condition="player in this and this animationPhase ""fuel_hose"" < 0.5 and speed this > 100";
				statement="this animate [""fuel_hose"",1]; this animate [""probe"",0];";
			};
			class retractrefueling
			{
				displayName="Retract Refueling Probe";
				position="zamerny";
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
				radius=5;
				condition="player in this and this animationPhase ""fuel_hose"" > 0.5";
				statement="this animate [""fuel_hose"",0]; this animate [""probe"",1];";
			};
			class rampup
			{
				displayName="Open Ramp";
				position="zamerny";
				radius=9;
				showwindow=0;
				condition="this animationphase ""ramp_top"" == 0";
				statement="[this,1] execvm ""\USAF_CV22\scripts\ramp.sqf""";
				onlyforplayer=1;
			};
			class rampdown
			{
				displayName="Close Ramp";
				position="zamerny";
				radius=9;
				showwindow=0;
				condition="this animationphase ""ramp_bottom"" == 1";
				statement="[this,0] execvm ""\USAF_CV22\scripts\ramp.sqf""";
				onlyforplayer=1;
			};
			class Openrdoor
			{
				displayName="Open Right Door";
				position="pos_gunner";
				onlyforplayer=1;
				showwindow=0;
				radius=6;
				condition="(this animationPhase ""door_1_top"" == 0) AND Alive(this)";
				statement="this animate [""door_1_bottom"",1];this animate [""door_1_top"",1];";
			};
			class Closerdoor: Openrdoor
			{
				displayName="Close Right Door";
				condition="(this animationPhase ""door_1_top"" == 1) AND Alive(this)";
				statement="this animate [""door_1_bottom"",0];this animate [""door_1_top"",0];";
			};
			class Packon
			{
				displayName="Pack Engines";
				displayNameDefault="Pack";
				position="PackAction";
				radius=10;
				onlyForPlayer=1;
				showwindow=0;
				condition="(this animationPhase ""pack_engine_1"" == 0) and speed this < 1 and !isEngineOn this";
				statement="[this,1] execvm ""\USAF_CV22\scripts\pack.sqf""";
			};
			class service_menu
			{
				priority=10;
				displayName="Service Menu";
				position="pilotcontrol";
				onlyforplayer=1;
				showWindow=0;
				shortcut="User4";
				hideOnUse=1;
				radius=5;
				condition="((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 55) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 55) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1)";
				statement="this animate [""service_menu_switch"",1]; [] execVM ""\Usaf_CV22\scripts\SERVICE_MENU\usaf_CV22_service_menu.sqf""";
			};
			class unPack
			{
				displayName="Unpack Engines";
				displayNameDefault="unPack";
				showwindow=0;
				position="PackAction";
				radius=10;
				onlyForPlayer=1;
				condition="(this animationphase ""pack_engine_1"" == 1) and speed this < 1 and !isEngineOn this";
				statement="[this,0] execvm ""\USAF_CV22\scripts\pack.sqf""";
			};
		};
		class EventHandlers
		{
			init="_this execVM '\usaf_cv22\scripts\init.sqf'";
		};
		class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				intensity=50;
				size=1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				brightness=5;
				useFlare=1;
				flareSize=4;
				flareMaxDistance=300;
				dayLight=0;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=4;
				};
			};
			class Right
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				intensity=50;
				size=1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				brightness=5;
				useFlare=1;
				flareSize=4;
				flareMaxDistance=300;
				dayLight=0;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=4;
				};
			};
		};
		class MarkerLights
		{
			class RedStill
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				name="cerveny pozicni";
				intensity=75;
				drawLight=3;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class GreenStill
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="zeleny pozicni";
				intensity=75;
				drawLight=3;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class WhiteStill
			{
				color[]={1,1,1,1};
				ambient[]={0.2,0.2,0.2,1};
				name="bily pozicni";
				intensity=75;
				blinking=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
			class WhiteBlinking
			{
				color[]={1,1,1,1};
				ambient[]={0.2,0.2,0.2,1};
				name="bily pozicni blik";
				intensity=75;
				blinking=1;
				blinkingPattern[]={0.1,0.80000001};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
			class WhiteBlinking2
			{
				color[]={1,1,1,1};
				ambient[]={0.2,0.2,0.2,1};
				name="doplnovani";
				intensity=75;
				blinking=1;
				blinkingPattern[]={0.1,0.80000001};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
			class RedBlinking
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				name="cerveny pozicni blik";
				intensity=75;
				blinking=1;
				blinkingPattern[]={0.1,0.69999999};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=4;
					renderVisionMode=4;
					fov=1;
				};
			};
			class RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=4;
					renderVisionMode=4;
					fov=1;
				};
			};
			class TARGETING
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_POS";
					pointDirection="PIP2_DIR";
					renderQuality=4;
					renderVisionMode=2;
					fov=0.46599999;
				};
			};
			class camera
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="PIP2_POS";
					pointDirection="PIP2_DIR";
					renderQuality=4;
					renderVisionMode=0;
					fov=0.46599999;
				};
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunBeg="PIP2_dir";
				gunEnd="PIP2_pos";
				memoryPointGunnerOptics="PIP2_dir";
				stabilizedInAxes=4;
				laser=1;
				usepip=1;
				gunnerName="$STR_A3_COPILOT";
				turretInfoType="RscOptics_UAV_gunner";
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Laserbatteries"
				};
				soundServo[]=
				{
					"",
					0.0099999998,
					1,
					30
				};
				gunnerAction="MV22_Pilot";
				gunnerInAction="MV22_Pilot";
				precisegetinout=1;
				gunnerGetInAction="copilot_Heli_Light_03_Enter";
				gunnerGetOutAction="copilot_Heli_Light_03_Exit";
				gunnerRightHandAnimName="stick_copilot";
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=-1;
				LODTurnedOut=1100;
				LODTurnedIn=1100;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				startEngine=0;
				gunnerHasFlares=0;
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						name="main_turret_hit";
						visual="gun";
						passThrough=0.2;
						radius=0.25;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						name="main_gun_hit";
						visual="gun";
						passThrough=0.2;
						radius=0.25;
					};
				};
			};
		};
		class Library
		{
			libTextDesc="CV-22 VTOL Transport Aircraft";
		};
		class MFD
		{
			borderLeft=0.090000004;
			borderRight=0.02;
			borderTop=0.02;
			borderBottom=0.1;
			class MFD1
			{
				topLeft="HUD LH1";
				topRight="HUD PH1";
				bottomLeft="HUD LD1";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.27000001};
					pos10[]=
					{
						"0.5+0.9",
						"0.27+0.7"
					};
				};
				class Bones
				{
				};
				class Draw
				{
					alpha=0.89999998;
					color[]={0,1,0};
					clipTL[]={0,0};
					clipBR[]={1,1};
					condition="on";
					class Altitude
					{
						type="text";
						align="left";
						scale=1;
						source="altitudeASL";
						sourceScale=1;
						pos[]=
						{
							{0.28,0.041999999},
							1
						};
						right[]=
						{
							{0.31999999,0.041999999},
							1
						};
						down[]=
						{
							{0.28,0.082000002},
							1
						};
					};
					class Altitude2
					{
						type="text";
						align="left";
						scale=1;
						source="altitudeAGL";
						sourceScale=1;
						pos[]=
						{
							{0.44999999,0.041999999},
							1
						};
						right[]=
						{
							{0.49000001,0.041999999},
							1
						};
						down[]=
						{
							{0.44999999,0.082000002},
							1
						};
					};
					class RPM
					{
						type="text";
						align="left";
						scale=1;
						source="rpm";
						sourceScale=100;
						pos[]=
						{
							{0.63,0.18000001},
							1
						};
						right[]=
						{
							{0.67000002,0.18000001},
							1
						};
						down[]=
						{
							{0.63,0.22},
							1
						};
					};
					class RPM2
					{
						type="text";
						align="left";
						scale=1;
						source="rpm";
						sourceScale=100;
						pos[]=
						{
							{0.80199999,0.18000001},
							1
						};
						right[]=
						{
							{0.84200001,0.18000001},
							1
						};
						down[]=
						{
							{0.80199999,0.22},
							1
						};
					};
					class Fuel
					{
						type="text";
						align="left";
						scale=1;
						source="fuel";
						sourceScale=100;
						pos[]=
						{
							{0.63,0.42500001},
							1
						};
						right[]=
						{
							{0.67000002,0.42500001},
							1
						};
						down[]=
						{
							{0.63,0.465},
							1
						};
					};
					class Fuel2
					{
						type="text";
						align="left";
						scale=1;
						source="fuel";
						sourceScale=100;
						pos[]=
						{
							{0.80199999,0.42500001},
							1
						};
						right[]=
						{
							{0.84200001,0.42500001},
							1
						};
						down[]=
						{
							{0.80199999,0.465},
							1
						};
					};
					class Speed
					{
						type="text";
						align="left";
						scale=1;
						source="speed";
						sourceScale=2.2369399;
						pos[]=
						{
							{0.28,0.22499999},
							1
						};
						right[]=
						{
							{0.31999999,0.22499999},
							1
						};
						down[]=
						{
							{0.28,0.26499999},
							1
						};
					};
				};
			};
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		MV22_Pilot="MV22_Pilot";
		MV22_Cargo="MV22_Cargo";
		Mi17_Cargo02="Mi17_Cargo02";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_MV22_Pilot: DefaultDie
		{
			actions="DeadActions";
			file="\USAF_CV22\DATA\anim\KIA_MV22_Pilot.rtm";
			speed=0.5;
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class MV22_Pilot: Crew
		{
			file="\USAF_CV22\DATA\anim\MV22_Pilot.rtm";
			interpolateTo[]=
			{
				"KIA_MV22_Pilot",
				1
			};
		};
		class KIA_MV22_Cargo: KIA_MV22_Pilot
		{
		};
		class MV22_Cargo: Crew
		{
			file="\USAF_CV22\DATA\anim\MV22_Pilot.rtm";
			interpolateTo[]=
			{
				"KIA_MV22_Cargo",
				1
			};
		};
		class KIA_Mi17_Cargo02: DefaultDie
		{
			actions="DeadActions";
			file="\USAF_CV22\DATA\anim\KIA_Mi17_Cargo02.rtm";
			speed=0.5;
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class Mi17_Cargo02: Crew
		{
			file="\USAF_CV22\DATA\anim\Mi17_Cargo02_V0.rtm";
			interpolateTo[]=
			{
				"KIA_Mi17_Cargo02",
				0.1
			};
			connectTo[]=
			{
				"Mi17_Cargo02",
				0.1,
				"Mi17_Cargo02_V1",
				0.1,
				"Mi17_Cargo02_V2",
				0.1,
				"Mi17_Cargo02_V3",
				0.1,
				"Mi17_Cargo02_V4",
				0.1,
				"Mi17_Cargo02_V5",
				0.1,
				"Mi17_Cargo02_V6",
				0.1
			};
			equivalentTo="Mi17_Cargo02";
			variantsAI[]=
			{
				"Mi17_Cargo02",
				0.40000001,
				"Mi17_Cargo02_V1",
				0.1,
				"Mi17_Cargo02_V2",
				0.1,
				"Mi17_Cargo02_V3",
				0.1,
				"Mi17_Cargo02_V4",
				0.1,
				"Mi17_Cargo02_V5",
				0.1,
				"Mi17_Cargo02_V6",
				0.1
			};
			variantAfter[]={5,10,20};
			speed=0.30000001;
		};
		class Mi17_Cargo02_V1: Mi17_Cargo02
		{
			file="\USAF_CV22\DATA\anim\Mi17_Cargo02_V1.rtm";
			interpolateTo[]=
			{
				"KIA_Mi17_Cargo02",
				0.1
			};
			connectTo[]=
			{
				"Mi17_Cargo02",
				0.1
			};
			speed=0.27000001;
			variantAfter[]={3.7,3.7,3.7};
		};
		class Mi17_Cargo02_V2: Mi17_Cargo02
		{
			file="\USAF_CV22\DATA\anim\Mi17_Cargo02_V2.rtm";
			interpolateTo[]=
			{
				"KIA_Mi17_Cargo02",
				0.1
			};
			connectTo[]=
			{
				"Mi17_Cargo02",
				0.1
			};
			speed=0.345;
			variantAfter[]={3,3,3};
		};
		class Mi17_Cargo02_V3: Mi17_Cargo02
		{
			file="\USAF_CV22\DATA\anim\Mi17_Cargo02_V3.rtm";
			interpolateTo[]=
			{
				"KIA_Mi17_Cargo02",
				0.1
			};
			connectTo[]=
			{
				"Mi17_Cargo02",
				0.1
			};
			speed=0.2;
			variantAfter[]={5,5,5};
		};
		class Mi17_Cargo02_V4: Mi17_Cargo02
		{
			file="\USAF_CV22\DATA\anim\Mi17_Cargo02_V4.rtm";
			interpolateTo[]=
			{
				"KIA_Mi17_Cargo02",
				0.1
			};
			connectTo[]=
			{
				"Mi17_Cargo02",
				0.1
			};
			speed=0.20100001;
			variantAfter[]={5,5,5};
		};
		class Mi17_Cargo02_V5: Mi17_Cargo02
		{
			file="\USAF_CV22\DATA\anim\Mi17_Cargo02_V5.rtm";
			interpolateTo[]=
			{
				"KIA_Mi17_Cargo02",
				0.1
			};
			connectTo[]=
			{
				"Mi17_Cargo02",
				0.1
			};
			speed=0.197;
			variantAfter[]={5,5,5};
		};
		class Mi17_Cargo02_V6: Mi17_Cargo02
		{
			file="\USAF_CV22\DATA\anim\Mi17_Cargo02_V6.rtm";
			interpolateTo[]=
			{
				"KIA_Mi17_Cargo02",
				0.1
			};
			connectTo[]=
			{
				"Mi17_Cargo02",
				0.1
			};
			speed=0.345;
			variantAfter[]={3,3,3};
		};
	};
};
