	If (!Local Player) ExitWith {};
    	Private ["_Station_1_Index","_Station_2_Index","_Station_3_Index","_Station_4_Index","_Station_5_Index","_Station_6_Index","_Station_7_Index","_Station_8_Index","_Station_9_Index","_Station_10_Index","_Station_11_Index","_Station_12_Index","_Station_13_Index","_Station_14_Index","_Station_15_Index","_Station_16_Index","_Station_17_Index","_Station_18_Index","_Station_19_Index","_FA18"];
    	_FA18 = vehicle player; 

	_Station_1_Index = lbCurSel 3101;
	_Station_2_Index = lbCurSel 3102;
	_Station_3_Index = lbCurSel 3103;
	_Station_4_Index = lbCurSel 3104;
	_Station_5_Index = lbCurSel 3105;
	_Station_6_Index = lbCurSel 3106;
	_Station_7_Index = lbCurSel 3107;
    	_Station_8_Index = lbCurSel 3108;
	_Station_9_Index = lbCurSel 3109;
	_Station_10_Index = lbCurSel 3110;
	_Station_11_Index = lbCurSel 3111;
	_Station_12_Index = lbCurSel 3112;
	_Station_13_Index = lbCurSel 3113;
	_Station_14_Index = lbCurSel 3114;
	_Station_15_Index = lbCurSel 3115;
	_Station_16_Index = lbCurSel 3116;
	_Station_17_Index = lbCurSel 3117;
	_Station_18_Index = lbCurSel 3118;
	_Station_19_Index = lbCurSel 3119;


	_station_1=Switch (_Station_1_Index) Do
        {

            	case 0:
            	{
			"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		

      	};

	_station_2=Switch (_Station_2_Index) Do
        {

            	case 0:
            	{
           		 "js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		

      	};

	_station_3=Switch (_Station_3_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		case 2:
            	{
              		"js_m_fa18_aim120c_x1"
            	};
            	case 3:
            	{
              		"js_m_fa18_Maverick_x1"
            	};
		case 4:
            	{
              		"js_m_fa18_GBU38_JDAM_x1"
            	};
		

      	};

	_station_4=Switch (_Station_4_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		case 2:
            	{
              		"js_m_fa18_aim120c_x1"
            	};
            	case 3:
            	{
              		"js_m_fa18_Maverick_x1"
            	};
		case 4:
            	{
              		"js_m_fa18_GBU38_JDAM_x1"
            	};
		

      	};

	_station_5=Switch (_Station_5_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		case 2:
            	{
              		"js_m_fa18_aim120c_x1"
            	};
            	case 3:
            	{
              		"js_m_fa18_Maverick_x1"
            	};
		case 4:
            	{
              		"js_m_fa18_Harpoon_x1"
            	};
		case 5:
            	{
              		"js_m_fa18_GBU12_x1"
            	};
		case 6:
            	{
              		"js_m_fa18_GBU38_JDAM_x1"
            	};
		case 7:
            	{
              		"js_m_fa18_GBU32_JDAM_x1"
            	};
		case 8:
            	{
              		"js_m_fa18_GBU31_JDAM_x1"
            	};
		case 9:
            	{
              		"js_m_fa18_wing_tank_x1"
            	};
		case 10:
            	{
              		"js_m_fa18_bombrack_x1"
            	};

      	};

	_station_6=Switch (_Station_6_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		case 2:
            	{
              		"js_m_fa18_aim120c_x1"
            	};
            	case 3:
            	{
              		"js_m_fa18_Maverick_x1"
            	};
		case 4:
            	{
              		"js_m_fa18_Harpoon_x1"
            	};
		case 5:
            	{
              		"js_m_fa18_GBU12_x1"
            	};
		case 6:
            	{
              		"js_m_fa18_GBU38_JDAM_x1"
            	};
		case 7:
            	{
              		"js_m_fa18_GBU32_JDAM_x1"
            	};
		case 8:
            	{
              		"js_m_fa18_GBU31_JDAM_x1"
            	};
		case 9:
            	{
              		"js_m_fa18_wing_tank_x1"
            	};
		case 10:
            	{
              		"js_m_fa18_bombrack_x1"
            	};

      	};

	_station_7=Switch (_Station_7_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		case 2:
            	{
              		"js_m_fa18_aim120c_x1"
            	};
            	case 3:
            	{
              		"js_m_fa18_Maverick_x1"
            	};
		case 4:
            	{
              		"js_m_fa18_Harpoon_x1"
            	};
		case 5:
            	{
              		"js_m_fa18_GBU12_x1"
            	};
		case 6:
            	{
              		"js_m_fa18_GBU38_JDAM_x1"
            	};
		case 7:
            	{
              		"js_m_fa18_GBU32_JDAM_x1"
            	};
		case 8:
            	{
              		"js_m_fa18_GBU31_JDAM_x1"
            	};
		case 9:
            	{
              		"js_m_fa18_wing_tank_x1"
            	};
		case 10:
            	{
              		"js_m_fa18_bombrack_x1"
            	};

      	};


        _station_8=Switch (_Station_8_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		case 2:
            	{
              		"js_m_fa18_aim120c_x1"
            	};
            	case 3:
            	{
              		"js_m_fa18_Maverick_x1"
            	};
		case 4:
            	{
              		"js_m_fa18_Harpoon_x1"
            	};
		case 5:
            	{
              		"js_m_fa18_GBU12_x1"
            	};
		case 6:
            	{
              		"js_m_fa18_GBU38_JDAM_x1"
            	};
		case 7:
            	{
              		"js_m_fa18_GBU32_JDAM_x1"
            	};
		case 8:
            	{
              		"js_m_fa18_GBU31_JDAM_x1"
            	};
		case 9:
            	{
              		"js_m_fa18_wing_tank_x1"
            	};
		case 10:
            	{
              		"js_m_fa18_bombrack_x1"
            	};

      	};

	_station_9=Switch (_Station_9_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
		case 1:
            	{
              		"js_m_fa18_aim120c_x1"
            	};

      	};

	_station_10=Switch (_Station_10_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
		case 1:
            	{
              		"js_m_fa18_aim120c_x1"
            	};

      	};

	_station_11=Switch (_Station_11_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		case 2:
            	{
              		"js_m_fa18_aim120c_x1"
            	};
            	case 3:
            	{
              		"js_m_fa18_Maverick_x1"
            	};
		case 4:
            	{
              		"js_m_fa18_Harpoon_x1"
            	};
		case 5:
            	{
              		"js_m_fa18_GBU12_x1"
            	};
		case 6:
            	{
              		"js_m_fa18_GBU38_JDAM_x1"
            	};

      	};


	_station_12=Switch (_Station_12_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		case 2:
            	{
              		"js_m_fa18_aim120c_x1"
            	};
            	case 3:
            	{
              		"js_m_fa18_Maverick_x1"
            	};
		case 4:
            	{
              		"js_m_fa18_Harpoon_x1"
            	};
		case 5:
            	{
              		"js_m_fa18_GBU12_x1"
            	};
		case 6:
            	{
              		"js_m_fa18_GBU38_JDAM_x1"
            	};

      	};


	_station_13=Switch (_Station_13_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		case 2:
            	{
              		"js_m_fa18_aim120c_x1"
            	};
            	case 3:
            	{
              		"js_m_fa18_Maverick_x1"
            	};
		case 4:
            	{
              		"js_m_fa18_Harpoon_x1"
            	};
		case 5:
            	{
              		"js_m_fa18_GBU12_x1"
            	};
		case 6:
            	{
              		"js_m_fa18_GBU38_JDAM_x1"
            	};

      	};


	_station_14=Switch (_Station_14_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		case 2:
            	{
              		"js_m_fa18_aim120c_x1"
            	};
            	case 3:
            	{
              		"js_m_fa18_Maverick_x1"
            	};
		case 4:
            	{
              		"js_m_fa18_Harpoon_x1"
            	};
		case 5:
            	{
              		"js_m_fa18_GBU12_x1"
            	};
		case 6:
            	{
              		"js_m_fa18_GBU38_JDAM_x1"
            	};

      	};


	_station_15=Switch (_Station_15_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		case 2:
            	{
              		"js_m_fa18_aim120c_x1"
            	};
            	case 3:
            	{
              		"js_m_fa18_Maverick_x1"
            	};
		case 4:
            	{
              		"js_m_fa18_Harpoon_x1"
            	};
		case 5:
            	{
              		"js_m_fa18_GBU12_x1"
            	};
		case 6:
            	{
              		"js_m_fa18_GBU38_JDAM_x1"
            	};

      	};


	_station_16=Switch (_Station_16_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		case 2:
            	{
              		"js_m_fa18_aim120c_x1"
            	};
            	case 3:
            	{
              		"js_m_fa18_Maverick_x1"
            	};
		case 4:
            	{
              		"js_m_fa18_Harpoon_x1"
            	};
		case 5:
            	{
              		"js_m_fa18_GBU12_x1"
            	};
		case 6:
            	{
              		"js_m_fa18_GBU38_JDAM_x1"
            	};

      	};


	_station_17=Switch (_Station_17_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		case 2:
            	{
              		"js_m_fa18_aim120c_x1"
            	};
            	case 3:
            	{
              		"js_m_fa18_Maverick_x1"
            	};
		case 4:
            	{
              		"js_m_fa18_Harpoon_x1"
            	};
		case 5:
            	{
              		"js_m_fa18_GBU12_x1"
            	};
		case 6:
            	{
              		"js_m_fa18_GBU38_JDAM_x1"
            	};

      	};


	_station_18=Switch (_Station_18_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
            	case 1:
            	{
              		"js_m_fa18_aim9x_x1"
            	};
		case 2:
            	{
              		"js_m_fa18_aim120c_x1"
            	};
            	case 3:
            	{
              		"js_m_fa18_Maverick_x1"
            	};
		case 4:
            	{
              		"js_m_fa18_Harpoon_x1"
            	};
		case 5:
            	{
              		"js_m_fa18_GBU12_x1"
            	};
		case 6:
            	{
              		"js_m_fa18_GBU38_JDAM_x1"
            	};

      	};


        _station_19=Switch (_Station_19_Index) Do
        {

            	case 0:
            	{
           		"js_m_fa18_empty"
            	};
		case 1:
            	{
              		"js_m_fa18_wing_tank_x1"
            	};

      	};

	fa18_dynamic_loadoutscript = [_FA18,_station_1,_station_2,_station_3,_station_4,_station_5,_station_6,_station_7,_station_8,_station_9,_station_10,_station_11,_station_12,_station_13,_station_14,_station_15,_station_16,_station_17,_station_18,_station_19] execvm "js_jc_fa18\scripts\LOADOUTS\FA18_dynamic_loadouts.sqf";
	closeDialog 0;