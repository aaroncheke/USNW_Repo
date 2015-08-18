If (!Local Player) ExitWith {};
_FA18 = vehicle player;
Private ["_FA18"];

CreateDialog "FA18_F_MAIN_UI";

WaitUntil {!Dialog};
 
_FA18 animate ["service_menu_switch",0];