Private ["_FA18"];
_FA18 = vehicle player;
If (!Local _FA18) ExitWith {};


CreateDialog "FA18_E_MAIN_UI";

WaitUntil {!Dialog};
 
_FA18 animate ["service_menu_switch",0];