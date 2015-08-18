	_FA18 = vehicle player;
	_FA18_pilot = driver _FA18;
	_FA18_WSO = gunner _FA18;
	_default_sleep_time = 3;
	_sleep_time = 3;		
	_FA18_stop_speed = 1;
	_damage_FA18 = damage _FA18;
  	If (!Local Player) ExitWith {};

	closeDialog 0;

	if (speed _FA18 > _FA18_stop_speed) exitWith {if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Repairing canceled...", "PLAIN DOWN",0.3];};};
	if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Repairing...", "PLAIN DOWN",0.3];};

	while {alive _FA18} do 
	{
	
		_damage_FA18 = damage _FA18;
		_FA18 Setdamage (_damage_FA18 - 0.015);	
		If ((_damage_FA18 < 0.01) and (player == _FA18_pilot) or (player == _FA18_WSO)) exitWith {titleText ["Repairing complete...", "PLAIN DOWN",0.6];};
		if (speed _FA18 > _FA18_stop_speed) exitWith {if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Repairing canceled...", "PLAIN DOWN",0.3];};};
		if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Repairing...", "PLAIN DOWN",0.3];};
		sleep _sleep_time;
	};