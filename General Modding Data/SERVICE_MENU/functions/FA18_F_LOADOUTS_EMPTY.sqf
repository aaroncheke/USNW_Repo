    	If (!Local Player) ExitWith {};
    	Private ["_FA18"];
    	_FA18 = vehicle player; 

	fa18_dynamic_loadoutscript = _FA18 execvm "js_jc_fa18\scripts\LOADOUTS\FA18_empty_loadout.sqf";
	closeDialog 0;