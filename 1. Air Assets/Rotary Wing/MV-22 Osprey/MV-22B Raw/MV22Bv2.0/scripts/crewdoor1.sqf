_mv22 =_this select 0;
_phase=_this select 1;
_mv22 animate["door_1_bottom",_phase]; 
_mv22 animate["door_2_top",_phase]; 
sleep 1;
_mv22 animate["door_1_top",_phase];    