	If (!Local Player) ExitWith {};
    	Private ["_FA18"];
    	_FA18 = vehicle player; 

	fa18_dynamic_loadoutscript = [_FA18, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_altflir_pod_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty","js_m_fa18_wing_tank_x1"] execvm "js_jc_fa18\scripts\LOADOUTS\FA18_dynamic_loadouts.sqf";
	closeDialog 0;