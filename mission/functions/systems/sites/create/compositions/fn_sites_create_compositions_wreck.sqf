/*
	File: fn_create_compositions_wreck.sqf
	Author: @dijksterhuis
	Public: No
	
	Description:
		Spawns a 'wreck' site composition at the given position.
	
	Parameter(s):
		_position - Position of the wreck site [Position3D]
	
	Returns:
		Array containing the wreck site objects [Array]
	
	Example(s): none
*/

params ["_position"];

vn_mf_wreck_compositions = [
	createHashMapFromArray [
		["Author","@dijksterhuis"],
		["TerrainHindingKinds",""],
		["MaximumAllowedTerrainGradient",10],
		["WaterSpawn",0],
		["Name","F4"],
		["Type","Wreck"],
		["Composition",[
			["vn_air_f4b_wreck",[0,-0.5,1.5],0,1,0,[0,170],"","",true,false],
			["Land_vn_b_prop_body_01_02",[3,-5,1.5],214.007,1,0,[-0.916639,0.458053],"","",true,false]
		]]
	],
	createHashMapFromArray [
		["Author","@dijksterhuis"],
		["TerrainHindingKinds",""],
		["MaximumAllowedTerrainGradient",10],
		["WaterSpawn",0],
		["Name","F100D"],
		["Type","Wreck"],
		["Composition",[
			["vn_air_f100d_01_wreck",[0,-0.5,1.5],0,1,0,[0,170],"","",true,false],
			["Land_vn_b_prop_body_01_02",[3,-5,1.5],214.007,1,0,[-0.916639,0.458053],"","",true,false]
		]]
	],
	createHashMapFromArray [
		["Author","@dijksterhuis"],
		["TerrainHindingKinds",""],
		["MaximumAllowedTerrainGradient",10],
		["WaterSpawn",0],
		["Name","Slick-1"],
		["Type","Wreck"],
		["Composition",[
			["vn_air_uh1c_01_wreck",[1,0,1.5],0,1,0,[0,170],"","",true,false],
			["Land_vn_b_prop_body_01_02",[4,1,1.5],358.172,1,0,[0,0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[-4,1,1.5],284.507,1,0,[0,0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[-4,-5,1.5],148.564,1,0,[0,-0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[4,-5,1.5],118.375,1,0,[0,-0],"","",true,false]
		]]
	],
	createHashMapFromArray [
		["Author","@dijksterhuis"],
		["TerrainHindingKinds",""],
		["MaximumAllowedTerrainGradient",10],
		["WaterSpawn",0],
		["Name","Slick-2"],
		["Type","Wreck"],
		["Composition",[
			["vn_air_uh1d_01_wreck",[1,0,1.5],0,1,0,[0,170],"","",true,false],
			["Land_vn_b_prop_body_01_02",[4,1,1.5],358.172,1,0,[0,0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[-4,1,1.5],284.507,1,0,[0,0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[-4,-5,1.5],148.564,1,0,[0,-0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[4,-5,1.5],118.375,1,0,[0,-0],"","",true,false]
		]]
	],
	createHashMapFromArray [
		["Author","@dijksterhuis"],
		["TerrainHindingKinds",""],
		["MaximumAllowedTerrainGradient",10],
		["WaterSpawn",0],
		["Name","Slick-3"],
		["Type","Wreck"],
		["Composition",[
			["vn_air_uh1d_med_wreck",[1,0,1.5],0,1,0,[0,170],"","",true,false],
			["Land_vn_b_prop_body_01_02",[4,1,1.5],358.172,1,0,[0,0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[-4,1,1.5],284.507,1,0,[0,0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[-4,-5,1.5],148.564,1,0,[0,-0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[4,-5,1.5],118.375,1,0,[0,-0],"","",true,false]
		]]
	],
	createHashMapFromArray [
		["Author","@dijksterhuis"],
		["TerrainHindingKinds",""],
		["MaximumAllowedTerrainGradient",10],
		["WaterSpawn",0],
		["Name","Cayuse"],
		["Type","Wreck"],
		["Composition",[
			["vn_air_oh6a_01_wreck",[1,0,1.5],0,1,0,[0,170],"","",true,false],
			["Land_vn_b_prop_body_01_02",[4,1,1.5],358.172,1,0,[0,0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[-4,1,1.5],284.507,1,0,[0,0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[-4,-5,1.5],148.564,1,0,[0,-0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[4,-5,1.5],118.375,1,0,[0,-0],"","",true,false]
		]]
	],
	createHashMapFromArray [
		["Author","@dijksterhuis"],
		["TerrainHindingKinds",""],
		["MaximumAllowedTerrainGradient",10],
		["WaterSpawn",0],
		["Name","CH34"],
		["Type","Wreck"],
		["Composition",[
			["vn_air_ch34_01_wreck",[1,0,1.5],0,1,0,[0,170],"","",true,false],
			["Land_vn_b_prop_body_01_02",[4,1,1.5],358.172,1,0,[0,0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[-4,1,1.5],284.507,1,0,[0,0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[-4,-5,1.5],148.564,1,0,[0,-0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[4,-5,1.5],118.375,1,0,[0,-0],"","",true,false]
		]]
	],
	createHashMapFromArray [
		["Author","@dijksterhuis"],
		["TerrainHindingKinds",""],
		["MaximumAllowedTerrainGradient",10],
		["WaterSpawn",0],
		["Name","Cobra"],
		["Type","Wreck"],
		["Composition",[
			["vn_air_ah1g_01_wreck",[1,0,1.5],0,1,0,[0,170],"","",true,false],
			["Land_vn_b_prop_body_01_02",[4,1,1.5],358.172,1,0,[0,0],"","",true,false],
			["Land_vn_b_prop_body_01_02",[-4,1,1.5],284.507,1,0,[0,0],"","",true,false]
		]]
	]
];

private _randomAngle = [0,360] call BIS_fnc_randomInt;
private _selected = selectRandom vn_mf_wreck_compositions;

private _objects = [
	_position,
	_randomAngle,
	_selected get "Composition"
	
] call BIS_fnc_objectsMapper;

[_objects, _selected];