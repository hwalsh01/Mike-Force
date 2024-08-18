//included by "ui_tr_base.hpp"

// RIGHT HAND SIDE -- INHERITED BELOW
class vn_tr_disp_showNewPlayerGuide_rhs : vn_mf_RscControlsGroupNoScrollbarHV
{
	idc = -1;
	onLoad = "";

	x = VN_TR_SHEET_R_X;
	y = VN_TR_SHEET_R_Y;
	w = VN_TR_SHEET_R_W;
	h = VN_TR_SHEET_R_H;

	class controls
	{
		class mainInfoBackground: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(0);
			y = UIH(0);
			w = VN_TR_SHEET_L_W;
			h = VN_TR_SHEET_L_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			text = "\vn\ui_f_vietnam\ui\taskroster\img\tr_mainInfo.paa";
			tooltip = "";
		};

		// go find a duty officer and press 6 on them
		class rhs_helper_blurb: vn_mf_RscStructuredText
		{
			idc = -1;
			x = UIW(2);
			y = UIH(4.25);
			w = UIW(11.25);
			h = UIH(5);

			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {0,0,0,0.0};
			text = "This is an arsenal, marked with pink dots on the map around base. Use these to create, save, edit and load your loadouts. Multiple loadouts can be made for different roles and playstyles, be as creative as you like.";
			size = UIH(0.69);
			tooltip = "";
			class Attributes
			{
				align = "left";
				valign = "middle";
				color = "#000000";
				colorLink = "#D09B43";
				font = USEDFONT;
				size = 1;
				shadow = 0;
			};
		};

		class rhs_img_arsenal: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(13);
			y = UIH(4.25);
			w = UIW(5);
			h = UIH(5);
			text = "custom\taskroster\help\img_newplayer_arsenal.paa";
			tooltip = "This is an Arsenal, kit up here.";
		};

		class rhs_img_dutyofficer_map_caption: vn_mf_RscText
		{
			idc = -1;
			x = UIW(14);
			y = UIH(3.5);
			w = UIW(5);
			h = UIH(1);
			sizeEx = TXT_S;
			colorText[] = {0, 0, 0, 1};
			text = "Arsenal";
		};

		class rhs_img_dutyofficer_unit: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(13);
			y = UIH(10);
			w = UIW(5);
			h = UIH(5);

			text = "custom\taskroster\help\img_newplayer_map.paa";
			tooltip = "A Teleporter Map Board.";
		};

		class rhs_img_dutyofficer_unit_caption: rhs_img_dutyofficer_map_caption
		{
			x = UIW(13.5);
			y = UIH(9.2);
			text = "Teleporter";
		};
        
        class rhs_helper_blurb_6: rhs_helper_blurb
        {
            y = UIH(11.25);
            text = "This is a Map Board, use these to quickly teleport to numerous locations on base. Use the 6 key to interact with it.";
        };

		class rhs_img_dutyofficer_wheel: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(13);
			y = UIH(15.75);
			w = UIW(5);
			h = UIH(5);

			text = "custom\taskroster\help\img_newplayer_pads.paa";
			tooltip = "Pick up location.";
		};

		class rhs_img_dutyofficer_wheel_caption: rhs_img_dutyofficer_map_caption
		{
			x = UIW(13.5);
			y = UIH(15);
			text = "Helo Pickup";
		};
	    
	    class rhs_helper_blurb_7: rhs_helper_blurb
        {
            y = UIH(16.5);
            text = "These are the helo pick-up pads, near Green Hornets. Switch to the Air Channel with the period key and hail a Green Hornet pilot to get yourself into the fight!";
        };
	};
};

class vn_tr_disp_showNewPlayerGuide
{
	name = "vn_tr_disp_showNewPlayerGuide";
	//If already opened -> Recalling it -> Reloading the Dialog (e.g. like updating the view, without "closing" it)
	onLoad = "[""onLoad"",_this,""vn_tr_disp_showNewPlayerGuide"",''] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
	onUnload = "[""onUnload"",_this,""vn_tr_disp_showNewPlayerGuide"",''] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [] spawn vn_mf_fnc_tr_overview_init;";
	idd = THISISWRONGONPURPOSE;
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

