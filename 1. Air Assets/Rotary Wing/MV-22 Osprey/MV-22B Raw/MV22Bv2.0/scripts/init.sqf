_plane = _this select 0;

while {true} do
{
	if(fuel _plane != 0) then { getFuel = fuel _plane};
	
	if(_plane animationPhase "pack_engine_1" > 0.01) then
	{
		_plane setFuel 0;
	};
	if(_plane animationPhase "pack_engine_1" == 0) then
	{
		_plane setFuel getFuel;
	};
	
	sleep 0.5;
};