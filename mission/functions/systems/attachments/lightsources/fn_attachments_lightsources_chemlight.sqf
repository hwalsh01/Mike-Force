// fn_attachments_lightsources_flashlight.sqf

/*

All the setLight* commands are localy only.

So this needs to be remote exec'd globally.

*/

params ["_player", "_classname"];

diag_log format ["RMOTEFGIOHG CHELIGMHTHJMKSFN %1", _classname];

private _colorAmbient = [0, 0, 0];
private _colorLight = [0, 0, 0];

switch (true) do { 
  // case ((toLower _classname) findIf "green" > -1) : {
  //   _colorAmbient = [0, 0.3, 0];
  //   _colorLight = [0, 1, 0];
  // }; 
  case ((toLower _classname) find "blue" > -1) : {
    _colorAmbient = [0, 0.3, 0.3];
    _colorLight = [0, 0.5, 1];
  };
  case ((toLower _classname) find "yellow" > -1) : {
    _colorAmbient = [0.3, 0.3, 0];
    _colorLight = [1, 1, 0];
  };
  case ((toLower _classname) find "red" > -1) : {
    _colorAmbient = [0.3, 0, 0];
    _colorLight = [1, 0, 0];
  };
  default {
  	// green
    _colorAmbient = [0, 0.3, 0];
    _colorLight = [0, 1, 0];
  };
};

// ambient light creating some 360 visibility

private _lightsourceOne = "#lightreflector" createVehicle (_player modelToWorld [0, 0, -1]); 
_lightsourceOne setLightIntensity 400;
_lightsourceOne setLightAmbient _colorAmbient; 
_lightsourceOne setLightColor _colorLight; 
_lightsourceOne setLightConePars [270, 2, 1];
_lightsourceOne setLightAttenuation [1, 10, 4, 3, 1, 2.5];
_lightsourceOne attachTo [_player,  [0, 0.4, 0], "Pelvis", true];
_lightsource setPosWorld getPosWorld _lightsource;

// forward facing light source to let players see things in front of them

private _lightsourceTwo = "#lightreflector" createVehicle (_player modelToWorld [0, 0, -1]);
_lightsourceTwo setLightIntensity 2500; 
_lightsourceTwo setLightAmbient _colorAmbient; 
_lightsourceTwo setLightColor _colorLight; 
_lightsourceTwo setLightConePars [360, 20, 15];
_lightsourceTwo attachTo [_player,  [0, 0, -0.2], "", true];
_lightsource setPosWorld getPosWorld _lightsource;
