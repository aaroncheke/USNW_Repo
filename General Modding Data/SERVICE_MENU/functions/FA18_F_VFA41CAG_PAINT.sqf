If (!Local Player) ExitWith {};
Private ["_FA18"];
_FA18 = vehicle player; 
_i = 0;
       
_FA18 setObjectTextureGlobal [0, "\js_jc_fa18_squads\data\fa18f_hull_vfa41cag_co.paa"];
_FA18 setObjectTextureGlobal [1, "\js_jc_fa18\data\fa18_misc_co.paa"];      
_FA18 animate ["paint_scheme_switch",0.00];
disableSerialization;
_ui = uiNamespace getVariable "FA18_F_SKINS_Display";

for "_x" from 0 to 11 do 
{

	_displayCtrl_ID = 2500 + _i;
	(_ui displayCtrl _displayCtrl_ID) ctrlSetText "\js_jc_fa18\ui\FA18_GUI_button_tickbox_off.paa"; 
	_i= _i +1;


};

(_ui displayCtrl 2500) ctrlSetText "\js_jc_fa18\ui\FA18_GUI_button_tickbox_on.paa";
