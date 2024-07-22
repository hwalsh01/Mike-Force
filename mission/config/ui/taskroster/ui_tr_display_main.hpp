//included by "ui_tr_base.hpp"

class vn_tr_disp_taskRoster_Main
{
	name = "vn_tr_disp_taskRoster_Main";
	//scriptName = "vn_tr_disp_taskRoster_Main";
	//scriptPath = "GUI";
	//If already opened -> Recalling it -> Reloading the Dialog (e.g. like updating the view, without "closing" it)
	onLoad = "[""onLoad"",_this,""vn_tr_disp_taskRoster_Main"",''] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); [] call vn_mf_fnc_tr_overview_init;";
	onUnload = "[""onUnload"",_this,""vn_tr_disp_taskRoster_Main"",''] call 	(uinamespace getvariable 'BIS_fnc_initDisplay');";
	idd = VN_IDD_TR_TASKROSTER;
	movingEnable = 1;
	enableSimulation = 1;
	
	
	class ControlsBackground
	{
		// Prevent the ListNBox from using any control with the idc -1 as its left and right control
		class LNBCatcher: vn_mf_RscText
		{
			idc = -1;
		};
		class folderBackground: vn_mf_RscPicture
		{
			idc = -1;
			x = VN_TR_FOLDER_X;
			y = VN_TR_FOLDER_Y;
			w = VN_TR_FOLDER_W;
			h = VN_TR_FOLDER_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			// empty lhs background sheet
			text = "\vn\ui_f_vietnam\ui\taskroster\img\tr_folder_background_sheetL.paa";
		};
		
		// empty rhs background sheet
		class vn_sheet_clean_R: vn_sheet_clean_R_base
		{
			idc = -1;
		};
		
		// //Must be here... remember the popup nonsense...
		// class vn_tr_missionInfoPolaroid: vn_tr_missionInfoPolaroid_base
		// {
		// 	idc = VN_TR_MISSIONSHEET_IDC;
		// };
		//Support Request Sheet
		class vn_tr_supportRequest: vn_tr_supportRequest_base
		{
			idc = VN_TR_SUPREQ_IDC;
		};
		//Character Informations
		class vn_tr_characterInfo: vn_tr_characterInfo_base
		{
			idc = VN_TR_CHARINFO_IDC;
		};

		//MUST be last entry, so it's above all other Sheets!
		//Main Info -- this is the default RHS sheet
		// "Welcome to $TEAM" -- $TEAM Description -- $ROLES
		// inherits from: mission\config\ui\taskroster\ui_tr_def_ctrls.hpp: vn_tr_MainInfo_base
		// which inherits from: mission\config\ui\ui_def_ctrl_base.hpp: vn_mf_RscControlsGroupNoScrollbarHV
		class vn_tr_blanksheet: vn_tr_blanksheet_base
		{
			idc = VN_TR_BLANKSHEET_RHS_IDC;
		};
		
	};
	
	class Controls
	{
		class lhs_welcome_text_header: vn_mf_RscText
		{
			idc = VN_TR_WELCOMETITLE_IDC;
			style = "0x10";
			x = UIX_CL(17.5);
			y = UIY_CU(10.5);
			w = UIW(16);
			h = UIH(2);
			
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0};
			sizeEx = TXT_L;
			font = USEDFONT_B;
			
			text = "Bro-Nation Mike Force";
		};

		class lhs_welcome_text_blurb: vn_mf_RscStructuredText
		{
			idc = VN_TR_WELCOMEBLURB_IDC;
			style = "0x10";
			x = UIX_CL(17.5);
			y = UIY_CU(8.5);
			w = UIW(16);
			h = UIH(14);
			
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0};
			size = TXT_M;
			
