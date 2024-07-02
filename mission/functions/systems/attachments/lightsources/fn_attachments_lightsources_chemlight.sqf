/*
    File: fn_attachments_lightsources_chemlight.sqf
    Author: 'DJ' Dijksterhuis
    Public: No

    Description:
        Sets up the two lightsources we'll use for making chemlights useful
        instead of completely blinding to player.

        Needs to be remote Exec'd on all clients to get them to see the lights properly.

    Parameter(s):
        _lightSources - The two light source vehicles we'll be modifying. 
                        **Must** have been created on the server with createVehicle.
        _classname - Chemlight class name (tells us the color)

    Returns: nothing
    Example(s): cba
*/

params ["_lightSources", "_classname"];

if !((count _lightSources) isEqualTo 2) exitWith {
  diag_log format ["ERROR: Attachments: chemlights need two lightsource attachments! lightSources=%1", _lightSources];
};

private _colorAmbient = [0, 0, 0];
private _colorLight = [0, 0, 0];

switch (true) do { 
  case ((toLower _classname) find "green" > -1) : {
    _colorAmbient = [0, 0.3, 0];
    _colorLight = [0, 1, 0];
  }; 
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
  	// black (no light)
    _colorAmbient = [0, 0, 0];
    _colorLight = [0, 0, 0];
  };
};

// ambient light creating some 360 visibility
private _lightSourceOne = _lightSources select 0;
private _lightSourceTwo = _lightSources select 1;

_lightSourceOne setLightIntensity 400;
_lightSourceOne setLightAmbient _colorAmbient; 
_lightSourceOne setLightColor _colorLight; 
_lightSourceOne setLightConePars [270, 2, 1];
_lightSourceOne setLightAttenuation [1, 10, 4, 3, 1, 2.5];

// forward facing light source to let players see things in front of them
_lightSourceTwo setLightIntensity 2500; 
_lightSourceTwo setLightAmbient _colorAmbient; 
_lightSourceTwo setLightColor _colorLight; 
_lightSourceTwo setLightConePars [360, 20, 15];
