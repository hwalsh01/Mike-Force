/*
    File: fn_log_performance_data.sqf
    Author: Savage Game Design
    Public: No

    Description:
    Logs a line of performance data

    Parameter(s): None

    Returns: Nothing

    Example(s):
		call vn_mf_fnc_init_performance_logging
*/

// common defs to avoid duplicate calls / changed data between calls

private _allPlayers = allPlayers;
private _allUnits = allUnits;

private _fnc_get_average = {
    params ["_arr"];
    private _av = 0;
    _arr apply {_av = _av + _x};

    _av / (count _arr)
};

private _fnc_get_sum = {
    params ["_arr"];
    private _v = 0;
    _arr apply {_v = _v + _x};

    _v
};


// server/headless performance

private _headlessClients = _allPlayers select {(getUserInfo _x) select 7};
private _headlessClientsDesyncMax = "n/a";

if (count _headlessClients > 0) then {
  _headlessClientsDesyncMax = selectMax _headlessClients apply {((getUserInfo _x) select 9) select 2};
};

private _messageServer = format [
  "Server: UptimeMinutes:%1, ServerFPSMin:%2, ServerFPSAv:%3, ActiveScripts:%4, HeadlessClients:%5, HCMaxDesync:%6",
  diag_tickTime / 60,
  diag_fpsMin, // minimum server FPS over the last 16 frames
  diag_fps, // average server FPS over last 16 frames
  [diag_activeScripts] call _fnc_get_sum, // active scripts in THIS frame
  count _headlessClients,
  _headlessClientsDesyncMax
];

["INFO", _messageServer] call para_g_fnc_log;

// gamemode performance

private _deadUnitCount = {!alive _x} count _allUnits;
private _enemyUnitCount = {side _x == east} count _allUnits;
private _vehicleCount = count vehicles;

private _messageGame = format [
  "Game: Players:%1, DeadUnits:%2, EnemyUnits:%3, AllUnits:%4, AllVehicles:%5",
  count _allPlayers,
  _deadUnitCount,
  _enemyUnitCount,
  count _allUnits,
  _vehicleCount
];

["INFO", _messageGame] call para_g_fnc_log;

// players networking

private _allPlayersNetworkData = _allPlayers select {!((getUserInfo _x) select 7)} apply {(getUserInfo _x) select 9};

private _allPing = _playerNetworkData apply {_x select 0};
private _allBandwidth = _playerNetworkData apply {_x select 1};
private _allDesync = _playerNetworkData apply {_x select 2};

private _messageNetwork = format [
  "PlayersNetworking: PlayersCount:%1 | PlayersPing: Min%2 Mean:%3 Max:%4 | PlayersBandwidth: Min:%5 Mean:%6 Max:%7 | PlayersDesync: Min:%8 Mean:%9 Max:%10",
  count _allPlayers,
  selectMax _allPing,
  [_allPing] call _fnc_get_average,
  selectMin _allPing,
  selectMax _allBandwidth,
  [_allBandwidth] call _fnc_get_average,
  selectMin _allBandwidth,
  selectMax _allDesync,
  [_allDesync] call _fnc_get_average,
  selectMin _allDesync
];

["INFO", _messageNetwork] call para_g_fnc_log;
