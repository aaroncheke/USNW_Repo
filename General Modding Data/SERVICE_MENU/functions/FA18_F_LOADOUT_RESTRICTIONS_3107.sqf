	If (!Local Player) ExitWith {};
    	Private ["_Station_7_Index","_FA18"];
    	_FA18 = vehicle player; 

	_Station_7_Index = lbCurSel 3107;

 
	Switch (_Station_7_Index) Do
        {

            	case 0:
            	{

			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
           
            	};
            	case 1:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 2:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
            	case 3:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 4:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 5:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 6:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 7:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 8:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 9:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 10:
            	{
			lbClear 3111;
			lbClear 3113;
              		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY",
              			"AIM9X",
	      			"AIM120",
				"AGM65",
				"AGM84",
				"LGB12",
				"GBU38"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY",
              			"AIM9X",
	      			"AIM120",
				"AGM65",
				"AGM84",
				"LGB12",
				"GBU38"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 5;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 5;
            	};

      	};