If (!Local Player) ExitWith {};  
Private "_FA18";
_FA18 = vehicle player;

closeDialog 0;

sleep 0.01;
CreateDialog "FA18_E_CREDITS_EULA_UI";

disableSerialization;
_control_support = ((uiNamespace getVariable "myDisplay") displayCtrl 1611);
_control_support htmlLoad "js_jc_fa18\ui\FA18_link_SUPPORT.html";

Exit;