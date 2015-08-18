If (!Local Player) ExitWith {};  
Private "_FA18";
_FA18 = vehicle player;

closeDialog 0;

sleep 0.01;
if 
(
((_FA18 distance (nearestObject [_FA18, "B_Truck_01_ammo_F"]) < 25) and (damage (nearestObject [_FA18, "B_Truck_01_ammo_F"]) < 1) and (player == driver _FA18) and (_FA18 animationPhase "service_menu_switch" < 0.5) and (speed _FA18 < 1))
or
((_FA18 distance (nearestObject [_FA18, "Land_Hangar_F"]) < 55) and (damage (nearestObject [_FA18, "Land_Hangar_F"]) < 1) and (player == driver _FA18) and (_FA18 animationPhase "service_menu_switch" < 0.5) and (speed _FA18 < 1))
or
((_FA18 distance (nearestObject [_FA18, "Land_TentHangar_V1_F"]) < 55) and (damage (nearestObject [_FA18, "Land_TentHangar_V1_F"]) < 1) and (player == driver _FA18) and (_FA18 animationPhase "service_menu_switch" < 0.5) and (speed _FA18 < 1))
or
((_FA18 distance (nearestObject [_FA18, "JDG_carrier_Spawner"]) < 555) and (damage (nearestObject [_FA18, "JDG_carrier_Spawner"]) < 1) and (player == driver _FA18) and (_FA18 animationPhase "service_menu_switch" < 0.5) and (speed _FA18 < 1))
) 

then {CreateDialog "FA18_E_MAIN_UI";} else {CreateDialog "FA18_E_MAIN_RESTRICTED_UI";};

