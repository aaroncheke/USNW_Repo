	If (!Local Player) ExitWith {};
    	Private ["_Station_5_Index","_FA18"];
    	_FA18 = vehicle player; 

	_Station_5_Index = lbCurSel 3105;

	Switch (_Station_5_Index) Do
        {

            	case 0:
            	{

			lbClear 3115;
			lbClear 3117;
           		{lbAdd[3115,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3117,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3115) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3117) lbSetCurSel 0;
           
            	};
            	case 1:
            	{
			lbClear 3115;
			lbClear 3117;
           		{lbAdd[3115,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3117,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3115) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3117) lbSetCurSel 0;
            	};
		case 2:
            	{
			lbClear 3115;
			lbClear 3117;
           		{lbAdd[3115,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3117,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3115) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3117) lbSetCurSel 0;
            	};
            	case 3:
            	{
			lbClear 3115;
			lbClear 3117;
           		{lbAdd[3115,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3117,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3115) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3117) lbSetCurSel 0;
            	};
		case 4:
            	{
			lbClear 3115;
			lbClear 3117;
           		{lbAdd[3115,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3117,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3115) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3117) lbSetCurSel 0;
            	};
		case 5:
            	{
			lbClear 3115;
			lbClear 3117;
           		{lbAdd[3115,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3117,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3115) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3117) lbSetCurSel 0;
            	};
		case 6:
            	{
			lbClear 3115;
			lbClear 3117;
           		{lbAdd[3115,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3117,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3115) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3117) lbSetCurSel 0;
            	};
		case 7:
            	{
			lbClear 3115;
			lbClear 3117;
           		{lbAdd[3115,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3117,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3115) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3117) lbSetCurSel 0;
            	};
		case 8:
            	{
			lbClear 3115;
			lbClear 3117;
           		{lbAdd[3115,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3117,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3115) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3117) lbSetCurSel 0;
            	};
		case 9:
            	{
			lbClear 3115;
			lbClear 3117;
           		{lbAdd[3115,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3117,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3115) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3117) lbSetCurSel 0;
            	};
		case 10:
            	{
			lbClear 3115;
			lbClear 3117;
              		{lbAdd[3115,_x]} forEach 
			[
              			"EMPTY",
              			"AIM9X",
	      			"AIM120",
				"AGM65",
				"AGM84",
				"GBU12",
				"GBU38"
            		];
			{lbAdd[3117,_x]} forEach 
			[
              			"EMPTY",
              			"AIM9X",
	      			"AIM120",
				"AGM65",
				"AGM84",
				"GBU12",
				"GBU38"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3115) lbSetCurSel 3;
			((uiNamespace getVariable "myDisplay") displayCtrl 3117) lbSetCurSel 3;
            	};

      	}; 