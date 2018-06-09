#define GUI_GRID_X		(0)
#define GUI_GRID_Y		(0)
#define GUI_GRID_W		(0.025)
#define GUI_GRID_H		(0.04)

class Scrollbar;
class RscButtonMenu;
class RscEdit;
class RscPictureKeepAspect;
class RscPictureButton;
class RscButton;
class RscListbox;
class RscHtml;
class RscXSliderH;
class RscCombo;
class RscControlsGroupNoHScrollbars;
class RscText;
class RscStructuredText;
class RscExileXM8PictureButton: RscPictureButton
{
	type = 11;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	color[] = {1,1,1,0.7};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	soundEnter[] = {"",0.1,1};
	soundPush[] = {"",0.1,1};
	soundClick[] = {"",0.1,1};
	soundEscape[] = {"",0.1,1};
};
class RscExileXM8PictureKeepAspect: RscPictureKeepAspect
{
	type = 0;
	style = "0x30 + 0x800";
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "TahomaB";
	sizeEx = 0;
	text = "";
};
class RscExileXM8Html: RscHtml
{
	type = 9;
	style = 0;
	colorText[] = {1,1,1,1};
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	colorBold[] = {1,1,1,1};
	colorLink[] = {1,1,1,0.75};
	colorLinkActive[] = {1,1,1,1};
	colorPicture[] = {1,1,1,1};
	colorPictureLink[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureBorder[] = {0,0,0,0};
	nextPage = "\A3\ui_f\data\gui\rsccommon\rschtml\arrow_right_ca.paa";
	prevPage = "\A3\ui_f\data\gui\rsccommon\rschtml\arrow_left_ca.paa";
	filename = "";
	class H1
	{
		fontBold = "RobotoCondensedBold";
		font = "RobotoCondensed";
		align = "left";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	};
	class H2
	{
		fontBold = "RobotoCondensedBold";
		font = "RobotoCondensed";
		align = "right";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class H3
	{
		fontBold = "RobotoCondensedBold";
		font = "RobotoCondensed";
		align = "left";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class H4
	{
		fontBold = "RobotoCondensedBold";
		font = "RobotoCondensed";
		align = "left";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class H5
	{
		fontBold = "RobotoCondensedBold";
		font = "RobotoCondensed";
		align = "left";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class H6
	{
		fontBold = "RobotoCondensedBold";
		font = "RobotoCondensed";
		align = "left";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class P
	{
		fontBold = "RobotoCondensedBold";
		font = "RobotoCondensed";
		align = "left";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
};

class RscExileXM8XSliderH: RscXSliderH
{
	type = 43;
	style = 0x400 + 0x10;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	colorBackground[] = {0,0,0,1};
	color[] = {1,1,1,0.6};
	arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
};
class RscExileXM8Combo: RscCombo
{
	type = 4;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	style = "0x10 + 0x200";
	colorDisabled[] = {0,0,0,1};
	colorSelect[] = {0,0,0,1};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	class ComboScrollBar
	{
		color[] = {1,1,1,1};
	};
	wholeHeight = 0.45;
	maxHistoryDelay = 1;
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
};
class RscExileXM8ControlsGroupNoHScrollbars: RscControlsGroupNoHScrollbars
{
	type = 15;
	style = 16;
	colorText[] = {1,1,1,1};
	font = "RobotoCondensed";
	SizeEx = "(((((safezoneW / safezoneH) min 1) / 1.2) / 25) * 1)";
	text = "";
	class HScrollbar{};
	class VScrollbar{};
};
class RscExileXM8Text: RscText
{
	type = 0;
	style = 0;
	colorBackground[] ={0,0,0,0};
	font = "RobotoCondensed";
	colorText[] = {1,1,1,1};
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
};
class RscExileXM8StructuredText: RscStructuredText
{
	SizeEx = "(((((safezoneW / safezoneH) min 1) / 1.2) / 25) * 1)";
	type = 13;
	style = 0;
	colorText[] ={1,1,1,1};
	text = "";
	size = "(((((safezoneW / safezoneH) min 1) / 1.2) / 25) * 1)";
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#ffffff";
		colorLink = "#D09B43";
		align = "left";
		shadow = 1;
	};
};
class RscExileXM8Slide
{
	deletable = 0;
	fade = 0;
	shadow = 0;
	style = 16;
	type = 15;
	x = 0 * (0.025);
	y = 0 * (0.04);
	w = 34 * (0.025);
	h = 19 * (0.04);
	show = false;
	class Controls 
	{
	};
	class HScrollbar: Scrollbar
	{
		show = false;
	};
	class VScrollbar: Scrollbar
	{
		show = false;
	};
};
class RscExileXM8Frame: RscExileXM8Text 
{
	text = "";
	colorBackground[] = {255, 255, 255, 0.1}; 
};
class RscExileXM8AppButton: RscButtonMenu
{
	type = 16;
	style = "0x02"; 
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	shadow = 0;
	shortcuts[] = {};
	textureNoShortcut = "\A3\Ui_f\data\GUI\RscCommon\RscButtonMenuSteam\steam_ca.paa";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] = {255, 255, 255, 0.05};
	colorBackground2[] = {255, 255, 255, 0.05};
	colorBackgroundFocused[] = {255, 255, 255, 0.1};
	colorDisabled[] = {1,1,1,0.25};
	colorDisabledSecondary[] = {1,1,1,0.25};
	colorFocused[] = {225/255, 65/255, 65/255, 1};
	colorFocusedSecondary[] = {225/255, 65/255, 65/255, 1};
	colorText[] = {1,1,1,1};
	color[] = {1,1,1,1};
	color2[] = {225/255, 65/255, 65/255, 1};
	font = "PuristaMedium";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "Text";
	colorSecondary[] = {1,1,1,1};
	color2Secondary[] = {0,0,0,1};
	fontSecondary = "PuristaLight";
	sizeExSecondary = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	textSecondary = "";
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
	class Attributes 
	{
		align = "center";
	};
	class AttributesImage
	{
		align = "center";
		color = "#E5E5E5";
		font = "PuristaMedium";
	};
	class ShortcutPos
	{
		left = 0;
		top = 0;	
		h = 1;
		w = 1;
	};
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
};
class RscExileXM8AppButton1x1: RscExileXM8AppButton
{
	x = 0; 
	y = 0;
	w = 6 * (0.025);
	h = 5 * (0.04);
	textureNoShortcut = "";
	text = "";
	class ShortcutPos
	{
		left = (6 * (0.025)) * 0.25;
		top = (5 * (0.04)) * 0.15;	
		w = (6 * (0.025)) * 0.5;
		h = (5 * (0.04)) * 0.5;
	};
	class TextPos
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = (5 * (0.04)) * 0.65;
	};
};
class RscExileXM8AppButton2x1: RscExileXM8AppButton1x1
{
	w = 12.5 * (0.025);
	class ShortcutPos
	{
		left = (12.5 * (0.025)) * 0.5 - (6 * (0.025)) * 0.25;
		top = (5 * (0.04)) * 0.15;	
		w = (6 * (0.025)) * 0.5;
		h = (5 * (0.04)) * 0.5;
	};
};
class RscExileXM8Edit: RscEdit 
{
	colorBackground[] = {255, 255, 255, 0.1};
	colorDisabled[] = {255, 255, 255, 0.1};
	colorSelection[] = {0/255, 178/255, 205/255, 1};
	colorText[] = {252/255, 253/255, 255/255, 1};
	shadow = 2;
	style = "0x00 + 0x50"; 
	type = 2;
	onSetFocus = "_this call ExileClient_gui_xm8_event_onInputBoxFocus";
	onKillFocus = "_this call ExileClient_gui_xm8_event_onInputBoxKillFocus";
	font = "PuristaMedium";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	autoComplete = "";
};
class RscExileXM8Button: RscExileXM8AppButton1x1
{
	height = 2 * (0.04);
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	class Attributes 
	{
		align = "center";
	};
	class AttributesImage
	{
		align = "center";
		color = "#E5E5E5";
		font = "PuristaMedium";
	};
	class TextPos
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = (1 * (0.04)) * 0.5;
	};
};
class RscExileXM8ButtonMenu: RscExileXM8Button
{
	height = 1 * (0.04);
	class TextPos
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = 0;
	};
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
};
class RscExileXM8BackButton: RscExileXM8AppButton1x1
{
	textureNoShortcut = "\exile_assets\texture\ui\xm8_back_ca.paa";
	w = 3 * (0.025);
	h = 2.5 * (0.04);
	class ShortcutPos
	{
		left = 0;
		top = 0;	
		w = 3 * (0.025);
		h = 2.5 * (0.04);
	};
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
};
class RscExileXM8ListBox: RscListbox
{
	type = 5;
	style = 16;
	colorBackground[] = {0,0,0,0.3};
	colorText[] = {1,1,1,1};
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	rowHeight = 0;
	colorDisabled[] = {1,1,1,0.25};
	colorSelect[] = {0,0,0,1};
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	class ListScrollBar
	{
		color[] = {1,1,1,1};
		autoScrollEnabled = 1;
	};
	maxHistoryDelay = 1;
};

// Spawn Select

class SM_SpawnSelect_RscButton
{
	deletable = 0;
	fade = 0;
	type = 1;
	text = "";
	colorText[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorBackground[] = {0, 0, 0, 0.5};
	colorBackgroundDisabled[] = {0, 0, 0, 0.5};
	colorBackgroundActive[] = {0, 0, 0, 1};
	colorFocused[] = {0, 0, 0, 1};
	colorShadow[] = {0, 0, 0, 0};
	colorBorder[] = {0, 0, 0, 1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
	idc = -1;
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "RobotoCondensed";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	url = "";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};

class SM_SpawnSelect_RscExilePrimaryButton: SM_SpawnSelect_RscButton
{
	w = "300 * pixelW";
	h = "60 * pixelH";
	colorBackground[] = {"199/255","38/255","81/255",1};
	colorText[] = {1,1,1,1};
	shadow = 0;
	font = "RobotoMedium";
	sizeEx = "30 * pixelH";
	colorFocused[] = {"199/255","38/255","81/255",0.8};
	colorBackgroundActive[] = {"199/255","38/255","81/255",0.8};
};

class SM_SpawnSelect_RscText
{
	deletable = 0;
	fade = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {1, 1, 1, 1};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	colorShadow[] = {0, 0, 0, 0.5};
	font = "RobotoCondensed";
	SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
};

class SM_SpawnSelect_RscMapControl
{
	deletable = 0;
	fade = 0;
	type = 101;
	idc = 51;
	style = 48;
	colorBackground[] = {0.969, 0.957, 0.949, 1};
	colorOutside[] = {0, 0, 0, 1};
	colorText[] = {0, 0, 0, 1};
	font = "TahomaB";
	sizeEx = 0.04;
	colorSea[] = {0.467, 0.631, 0.851, 0.5};
	colorForest[] = {0.624, 0.78, 0.388, 0.5};
	colorRocks[] = {0, 0, 0, 0.3};
	colorCountlines[] = {0.572, 0.354, 0.188, 0.25};
	colorMainCountlines[] = {0.572, 0.354, 0.188, 0.5};
	colorCountlinesWater[] = {0.491, 0.577, 0.702, 0.3};
	colorMainCountlinesWater[] = {0.491, 0.577, 0.702, 0.6};
	colorForestBorder[] = {0, 0, 0, 0};
	colorRocksBorder[] = {0, 0, 0, 0};
	colorPowerLines[] = {0.1, 0.1, 0.1, 1};
	colorRailWay[] = {0.8, 0.2, 0, 1};
	colorNames[] = {0.1, 0.1, 0.1, 0.9};
	colorInactive[] = {1, 1, 1, 0.5};
	colorLevels[] = {0.286, 0.177, 0.094, 0.5};
	colorTracks[] = {0.84, 0.76, 0.65, 0.15};
	colorRoads[] = {0.7, 0.7, 0.7, 1};
	colorMainRoads[] = {0.9, 0.5, 0.3, 1};
	colorTracksFill[] = {0.84, 0.76, 0.65, 1};
	colorRoadsFill[] = {1, 1, 1, 1};
	colorMainRoadsFill[] = {1, 0.6, 0.4, 1};
	colorGrid[] = {0.1, 0.1, 0.1, 0.6};
	colorGridMap[] = {0.1, 0.1, 0.1, 0.6};
	stickX[] = {0.2, {"Gamma", 1, 1.5}};
	stickY[] = {0.2, {"Gamma", 1, 1.5}};
	class Legend
	{
		colorBackground[] = {1, 1, 1, 0.5};
		color[] = {0, 0, 0, 1};
		x = "SafeZoneX + 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "SafeZoneY + safezoneH - 4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		font = "RobotoCondensed";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	};
	class ActiveMarker
	{
		color[] = {0.3, 0.1, 0.9, 1};
		size = 50;
	};
	class Command
	{
		color[] = {1, 1, 1, 1};
		icon = "\a3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		size = 18;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
	};
	class Task
	{
		taskNone = "#(argb,8,8,3)color(0,0,0,0)";
		taskCreated = "#(argb,8,8,3)color(0,0,0,1)";
		taskAssigned = "#(argb,8,8,3)color(1,1,1,1)";
		taskSucceeded = "#(argb,8,8,3)color(0,1,0,1)";
		taskFailed = "#(argb,8,8,3)color(1,0,0,1)";
		taskCanceled = "#(argb,8,8,3)color(1,0.5,0,1)";
		colorCreated[] = {1, 1, 1, 1};
		colorCanceled[] = {0.7, 0.7, 0.7, 1};
		colorDone[] = {0.7, 1, 0.3, 1};
		colorFailed[] = {1, 0.3, 0.2, 1};
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
		iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
		iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
		iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
		iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
		size = 27;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
	};
	class CustomMark
	{
		color[] = {1, 1, 1, 1};
		icon = "\a3\ui_f\data\map\mapcontrol\custommark_ca.paa";
		size = 18;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
	};
	class Tree
	{
		color[] = {0.45, 0.64, 0.33, 0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		size = 12;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class SmallTree
	{
		color[] = {0.45, 0.64, 0.33, 0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		size = 12;
		importance = "0.6 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Bush
	{
		color[] = {0.45, 0.64, 0.33, 0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		size = "14/2";
		importance = "0.2 * 14 * 0.05 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Church
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
	};
	class Chapel
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
	};
	class Cross
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
	};
	class Rock
	{
		color[] = {0.1, 0.1, 0.1, 0.8};
		icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
		size = 12;
		importance = "0.5 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Bunker
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		size = 14;
		importance = "1.5 * 14 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Fortress
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		size = 16;
		importance = "2 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Fountain
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
		size = 11;
		importance = "1 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class ViewTower
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
		size = 16;
		importance = "2.5 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Lighthouse
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
	};
	class Quay
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
	};
	class Fuelstation
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
	};
	class Hospital
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
	};
	class BusStop
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
	};
	class LineMarker
	{
		textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
		lineWidthThin = 0.008;
		lineWidthThick = 0.014;
		lineDistanceMin = 3e-005;
		lineLengthMin = 5;
	};
	class Transmitter
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
	};
	class Stack
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
		size = 16;
		importance = "2 * 16 * 0.05";
		coefMin = 0.4;
		coefMax = 2;
	};
	class Ruin
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
		size = 16;
		importance = "1.2 * 16 * 0.05";
		coefMin = 1;
		coefMax = 4;
	};
	class Tourism
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
		size = 16;
		importance = "1 * 16 * 0.05";
		coefMin = 0.7;
		coefMax = 4;
	};
	class Watertower
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
	};
	class Waypoint
	{
		color[] = {1, 1, 1, 1};
		importance = 1;
		coefMin = 1;
		coefMax = 1;
		icon = "\a3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		size = 18;
	};
	class WaypointCompleted
	{
		color[] = {1, 1, 1, 1};
		importance = 1;
		coefMin = 1;
		coefMax = 1;
		icon = "\a3\ui_f\data\map\mapcontrol\waypointcompleted_ca.paa";
		size = 18;
	};
	moveOnEdges = 1;
	x = "SafeZoneXAbs";
	y = "SafeZoneY + 1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	w = "SafeZoneWAbs";
	h = "SafeZoneH - 1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	shadow = 0;
	ptsPerSquareSea = 5;
	ptsPerSquareTxt = 20;
	ptsPerSquareCLn = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareFor = 9;
	ptsPerSquareForEdge = 9;
	ptsPerSquareRoad = 6;
	ptsPerSquareObj = 9;
	showCountourInterval = 0;
	scaleMin = 0.001;
	scaleMax = 1;
	scaleDefault = 0.16;
	maxSatelliteAlpha = 0.85;
	alphaFadeStartScale = 2;
	alphaFadeEndScale = 2;
	colorTrails[] = {0.84, 0.76, 0.65, 0.15};
	colorTrailsFill[] = {0.84, 0.76, 0.65, 0.65};
	fontLabel = "RobotoCondensed";
	sizeExLabel = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontGrid = "TahomaB";
	sizeExGrid = 0.02;
	fontUnits = "TahomaB";
	sizeExUnits = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontNames = "EtelkaNarrowMediumPro";
	sizeExNames = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
	fontInfo = "RobotoCondensed";
	sizeExInfo = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontLevel = "TahomaB";
	sizeExLevel = 0.02;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	idcMarkerColor = -1;
	idcMarkerIcon = -1;
	textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
	showMarkers = 1;
	class power
	{
		icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
		color[] = {1, 1, 1, 1};
	};
	class powersolar
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
		color[] = {1, 1, 1, 1};
	};
	class powerwave
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
		color[] = {1, 1, 1, 1};
	};
	class powerwind
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
		color[] = {1, 1, 1, 1};
	};
	class Shipwreck
	{
		icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1;
		color[] = {0, 0, 0, 1};
	};
};

