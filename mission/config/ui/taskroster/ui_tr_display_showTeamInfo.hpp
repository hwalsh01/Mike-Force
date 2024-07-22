//included by "ui_tr_base.hpp"

class vn_tr_disp_showTeamInfo
{
	name = "vn_tr_disp_showTeamInfo";
	//If already opened -> Recalling it -> Reloading the Dialog (e.g. like updating the view, without "closing" it)
	// TODO: rename vn_mf_fnc_tr_mainInfo_show to vn_mf_fnc_tr_showTeamInfo_show
	onLoad = "[""onLoad"",_this,""vn_tr_disp_showTeamInfo"",''] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); _this call vn_mf_fnc_tr_mainInfo_show;";
	onUnload = "[""onUnload"",_this,""vn_tr_disp_showTeamInfo"",''] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); [] spawn vn_mf_fnc_tr_overview_init;";
	idd = VN_IDD_TR_SHOWTEAMINFO_WRONG;
	movingEnable = 1;
	enableSimulation = 1;
		
	class ControlsBackground
	{
		class folderBackground: vn_mf_RscPicture
		{
			idc = -1;
			x = VN_TR_FOLDER_X;
			y = VN_TR_FOLDER_Y;
			w = VN_TR_FOLDER_W;
			h = VN_TR_FOLDER_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			text = "\vn\ui_f_vietnam\ui\taskroster\img\tr_folder_background_sheetL.paa";
		};
		
		//MUST be in the background, otherwise it could "pop up", when clicking on it, covering up the cordles (silly Arma, y u do dis? :sad:)
		///////////////////Right:
		//Teamselection
		class vn_tr_selectTeam: vn_tr_MainInfo_base
		{
			idc = VN_TR_MAININFO_IDC;
		};
	};
	
	
	class Controls
	{
		
		///////////////////Left:
		class lhs_main_text_header: vn_mf_RscText
		{
			idc = -1;
			style = "0x10";

			x = UIX_CL(17.5);
			y = UIY_CU(10.5);
			w = UIW(6);
			h = UIH(2);
			
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			sizeEx = TXT_L;
			font = USEDFONT_B;
			
			text = "Your Team";
		};

		// Current Team: %1
		class text_top: vn_mf_RscStructuredText
		{
			idc = VN_TR_SHOWTEAM_LHS_TEAMNAME_IDC;
			x = UIX_CL(12);
			y = UIY_CU(10.35);
			w = UIW(7);
			h = UIH(1.5);
			
		
			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {0,0,0,0.0};
			text = "";
			sizeEx = TXT_S;
			tooltip = "";
			class Attributes
			{
				align = "right";
				valign = "middle";
				color = "#000000";
				colorLink = "#D09B43";
				font = USEDFONT;
				size = 1;
				shadow = 0;
			};
		};

		class lhs_team_logo_img: vn_mf_RscPicture
		{
			idc = VN_TR_SHOWTEAM_LHS_LOGO_IDC;
			x = UIX_CL(4.5);
			y = UIY_CU(11);
			w = UIW(2);
			h = UIH(2);
			
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			text = "";
			tooltip = "";
		};
		

		// Text for the team's description field.
		class lhs_team_description_stext: vn_mf_RscStructuredText
		{
			idc = VN_TR_SHOWTEAM_LHS_DESC_IDC;
			style = "0x10";

			x = UIX_CL(17.5);
			y = UIY_CU(8.5);
			w = UIW(15);
			h = UIH(6);

			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0.0};
			sizeEx = TXT_XS;
			text = "adasd";
			tooltip = "";
			class Attributes
			{
				align = "left";
				color = "#000000";
				colorLink = "#D09B43";
				font = USEDFONT;
				size = 0.8;
				shadow = 0;
			};
		};

		class PlayersRoleListHeader: vn_mf_RscControlsGroupNoScrollbarH
		{
			idc = VN_TR_MAININFO_GRP_PLAYERSHEADER_IDC;
			x = UIX_CL(17.5);
			y = UIY_CU(4.5);
			w = UIW(15);
			h = UIH(0.75);
			class controls
			{
				class PlayerName: vn_mf_RscStructuredText
				{
					text = "Players"
					x = 0;
					y = 0;
					w = UIW(16);
					h = UIH(0.75);
					size = TXT_S;
					class Attributes
					{
						align = "left";
						color = "#000000";
						colorLink = "#D09B43";
						font = USEDFONT_B;
						size = 1;
						shadow = 0;
					};
				};
				class RoleImgs: PlayerName
				{
					text = "Roles";
					x = UIW(11);
					w = UIW(3);
				};
			};
		};
		class PlayersRoleList: PlayersRoleListHeader
		{
			idc = VN_TR_MAININFO_GRP_PLAYERS_IDC;
			// y = UIY_CU(-2.25);
			y = UIY_CU(3.75);
			h = UIH(5);
			colorBackground[] = {0, 0, 0, 1};
			class controls {};
		};

		class RoleLimitsHeader: vn_mf_RscControlsGroupNoScrollbarH
		{
			idc = VN_TR_MAININFO_LHS_ROLELIMITSHEADER_IDC;
			x = UIX_CL(17.5);
			y = UIY_CU(-3);

			w = UIW(15);
			h = UIH(0.75);
			class controls
			{
				class Role: vn_mf_RscStructuredText
				{
					text = "Team Role Allowance"
					x = 0;
					y = 0;
					w = UIW(6);
					h = UIH(0.75);
					size = TXT_S;
					class Attributes
					{
						align = "left";
						color = "#000000";
						colorLink = "#D09B43";
						font = USEDFONT_B;
						size = 1;
						shadow = 0;
					};
				};
				class PlayerCount: Role
				{
					text = "Players";
					x = UIW(8.5);
					w = UIW(4);
				};
				class PlayerCountLimit: Role
				{
					text = "Limit";
					x = UIW(12.5);
					w = UIW(3);
				};
			};
		};
		class RoleLimits: RoleLimitsHeader
		{
			idc = VN_TR_MAININFO_LHS_ROLELIMITS_IDC;
			y = UIY_CU(-3.75);
			h = UIH(5);
			colorBackground[] = {0, 0, 0, 1};
			class controls {};
		};

		// class lhs_player_list_subtitle: vn_mf_RscStructuredText
		// {
		// 	idc = -1;
		// 	x = UIX_CL(17.5);
		// 	y = UIY_CU(-1.25);
		// 	w = UIW(16);
		// 	h = UIH(1);
			
		// 	colorText[] = {0.1,0.1,0.1,0.9};
		// 	colorBackground[] = {0,0,0,0.0};
		// 	text = "Team mates and their roles";
		// 	size = UIH(0.9);
		// 	tooltip = "";
		// 	class Attributes
		// 	{
		// 		align = "left";
		// 		valign = "middle";
		// 		color = "#000000";
		// 		colorLink = "#D09B43";
		// 		font = USEDFONT;
		// 		size = 1;
		// 		shadow = 0;
		// 	};
		// };

		class lhs_back_btn: vn_mf_RscButton
		{
			idc = -1;

			x = UIX_CL(17);
			y = UIY_CU(-9);
			w = UIW(7);
			h = UIH(1.5);
			
			text = "BACK";
			font = USEDFONT;
			sizeEx = TXT_L;
			onButtonClick = "(ctrlParent param[0]) closeDisplay 2";
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0.1};
		};
		
		//ALWAYS AT THE BOTTOM/LAST OF THE CONTROLS!
		class folder_cordels: vn_tr_cordels
		{};
	};
};