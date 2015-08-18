	If (!Local Player) ExitWith {};  
	Private "_FA18";
	_FA18 = vehicle player;

	closeDialog 0;

	sleep 0.01;

	CreateDialog "FA18_E_LOADOUTS_UI";

           {lbAdd[3101,_x]} forEach [  
             	"EMPTY",
             	"AIM9X"
           ];

           {lbAdd[3102,_x]} forEach [
              	"EMPTY",
              	"AIM9X"
            ];

           {lbAdd[3103,_x]} forEach [
              	"EMPTY",
              	"AIM9X",
	      	"AIM120",
		"AGM65",
		"GBU38"
            ];

           {lbAdd[3104,_x]} forEach [
              	"EMPTY",
              	"AIM9X",
	      	"AIM120",
		"AGM65",
		"GBU38"
            ];

           {lbAdd[3105,_x]} forEach [
              	"EMPTY",
              	"AIM9X",
	      	"AIM120",
		"AGM65",
		"AGM84",
		"GBU12",
		"GBU38",
		"GBU32",
		"GBU31",
		"FUEL TANK",
		"DUAL RAIL"
            ];

           {lbAdd[3106,_x]} forEach [
              	"EMPTY",
              	"AIM9X",
	      	"AIM120",
		"AGM65",
		"AGM84",
		"GBU12",
		"GBU38",
		"GBU32",
		"GBU31",
		"FUEL TANK",
		"DUAL RAIL"
            ];

           {lbAdd[3107,_x]} forEach [
                "EMPTY",
              	"AIM9X",
	      	"AIM120",
		"AGM65",
		"AGM84",
		"GBU12",
		"GBU38",
		"GBU32",
		"GBU31",
		"FUEL TANK",
		"DUAL RAIL"
            ];

           {lbAdd[3108,_x]} forEach [
              	"EMPTY",
              	"AIM9X",
	      	"AIM120",
		"AGM65",
		"AGM84",
		"GBU12",
		"GBU38",
		"GBU32",
		"GBU31",
		"FUEL TANK",
		"DUAL RAIL"
            ];

           {lbAdd[3109,_x]} forEach [
              	"EMPTY",
	      	"AIM120"
            ];

           {lbAdd[3110,_x]} forEach [
              	"EMPTY",
	      	"AIM120"
            ];

           {lbAdd[3111,_x]} forEach [
              	"EMPTY",
              	"AIM9X",
	      	"AIM120",
		"AGM65",
		"AGM84",
		"GBU12",
		"GBU38"
            ];

           {lbAdd[3112,_x]} forEach [
              	"EMPTY",
              	"AIM9X",
	      	"AIM120",
		"AGM65",
		"AGM84",
		"GBU12",
		"GBU38"
            ];

           {lbAdd[3113,_x]} forEach [
              	"EMPTY",
              	"AIM9X",
	      	"AIM120",
		"AGM65",
		"AGM84",
		"GBU12",
		"GBU38"
            ];

           {lbAdd[3114,_x]} forEach [
              	"EMPTY",
              	"AIM9X",
	      	"AIM120",
		"AGM65",
		"AGM84",
		"GBU12",
		"GBU38"
            ];

           {lbAdd[3115,_x]} forEach [
              	"EMPTY",
              	"AIM9X",
	      	"AIM120",
		"AGM65",
		"AGM84",
		"GBU12",
		"GBU38"
            ];

           {lbAdd[3116,_x]} forEach [
              	"EMPTY",
              	"AIM9X",
	      	"AIM120",
		"AGM65",
		"AGM84",
		"GBU12",
		"GBU38"
            ];

           {lbAdd[3117,_x]} forEach [
              	"EMPTY",
              	"AIM9X",
	      	"AIM120",
		"AGM65",
		"AGM84",
		"GBU12",
		"GBU38"
            ];

           {lbAdd[3118,_x]} forEach [
              	"EMPTY",
              	"AIM9X",
	      	"AIM120",
		"AGM65",
		"AGM84",
		"GBU12",
		"GBU38"
            ];

           {lbAdd[3119,_x]} forEach [
              	"EMPTY",
		"FUEL TANK"
            ];

         	((uiNamespace getVariable "myDisplay") displayCtrl 3101) lbSetCurSel 1;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3102) lbSetCurSel 1;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3103) lbSetCurSel 2;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3104) lbSetCurSel 2;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3105) lbSetCurSel 10;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3106) lbSetCurSel 10;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3107) lbSetCurSel 10;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3108) lbSetCurSel 10;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3109) lbSetCurSel 1;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3110) lbSetCurSel 1;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 5;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3112) lbSetCurSel 5;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 5;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3114) lbSetCurSel 5;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3115) lbSetCurSel 3;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3116) lbSetCurSel 3;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3117) lbSetCurSel 3;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3118) lbSetCurSel 3;
         	((uiNamespace getVariable "myDisplay") displayCtrl 3119) lbSetCurSel 1;

	 	((uiNamespace getVariable "myDisplay") displayCtrl 3105) ctrlSetEventHandler ["LBSelChanged","[_FA18]Spawn JS_JC_fnc_FA18_E_LOADOUT_RESTRICTIONS_3105"];
		((uiNamespace getVariable "myDisplay") displayCtrl 3106) ctrlSetEventHandler ["LBSelChanged","[_FA18]Spawn JS_JC_fnc_FA18_E_LOADOUT_RESTRICTIONS_3106"];
		((uiNamespace getVariable "myDisplay") displayCtrl 3107) ctrlSetEventHandler ["LBSelChanged","[_FA18]Spawn JS_JC_fnc_FA18_E_LOADOUT_RESTRICTIONS_3107"];
		((uiNamespace getVariable "myDisplay") displayCtrl 3108) ctrlSetEventHandler ["LBSelChanged","[_FA18]Spawn JS_JC_fnc_FA18_E_LOADOUT_RESTRICTIONS_3108"];

      
	WaitUntil {!Dialog};
 
	_FA18 animate ["service_menu_switch",0];