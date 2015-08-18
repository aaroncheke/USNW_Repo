If (!Local Player) ExitWith {};  
Private "_FA18";
_FA18 = vehicle player;

closeDialog 0;

sleep 0.01;
CreateDialog "FA18_F_MANUAL_1_UI";
	
disableSerialization;
_control_forums = ((uiNamespace getVariable "myDisplay") displayCtrl 1613);
_control_support = ((uiNamespace getVariable "myDisplay") displayCtrl 1614);
_control_forums htmlLoad "js_jc_fa18\ui\FA18_link_FEEDBACK.html";
_control_support htmlLoad "js_jc_fa18\ui\FA18_link_SUPPORT.html";
