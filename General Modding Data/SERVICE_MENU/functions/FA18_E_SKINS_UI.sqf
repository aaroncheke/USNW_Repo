If (!Local Player) ExitWith {};  
Private "_FA18";
_FA18 = vehicle player;

closeDialog 0;

sleep 0.01;
if (isClass(configFile >> "CfgPatches" >> "JS_JC_FA18_SQUADS")) then 
{
	CreateDialog "FA18_E_SKINS_UI";
	disableSerialization;
	_ui = uiNamespace getVariable "FA18_E_SKINS_Display";
	_ui_switch = _FA18 animationphase "paint_scheme_switch";
	_i= 0;
	_displayCtrl_ID = 2510;

	for "_x" from 0 to 11 do 
	{
		_displayCtrl_ID = 2500 + _i;
		(_ui displayCtrl _displayCtrl_ID) ctrlSetText "\js_jc_fa18\ui\FA18_GUI_button_tickbox_off.paa"; 
		_i= _i +1;

	};

	//VFA-14 CAG
	if (_ui_switch == 0.00) then {_displayCtrl_ID = 2500;};
	//VFA-14 LOW
	if (_ui_switch == 0.04) then {_displayCtrl_ID = 2501;};
	//VFA-27 CAG
	if (_ui_switch == 0.08) then {_displayCtrl_ID = 2502;};
	//VFA-27 LOW
	if (_ui_switch == 0.12) then {_displayCtrl_ID = 2503;};
	//VFA-31 CAG
	if (_ui_switch == 0.16) then {_displayCtrl_ID = 2504;};
	//VFA-31 LOW
	if (_ui_switch == 0.20) then {_displayCtrl_ID = 2505;};
	//VMFA-232 CAG
	if (_ui_switch == 0.24) then {_displayCtrl_ID = 2506;};
	//VMFA-232 LOW
	if (_ui_switch == 0.28) then {_displayCtrl_ID = 2507;};
	//VMFA-314 CAG
	if (_ui_switch == 0.32) then {_displayCtrl_ID = 2508;};
	//VMFA-314 LOW
	if (_ui_switch == 0.36) then {_displayCtrl_ID = 2509;};
	//GENERIC NAVY
	if (_ui_switch == 0.40) then {_displayCtrl_ID = 2510;};
	//GENERIC USMC
	if (_ui_switch == 0.44) then {_displayCtrl_ID = 2511;};


	(_ui displayCtrl _displayCtrl_ID) ctrlSetText "\js_jc_fa18\ui\FA18_GUI_button_tickbox_on.paa";
} 
else 
{
	CreateDialog "FA18_SKINS_RESTRICTED_UI";
	disableSerialization;
	_control_steam_download = ((uiNamespace getVariable "myDisplay") displayCtrl 1610);
	_control_steam_download htmlLoad "js_jc_fa18\ui\FA18_link_SW_SKINS.html";

	_control_armaholic_download = ((uiNamespace getVariable "myDisplay") displayCtrl 1611);
	_control_armaholic_download htmlLoad "js_jc_fa18\ui\FA18_link_ARMAHOLIC_DL.html";


};


