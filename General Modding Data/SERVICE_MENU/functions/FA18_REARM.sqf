	_FA18 = vehicle player;
	_FA18_pilot = driver _FA18;
	_FA18_WSO = gunner _FA18;
	_default_sleep_time = 3;
	_i = 0;
	_sleep_time = 3;		
	_FA18_stop_speed = 1;
  	If (!Local Player) ExitWith {};

	closeDialog 0;

	while {alive _FA18} do 
	{
		_i=_i +1;
		if ((_i>=19)) exitWith {_FA18 setVehicleAmmo 1; if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Rearming complete...", "PLAIN DOWN",0.3];};};
		if (speed _FA18 > _FA18_stop_speed) exitWith {if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
		sleep _sleep_time;
		if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};
		
	};