params ["_player", "_classname", "_vectorDir"];

private _colorAmbient = [0, 0, 0];
private _colorLight = [0, 0, 0];

switch (true) do { 
	case (_classname isEqualTo "vn_mx991") : {
		_colorAmbient = [00.03515625, 0.029296875, 0.0234375];
		_colorLight = [0.703125, 0.5859375, 0.46875];
	}; 
	case (_classname isEqualTo "vn_mx991_red") : {
		_colorAmbient = [0.03515625, 0.01953125, 0.00390625];
		_colorLight = [0.8, 0.19921875, 0];
	};
	default {
		_colorAmbient = [0, 0, 0];
		_colorLight = [0, 0, 0];
	}; 
};

private _lightsource = "#lightreflector" createVehicle (_player modelToWorld [0, 0, 0]); 
_lightsource setLightIntensity 4500; 
_lightsource setLightAmbient _colorAmbient; 
_lightsource setLightColor _colorLight; 
_lightsource setLightConePars [100, 60, 20];
_lightsource setLightDayLight false;
_lightsource setLightUseFlare true;
_lightsource setLightFlareSize 0.8;
_lightsource setLightFlareMaxDistance 150;
_lightsource setLightAttenuation [1, 0, 0, 5, 1, 50];
_lightsource attachTo [player,  [-0.015, 0.125, 0.09], "LeftShoulder", true];
_lightsource setVectorDirAndUp [_vectorDir apply {_x * -1}, [0, 0, 1]];

// _lightsource setPosWorld getPosWorld _lightsource;
