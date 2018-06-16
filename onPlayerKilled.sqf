


0.05 fadeSound 0; 
cutText  ["","BLACK FADED", 2];
uiSleep 2;
  private _msg1 = ("<t size='1.0' align='middle' font='PuristaBold' >");
  [format   ["YOU ARE DEAD",_msg1],0,0.5,7,1] spawn BIS_fnc_dynamicText;
  sleep 3; 
7.0 fadeSound 1.0;
titleCut ["", "BLACK IN", 12]; 