class RscExileSelectSpawnLocationDialog
{
	idd = 24002;
	duration = -1;
	onLoad = "uiNamespace setVariable ['RscExileSelectSpawnLocationDialog', _this select 0]; with uiNameSpace do { [_this select 0, 'RscExileSelectSpawnLocationDialog'] call ExileClient_gui_loadingScreen_load; };";
	onUnload = "with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; }; uiNamespace setVariable ['RscExileSelectSpawnLocationDialog', displayNull]";
	onKeyDown = "_this call ExileClient_gui_loadingScreen_event_onKeyDown";
	class controlsBackground
	{
		class CA_Map: SM_SpawnSelect_RscMapControl
		{
			idcMarkerColor = 1090;
			idcMarkerIcon = 1091;
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
			onDraw = "_this call SM_fnc_HandleMarkers";
			onMouseButtonDown = "_this call SM_fnc_HandleMouseButtonDown";
		};
	};
	class controls
	{
		class SpawnGround: SM_SpawnSelect_RscExilePrimaryButton
		{
			idc = 18;
			text = "Spawn";
			x = "safeZoneX + (60 + 766) * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 15 + 60) * pixelH";
			w = "265 * pixelW";
			h = "60 * pixelH";
			onButtonClick = "[0] call ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick";
		};
		/*
		class Halo: SM_SpawnSelect_RscExilePrimaryButton
		{
			idc = 19;
			text = "Halo";
			x = "safeZoneX + (60 + 766) * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 15 + 60) * pixelH";
			w = "265 * pixelW";
			h = "60 * pixelH";
			onButtonClick = "[2] call ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick";
		};
		class Para: SM_SpawnSelect_RscExilePrimaryButton
		{
			idc = 20;
			text = "Parachute";
			x = "safeZoneX + (60 + 1032) * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 15 + 60) * pixelH";
			w = "265 * pixelW";
			h = "60 * pixelH";
			onButtonClick = "[1] call ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick";
		};
		*/
		class Random: SM_SpawnSelect_RscExilePrimaryButton
		{
			idc = 21;
			text = "Random";
			x = "safeZoneX + (60 + 766) * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 15 + 121) * pixelH";
			w = "265 * pixelW";
			h = "60 * pixelH";
			onButtonClick = "[3] call ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick";
		};
		class InformationText: SM_SpawnSelect_RscText
		{
			idc = 22;
			text = "To select a spawn location, hover over a marker on the map and left click it.";
			x = "safeZoneX + (60 + 500) * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 14) * pixelH";
			w = "797 * pixelW";
			h = "30 * pixelH";
			style = 0x02;
			colorBackground[] = {0.1,0.1,0.1,0.5};
			colorText[] = {1,1,1,1};
		};
	};
};

