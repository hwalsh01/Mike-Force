/*
	File: fn_create_tunnel_buildings.sqf
	Author: Cerebral
	Public: No
	
	Description:
		Creates buildings for a tunnel.
	
	Parameter(s):
		_position - Position [Position]
	
	Returns: nothing
	
	Example(s): none
	
	0: STRING	- Classname
	1: ARRAY	- Position [delta X, delta Y, z]
	2: NUMBER	- Azimuth
	3: NUMBER	- Fuel
	4: NUMBER	- Damage
	5: ARRAY	- Return from BIS_fnc_getPitchBank (only if 2nd param is true)
	6: STRING	- vehicleVarName
	7: STRING	- Initialization commands
	8: BOOLEAN	- Enable simulation
	9: BOOLEAN	- Position is ASL
*/

params ["_position"];


if (random 1 < 0.2) then {

	//diag_log [_position]; 

	//_pos = _position getRelPos [5, 90];
	_pos = [5,0,0] vectorAdd _position;

	
	//_pos = [0,0,0]; // set this to whatever you want 
	_unitArr = ['vn_o_men_vc_regional_01','vn_o_men_vc_regional_04 ']; // set this to whatever you want 
	_enemySide = 1; // 1 for EAST, but set to whatever you want 
	_tunnelType = [0,5] call BIS_fnc_randomInt; // pick a random tunnel or set to whatever you want 
	_tunnelGarrisonSize = [0,5] call BIS_fnc_randomInt; // pick a garrison size 
	
	if (isNil "tunnelNo") then { 
	tunnelNo = 0; 
	} 
	else { 
	tunnelNo = tunnelNo + 1; 
	}; 
	publicVariable "tunnelNo"; 
	
	private _grp = createGroup [sideLogic, true]; 
	private _tunnelName = format["tunnel%1", tunnelNo]; 
	private _tunnelString = format ["this setVariable ['BIS_fnc_initModules_disableAutoActivation',true,true]; %1 = this; publicVariable '%1'", _tunnelName]; 
	"vn_module_tunnel_init" createUnit [_pos, _grp, _tunnelString]; 

	//sleep 0.5; 
	private _thisTunnel = missionNameSpace getVariable [_tunnelName, "wtf_theres_no_tunnel"]; 
	_thisTunnel setVariable ['garrison_size',_tunnelGarrisonSize,true]; 
	_thisTunnel setVariable ['tunnel_position',_tunnelType,true]; 
	_thisTunnel setVariable ['garrison_classnames_preselection',_unitArr,true]; 
	_thisTunnel setVariable ['garrison_side',_enemySide,true]; 
	
	//hint str diag_stacktrace; 
	//diag_log [diag_stacktrace]; 
	
	["",[_thisTunnel,true]] call vn_fnc_module_tunnel_init;
}

private _tunnel = [["Land_vn_o_trapdoor_01", _position] call para_g_fnc_create_vehicle, [], grpNull];
	
private _vehicles = [_tunnel select 0];
private _units = _tunnel select 1;
private _groups = [_tunnel select 2];

[[_vehicles, _units, _groups], [_tunnel select 0]];

