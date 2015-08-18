	_FA18 = vehicle player;
	_FA18_pilot = driver _FA18;
	_FA18_WSO = gunner _FA18;
	_default_sleep_time = 3;
	_sleep_time = 3;		
	_FA18_stop_speed = 1;
	_Fuel_FA18 = fuel _FA18;
  	If (!Local Player) ExitWith {};

	closeDialog 0;

	if (speed _FA18 > _FA18_stop_speed) exitWith {if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",0.3];};};
	if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Refueling...", "PLAIN DOWN",0.3];};

	while {alive _FA18} do 
	{
	
		_Fuel_FA18 = fuel _FA18;
		_FA18 setfuel (_Fuel_FA18 + 0.015);	
		If ((_Fuel_FA18 > 0.98) and (player == _FA18_pilot) or (player == _FA18_WSO)) exitWith {titleText ["Refueling complete...", "PLAIN DOWN",0.6];};
		if (speed _FA18 > _FA18_stop_speed) exitWith {if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Refueling canceled...", "PLAIN DOWN",0.3];};};
		if ((player == _FA18_pilot) or (player == _FA18_WSO)) then {titleText ["Refueling...", "PLAIN DOWN",0.3];};
		sleep _sleep_time;
	};
	_Fuel_tank_count = {_x == "js_m_fa18_wing_tank_x1"} count magazines _FA18;

	If (_Fuel_tank_count < 1) Then 
	{	
		_External_fuel = _FA18 animationPhase "auxtank_switch";
		_FA18 animate ["auxtank_switch",0];
	};

	If (_Fuel_tank_count == 1) Then 
	{	
		_External_fuel = _FA18 animationPhase "auxtank_switch";
		If ((_External_fuel < 0.2)) Then 
		{
		_FA18 animate ["auxtank_switch",(_External_fuel + (0.2 - _External_fuel))];
		};
		If ((_External_fuel > 0.2)) Then 
		{
		_FA18 animate ["auxtank_switch",0.2];
		};
	};

	If (_Fuel_tank_count == 2) Then 
	{	
		_External_fuel = _FA18 animationPhase "auxtank_switch";
		If ((_External_fuel < 0.4)) Then 
		{
			_FA18 animate ["auxtank_switch",(_External_fuel + (0.4 - _External_fuel))];
		};
		If ((_External_fuel > 0.4)) Then 
		{
			_FA18 animate ["auxtank_switch",0.4];
		};
	};

	If (_Fuel_tank_count == 3) Then 
	{	
		_External_fuel = _FA18 animationPhase "auxtank_switch";
		If ((_External_fuel < 0.6)) Then 
		{
			_FA18 animate ["auxtank_switch",(_External_fuel + (0.6 - _External_fuel))];
		};
		If ((_External_fuel > 0.6)) Then 
		{
			_FA18 animate ["auxtank_switch",0.6];
		};
	};

	If (_Fuel_tank_count == 4) Then 
	{	
		_External_fuel = _FA18 animationPhase "auxtank_switch";
		If ((_External_fuel < 0.8)) Then 
		{
			_FA18 animate ["auxtank_switch",(_External_fuel + (0.8 - _External_fuel))];
		};
		If ((_External_fuel > 0.8)) Then 
		{
			_FA18 animate ["auxtank_switch",0.8];
		};
	};

	If (_Fuel_tank_count == 5) Then 
	{	
		_External_fuel = _FA18 animationPhase "auxtank_switch";
		If ((_External_fuel < 0.99)) Then 
		{
			_FA18 animate ["auxtank_switch",(_External_fuel + (1.0 - _External_fuel))];
		};
		If ((_External_fuel >= 1.0)) Then 
		{
			_FA18 animate ["auxtank_switch",1.0];
		};
	};

	sleep 0.05;
	_External_fuel = _FA18 animationPhase "auxtank_switch";
	_loadout = magazines _FA18;
	If (("js_m_fa18_buddypod_x1" in _loadout)) Then 
	{	
	
		If (_Fuel_tank_count > 1) Then 
		{	
			_FA18 animate ["auxtank_switch",(_External_fuel + 0.2)];
		};
		If (_Fuel_tank_count < 1) Then 
		{	
			_FA18 animate ["auxtank_switch",0.2];
		};

	};