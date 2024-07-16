params ["_player"];

private _curators = missionNamespace getVariable ["curatorUIDs", []];
private _playerIsCurator = _curators findIf { _x == getPlayerUID _player} > -1;
if(_playerIsCurator == true) then
{	
	[_player] call {
		[0, {
			params ["_thePlayer"];
			private _playerUID = getPlayerUID _thePlayer;
			private _curVarName = _playerUID+"_Cur";
			private _myCurObject = missionNamespace getVariable [_curVarName, objNull];
			
			if (isNull _myCurObject) then {
				if (isNil "MikeFrcCur_group") then {MikeFrcCur_group = creategroup sideLogic;};
				_myCurObject = MikeFrcCur_group createunit["ModuleCurator_F", [0, 90, 90], [], 0.5, "NONE"];	//Logic Server
				_myCurObject setVariable ["showNotification",false];

				_myCurObject addEventHandler ["CuratorObjectRegistered", {
					params ["_curator", "_input"];

					[format ["[ZEUS LOG] %1 has entered the zeus interface.", name _curator]] remoteExec ["diag_log", 2];
				}];

				_myCurObject addEventHandler ["CuratorObjectPlaced", {
					params ["_curator", "_entity"];

					private _entityTypeName = typeOf _entity;
					private _entityName = name _entity;

					private _curatorName = name _curator;
					private _curatorUID = getPlayerUID _curator;

					[format ["[ZEUS LOG] %1 has placed %2 (%3) at %4.", _curatorName, _entityName, _entityTypeName, getPos _entity]] remoteExec ["diag_log", 2];
				}];

				_myCurObject addEventHandler ["CuratorObjectEdited", {
					params ["_curator", "_entity"];

					private _entityTypeName = typeOf _entity;
					private _entityName = name _entity;

					private _curatorName = name _curator;
					private _curatorUID = getPlayerUID _curator;

					[format ["[ZEUS LOG] %1 has edited %2 (%3) at %4.", _curatorName, _entityName, _entityTypeName, getPos _entity]] remoteExec ["diag_log", 2];
				}];

				_myCurObject addEventHandler ["CuratorObjectDeleted", {
					params ["_curator", "_entity"];

					private _entityTypeName = typeOf _entity;
					private _entityName = name _entity;

					private _curatorName = name _curator;
					private _curatorUID = getPlayerUID _curator;

					[format ["[ZEUS LOG] %1 has deleted %2 (%3) at %4.", _curatorName, _entityName, _entityTypeName, getPos _entity]] remoteExec ["diag_log", 2];
				}];

				_myCurObject addEventHandler ["CuratorObjectAttributesChanged", {
					params ["_curator", "_entity"];

					private _entityTypeName = typeOf _entity;
					private _entityName = name _entity;

					private _curatorName = name _curator;
					private _curatorUID = getPlayerUID _curator;

					[format ["[ZEUS LOG] %1 has changed attributes of %2 (%3) at %4.", _curatorName, _entityName, _entityTypeName, getPos _entity]] remoteExec ["diag_log", 2];
				}];

				_myCurObject addEventHandler ["CuratorGroupPlaced", {
					params ["_curator", "_group"];

					private _curatorName = name _curator;
					private _curatorUID = getPlayerUID _curator;

					[format ["[ZEUS LOG] %1 has placed a group of AI.", _curatorName]] remoteExec ["diag_log", 2];
				}];

				_myCurObject addEventHandler ["CuratorWaypointEdited", {
					params ["_curator", "_group", "_waypoint"];

					private _curatorName = name _curator;
					private _curatorUID = getPlayerUID _curator;

					[format ["[ZEUS LOG] %1 has edited a waypoint.", _curatorName]] remoteExec ["diag_log", 2];
				}];

				_myCurObject addEventHandler ["CuratorWaypointPlaced", {
					params ["_curator", "_group", "_waypoint"];

					private _curatorName = name _curator;
					private _curatorUID = getPlayerUID _curator;

					[format ["[ZEUS LOG] %1 has placed a waypoint.", _curatorName]] remoteExec ["diag_log", 2];
				}];
				
				missionNamespace setVariable [_curVarName, _myCurObject, true];
				publicVariable "MikeFrcCur_group";
				unassignCurator _myCurObject;
				_cfg = (configFile >> "CfgPatches");
				_newAddons = [];
				for "_i" from 0 to((count _cfg) - 1) do {
					_name = configName(_cfg select _i);
					_newAddons pushBack _name;
				};

				if (count _newAddons > 0) then {_myCurObject addCuratorAddons _newAddons};

				diag_log format ["[+] Curator object created %1.", _myCurObject];
			};

			unassignCurator _myCurObject;
			sleep 0.4;
			_thePlayer assignCurator _myCurObject;

			diag_log format ["[+] Player %1 added to %2.", _thePlayer, _myCurObject];
		}, _this] call CBA_fnc_globalExecute;
	};
};