		//MUST be in the background, otherwise it could "pop up", when clicking on it, covering up the cordles
		class rhs: vn_tr_disp_showNewPlayerGuide_rhs
		{
			idc = -1;
		};
	};

	class Controls
	{
		class title: vn_mf_RscText
		{
			idc = -1;
			x = UIX_CL(17.5);
			y = UIY_CU(10.5);
			w = UIW(16);
			h = UIH(2);

			style = "0x10 + 0x0200";
			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {0,0,0,0.0};
			shadow = 0;
			text = "New Player Guide";
			font = USEDFONT_B;
			sizeEx = TXT_L;
		};

		// go find a duty officer and press 6 on them
		class rhs_helper_blurb2: vn_mf_RscStructuredText
		{
			idc = -1;
			x = UIX_CL(17.5);
			y = UIY_CU(9.5);
			w = UIW(16);
			h = UIH(14);

			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {0,0,0,0.0};
			//text = "In this guide you'll find all the information required to get you into the fight!";
			size = UIH(0.69);
			tooltip = "";
			class Attributes
			{
				align = "left";
				valign = "middle";
				color = "#000000";
				colorLink = "#D09B43";
				font = USEDFONT;
				size = 1;
				shadow = 0;
			};
		};
		// go find a duty officer and press 6 on them
		class rhs_helper_blurb: vn_mf_RscStructuredText
		{
			idc = -1;
			x = UIW(4);
			y = UIH(4.75);
			w = UIW(11.5);
			h = UIH(5);

			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {0,0,0,0.0};
			text = "These are the areas on the map to take. Do not enter blue zones. Yellow circled zones are the active ao. When all sites are destroyed inside the zone the defence phase starts. Green zones are completed.";
			size = UIH(0.69);
			tooltip = "";
			class Attributes
			{
				align = "left";
				valign = "middle";
				color = "#000000";
				colorLink = "#D09B43";
				font = USEDFONT;
				size = 1;
				shadow = 0;
			};
		};

		class rhs_img_zone: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(-1);
			y = UIH(4.75);
			w = UIW(5);
			h = UIH(5);
			text = "custom\taskroster\help\img_newplayer_zone.paa";
			tooltip = "Zones to be taken.";
		};

		class rhs_img_dutyofficer_map_caption: vn_mf_RscText
		{
			idc = -1;
			x = UIW(-0.75);
			y = UIH(4);
			w = UIW(5);
			h = UIH(1);
			sizeEx = TXT_S;
			colorText[] = {0, 0, 0, 1};
			text = "Combat Zones";
		};

		class rhs_img_legend: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(-1);
			y = UIH(10.5);
			w = UIW(5);
			h = UIH(5);

			text = "custom\taskroster\help\img_newplayer_legend.paa";
			tooltip = "Map Legend.";
		};

		class rhs_img_dutyofficer_unit_caption: rhs_img_dutyofficer_map_caption
		{
			x = UIW(-0.60);
			y = UIH(9.7);
			w = UIW(5);
			h = UIH(1);
			text = "Map Legend";
		};

        class rhs_helper_blurb_4: rhs_helper_blurb
        {
            y = UIH(11);
            text = "This is a map legend and can usually be found somewhere on the map. Use this to help navigate yourself around the base and the rest of the map.";
        };

		class rhs_img_cas: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(-1);
			y = UIH(16.25);
			w = UIW(5);
			h = UIH(5);

			text = "custom\taskroster\help\img_newplayer_cas.paa";
			tooltip = "CAS is whitelisted.";
		};

		class rhs_img_dutyofficer_wheel_caption: rhs_img_dutyofficer_map_caption
		{
			x = UIW(-0.75);
			y = UIH(15.5);
			w = UIW(5);
			h = UIH(1);
			text = "CAS and Arty";
		};
     
        class rhs_helper_blurb_3: rhs_helper_blurb
        {
            y = UIH(16.50);
            text = "CAS and heavy artilley are whitelisted, this is to prevent misuse and abuse of these powerful assets to improve all players experience. Enquire in Discord for how to join.";
        };
		
		//Buttons
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