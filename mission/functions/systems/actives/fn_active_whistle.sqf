/*
	File: fn_active_whistle.sqf
	Author: Cerebral
	Public: No
	
	Description:
		Blows a whistle (For Dac Cong)
	
	Parameter(s): none
	
	Returns:
	
	Example(s):
		call vn_mf_fnc_active_whistle;
*/

if (([player, 'DacCong'] call vn_mf_fnc_player_on_team)) then
{
	[] spawn
	{
		vn_mf_whistle = "DacWhistle" createSoundSource ["", player, [], 0];
		vn_mf_whistle setSoundParams [1, 1, 1, 0];
		vn_mf_whistle playSound "";
		sleep 2;
		deleteVehicle vn_mf_whistle;
	}
};


