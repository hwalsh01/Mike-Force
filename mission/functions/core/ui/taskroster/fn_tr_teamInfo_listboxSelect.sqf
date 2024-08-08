// TODO

disableSerialization;
#include "..\..\..\..\config\ui\ui_def_base.inc"

private _index = lnbCurSelRow VN_TR_SHOWTEAMINFO_RHS_CHANGETEAM_LISTBOX_CTRL;
private _selectedTeam = VN_TR_SHOWTEAMINFO_RHS_CHANGETEAM_LISTBOX_CTRL lnbData [_index, 0];
["changeteam", [_selectedTeam]] call para_c_fnc_call_on_server;

/*
DO NOT REDRAW THE UI HERE AFTER UPDATE

the 'changeteam' function called on the server will remoteExec spawn a tr_overview_update
for us, updating the current task roster view (team selection/information).
*/