			text = "Mike Force is a co-operative PvE gamemode by <t font='tt2020base_vn_bold'><a href='https://www.savage-game.com'>Savage Game Design</a></t>. This is a modified version of Mike Force brought to you by <t font='tt2020base_vn_bold'><a href='https://discord.gg/bro-nation'>Bro-Nation</a></t>.<br/><br/>This menu can be accessed at any time by pressing the H key.<br/><br/>We recommend new players click on the button below to read our new player guide!<br/><br/>Please join the <t font='tt2020base_vn_bold'><a href='https://discord.gg/bro-nation'>Bro-Nation Discord</a></t> for additional help like: reporting players; reporting bugs; requesting training; joining whitelisted units.";
			class Attributes
			{
				align = "left";
				color = "#000000";
				colorLink = "#0a7012"; // dark green
				font = USEDFONT;
				size = 0.9;
				shadow = 0;
			};
		};

		// button to show first time player info
		class lhs_newbie_info_btn: vn_mf_RscButton
		{
			idc = VN_TR_NEWBIEHELP_BTN_IDC;
			style = "0x10";	//LEFT: "0x10" | Center: "0x02 + 0x10"
			x = UIX_CL(17);
			y = UIY_CU(-5);
			w = UIW(7);
			h = UIH(1.5);
			
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0.1};

			text = "New Player Guide";
			onButtonClick = "hint 'new player guide does nothing yet';";
		};
		

		// button users click to switch team
		class lhs_team_select_btn: vn_mf_RscButton
		{
			idc = VN_TR_TEAMLOGO_BTN_IDC;
			style = "0x10";	//LEFT: "0x10" | Center: "0x02 + 0x10"
			x = UIX_CL(17);
			y = UIY_CU(-7);
			w = UIW(7);
			h = UIH(1.5);
			
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0.1};

			text = "Change Team";
			onButtonClick = "if!((player getVariable 'vn_mf_db_player_group') isEqualTo 'DacCong')then { call vn_mf_fnc_tr_cleanRightSheet; createDialog 'vn_tr_disp_selectTeam' };";

		};
		// resets to main info screen
		// @dijksterhuis: now points to showTeamInfo screen
		class lhs_player_team_and_roles_btn: vn_mf_RscButton
		{
			idc = VN_TR_CURRTEAMTEXT_BTN_IDC;
			style = "0x10";	//LEFT: "0x10" | Center: "0x02 + 0x10"
			
			x = UIX_CL(17);
			y = UIY_CU(-9);
			w = UIW(7);
			h = UIH(1.5);

			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0.1};

			sizeEx = TXT_M;
			onButtonClick = "call vn_mf_fnc_tr_cleanRightSheet; createDialog 'vn_tr_disp_showTeamInfo';";
			MouseButtonDown = "";	//No _this param given
			text = "Your Team/Roles";
		};

		// button users click to open the character info screen
		class lhs_player_rank_and_stats_btn: vn_mf_RscButton
		{
			idc = VN_TR_MEDALSTEXT_BTN_IDC;
			style = "0x10";	//LEFT: "0x10" | Center: "0x02 + 0x10"

			x = UIX_CL(8.5);
			y = UIY_CU(-5);
			w = UIW(7);
			h = UIH(1.5);

			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0.1};
			sizeEx = TXT_M;
			onButtonClick = "call vn_mf_fnc_tr_cleanRightSheet; call vn_mf_fnc_tr_characterInfo_show";
			MouseButtonDown = "";	//No _this param given
			text = "Info/Rank/Medals";
		};

		// TODO: Show the current tasks on RHS -- then switch RHS based on what is selected there
		class lhs_player_active_tasks_btn: vn_mf_RscButton
		{
			idc = VN_TR_CURRTASKSTEXT_BTN_IDC;
			style = "0x10";	//LEFT: "0x10" | Center: "0x02 + 0x10"
			
			x = UIX_CL(8.5);
			y = UIY_CU(-7);
			w = UIW(7);
			h = UIH(1.5);

			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0.1};

			sizeEx = TXT_M;
			// TODO -- see active missions below.
			onButtonClick = "call vn_mf_fnc_tr_cleanRightSheet; createDialog 'vn_tr_disp_showTasksInfo';";
			MouseButtonDown = "";	//No _this param given
			text = "Active Tasks";
		};

		// switches RHS to the support request tab
		class lhs_player_request_support_tasks_btn: vn_mf_RscButton
		{
			idc = VN_TR_TASK_REQ_IDC;
			style = "0x10";	//LEFT: "0x10" | Center: "0x02 + 0x10"
			
			x = UIX_CL(8.5);
			y = UIY_CU(-9);
			w = UIW(7);
			h = UIH(1.5);

			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0.1};
			sizeEx = TXT_M;
			onButtonClick = "call vn_mf_fnc_tr_cleanRightSheet; call vn_mf_fnc_tr_supportTask_show;";
			
			MouseButtonDown = "";	//No _this param given
			text = "Request Support";
		};

		//ALWAYS AT THE BOTTOM/LAST OF THE CONTROLS!
		// 2x binders in the centre of the screen to make it look like a notebook thing
		class folder_cordels: vn_tr_cordels{};
	};
};