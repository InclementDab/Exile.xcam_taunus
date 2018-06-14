#define GUI_GRID_X		(0)
#define GUI_GRID_Y		(0)
#define GUI_GRID_W		(0.025)
#define GUI_GRID_H		(0.04)


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
class RscPicture;

class ExileBackgroundPicture: RscPicture
{
	idc=66000;
	x="safezoneX";
	y="safezoneY";
	w="safezoneW";
	h="safezoneW * 4/3";
	text="assets\loadingscreen.paa";
};

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
	class HScrollbar
	{
		show = false;
	};
	class VScrollbar
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
			y = "safeZoneY + safeZoneH - (60 + 15 + 121) * pixelH";
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
			y = "safeZoneY + safeZoneH - (60 + 15 + 60) * pixelH";
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


// SM_TraderPlus


/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

class SM_TraderPlus_ScrollBar
{
	color[] = {1, 1, 1, 0.6};
	colorActive[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.3};
	thumb = "\A3\ui_f\data\gui\cfg\ScrollBar\thumb_ca.paa";
	arrowEmpty = "\A3\ui_f\data\gui\cfg\ScrollBar\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\ScrollBar\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\ScrollBar\border_ca.paa";
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};
class SM_TraderPlus_RscText
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
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
};
class SM_TraderPlus_RscButton
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
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	url = "";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};
class SM_TraderPlus_RscProgress
{
	deletable = 0;
	fade = 0;
	type = 8;
	style = 0;
	colorFrame[] = {0, 0, 0, 0};
	colorBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
	x = 0.344;
	y = 0.619;
	w = 0.313726;
	h = 0.0261438;
	shadow = 2;
	texture = "#(argb,8,8,3)color(1,1,1,1)";
};
class SM_TraderPlus_RscStructuredText
{
	deletable = 0;
	fade = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {1, 1, 1, 1};
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#ffffff";
		colorLink = "#D09B43";
		align = "left";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 1;
};
class SM_TraderPlus_RscPicture
{
	deletable = 0;
	fade = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {1, 1, 1, 1};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
};
class SM_TraderPlus_RscPictureKeepAspect: SM_TraderPlus_RscPicture
{
	style = "0x30 + 0x800";
};
class SM_TraderPlus_RscCombo
{
	deletable = 0;
	fade = 0;
	type = 4;
	colorSelect[] = {0, 0, 0, 1};
	colorText[] = {1, 1, 1, 1};
	colorBackground[] = {0, 0, 0, 1};
	colorScrollBar[] = {1, 0, 0, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorPicture[] = {1, 1, 1, 1};
	colorPictureSelected[] = {1, 1, 1, 1};
	colorPictureDisabled[] = {1, 1, 1, 0.25};
	colorPictureRight[] = {1, 1, 1, 1};
	colorPictureRightSelected[] = {1, 1, 1, 1};
	colorPictureRightDisabled[] = {1, 1, 1, 0.25};
	colorTextRight[] = {1, 1, 1, 1};
	colorSelectRight[] = {0, 0, 0, 1};
	colorSelect2Right[] = {0, 0, 0, 1};
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect", 0.1, 1};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand", 0.1, 1};
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse", 0.1, 1};
	maxHistoryDelay = 1;
	class ComboScrollBar: SM_TraderPlus_ScrollBar
	{
		color[] = {1, 1, 1, 1};
	};
	style = "0x10 + 0x200";
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;
	colorSelectBackground[] = {1, 1, 1, 0.7};
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
	colorActive[] = {1, 0, 0, 1};
};
class SM_TraderPlus_RscListBox
{
	deletable = 0;
	fade = 0;
	type = 5;
	rowHeight = 0;
	colorText[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorScrollBar[] = {1, 0, 0, 0};
	colorSelect[] = {0, 0, 0, 1};
	colorSelect2[] = {0, 0, 0, 1};
	colorSelectBackground[] = {0.95, 0.95, 0.95, 1};
	colorSelectBackground2[] = {1, 1, 1, 0.5};
	colorBackground[] = {0, 0, 0, 0.3};
	soundSelect[] = {"\A3\ui_f\data\sound\RscListBox\soundSelect", 0.09, 1};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	colorPicture[] = {1, 1, 1, 1};
	colorPictureSelected[] = {1, 1, 1, 1};
	colorPictureDisabled[] = {1, 1, 1, 0.25};
	colorPictureRight[] = {1, 1, 1, 1};
	colorPictureRightSelected[] = {1, 1, 1, 1};
	colorPictureRightDisabled[] = {1, 1, 1, 0.25};
	colorTextRight[] = {1, 1, 1, 1};
	colorSelectRight[] = {0, 0, 0, 1};
	colorSelect2Right[] = {0, 0, 0, 1};
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
	class ListScrollBar: SM_TraderPlus_ScrollBar
	{
		color[] = {1, 1, 1, 1};
		autoScrollEnabled = 1;
	};
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
	style = 16;
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	colorShadow[] = {0, 0, 0, 0.5};
	period = 1.2;
	maxHistoryDelay = 1;
};
class SM_TraderPlus_ExileItemListBox: SM_TraderPlus_RscListBox
{
	sizeEx = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	sizeEx2 = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	rowHeight = "2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	canDrag = 0;
	itemSpacing = 0.001;
	period = 1.2;
	shadow = 0;
	maxHistoryDelay = 1;
	fade = 0;
	deletable = 0;
	type = 5;
	style = 16;
	colorBackground[] = {0,0,0,0.3};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorPictureSelected[] = {1,1,1,1};
	colorScrollBar[] = {1,0,0,0};
	colorSelect2[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorSelectRight[] = {0,0,0,1};
	colorShadow[] = {0,0,0,0.5};
	colorText[] = {1,1,1,1};
	colorTextRight[] = {1,1,1,1};
	disabledCtrlColor[] = {1,1,1,0.5};
	itemBackground[] = {1,1,1,0.1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
};
class SM_TraderPlus_RscCheckBox
{
	idc = -1;
	type = 77;
	deletable = 0;
	style = 0;
	checked = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	color[] = {1, 1, 1, 0.7};
	colorFocused[] = {1, 1, 1, 1};
	colorHover[] = {1, 1, 1, 1};
	colorPressed[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.2};
	colorBackground[] = {0, 0, 0, 0};
	colorBackgroundFocused[] = {0, 0, 0, 0};
	colorBackgroundHover[] = {0, 0, 0, 0};
	colorBackgroundPressed[] = {0, 0, 0, 0};
	colorBackgroundDisabled[] = {0, 0, 0, 0};
	textureChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureDisabledChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
	soundEnter[] = {"", 0.1, 1};
	soundPush[] = {"", 0.1, 1};
	soundClick[] = {"", 0.1, 1};
	soundEscape[] = {"", 0.1, 1};
};
class SM_TraderPlus_RscEdit
{
	deletable = 0;
	fade = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {0.95, 0.95, 0.95, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "RobotoCondensed";
	shadow = 2;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	canModify = 1;
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
};
class SM_TraderPlus_RscControlsGroup
{
	deletable = 0;
	fade = 0;
	class VScrollbar: SM_TraderPlus_ScrollBar
	{
		color[] = {1, 1, 1, 1};
		width = 0.021;
		autoScrollEnabled = 1;
	};
	class HScrollbar: SM_TraderPlus_ScrollBar
	{
		color[] = {1, 1, 1, 1};
		height = 0.028;
	};
	class Controls //sources - []
	{
	};
	type = 15;
	idc = -1;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	shadow = 0;
	style = 16;
};
class SM_TraderPlus_RscControlsGroupNoHScrollbars: SM_TraderPlus_RscControlsGroup
{
	y = -0.044;
	class HScrollbar: HScrollbar
	{
		width = 0;
	};
};
class SM_TraderPlus_ItemGroup: SM_TraderPlus_RscControlsGroupNoHScrollbars
{
	y = 0;
	w = 0.15;
	h = 0.15;
	onMouseButtonDown = "_this call ExileClient_gui_traderDialog_event_onStoreListBoxSelectionChanged; true";
	onMouseButtonDblClick = "[] call ExileClient_gui_traderDialog_event_onPurchaseButtonClick; true";
	class controls
	{
		class Background: SM_TraderPlus_RscText
		{
			idc = 4201;
			x = 0;
			y = 0;
			w = 0.15;
			h = 0.15;
			colorBackground[] = {0.2,0.2,0.2,1};
		};
		class ItemPicture: SM_TraderPlus_RscPictureKeepAspect
		{
			idc = 4202;
			x = 0;
			y = 0;
			w = 0.15;
			h = 0.15;
			text = "";
		};
		class DisplayName: SM_TraderPlus_RscStructuredText
		{
			idc = 4203;
			x = 0;
			y = 0;
			w = 0.15;
			h = 0.15;
			text = "";
		};
		class Price: SM_TraderPlus_RscStructuredText
		{
			idc = 4204;
			x = 0;
			y = 0.098;
			w = 0.15;
			h = 0.045;
			text = "<t size='1' align='right'>0 <img size='1.5' image='exile_assets\texture\ui\poptab_trader_ca.paa'/></t>";
		};
		class ToolTip: SM_TraderPlus_RscButton
		{
			idc = 4205;
			x = 0;
			y = 0;
			w = 0.15;
			h = 0.15;
			colorText[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			soundEnter[] = {};
			soundPush[] = {};
			soundClick[] = {};
			soundEscape[] = {};
			shadow = 0;
			tooltip = "";
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {0.2,0.2,0.2,1};
			tooltipColorShade[] = {0.2,0.2,0.2,1};
		};
	};
};
class RscExileTraderDialog
{
	idd = 24007;
	onLoad = "uiNamespace setVariable ['RscExileTraderDialog', _this select 0]";
	onUnload = "call ExileClient_gui_traderDialog_event_onUnload; uiNamespace setVariable ['RscExileTraderDialog', displayNull]";
	class controlsBackground
	{
		class Background01: SM_TraderPlus_RscText
		{
			idc = 4000;
			x = -0.4425;
			y = -0.044;
			w = 0.4375;
			h = 0.04;
			text = "StokesMagee";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class Background02: SM_TraderPlus_RscText
		{
			idc = 1005;
			x = 1.00499;
			y = -0.044;
			w = 0.3;
			h = 0.04;
			text = "STATS";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class Background03: SM_TraderPlus_RscText
		{
			idc = 1003;
			x = 1.00499;
			y = 0;
			w = 0.3;
			h = 0.96;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class Background04: SM_TraderPlus_RscText
		{
			idc = 1009;
			x = 0.5125;
			y = 0.98;
			w = 0.4875;
			h = 0.1;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class Background05: SM_TraderPlus_RscText
		{
			idc = 1001;
			x = 1.00499;
			y = 0.98;
			w = 0.3;
			h = 0.1;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class Background06: SM_TraderPlus_RscText
		{
			idc = 1000;
			x = -0.4425;
			y = 0.98;
			w = 0.4375;
			h = 0.1;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class Background07: SM_TraderPlus_RscText
		{
			idc = 1002;
			x = -0.4425;
			y = 0;
			w = 0.4375;
			h = 0.96;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class Background08: SM_TraderPlus_RscText
		{
			idc = 1007;
			x = 0;
			y = 0.98;
			w = 0.4875;
			h = 0.1;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class Background09: SM_TraderPlus_RscText
		{
			idc = 1008;
			x = 0.25;
			y = -0.136;
			w = 0.525;
			h = 0.08;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class LoadBackground: SM_TraderPlus_RscText
		{
			idc = 4425;
			x = -0.43;
			y = 0.892;
			w = 0.4125;
			h = 0.052;
			colorBackground[] = {0,0,0,1};
		};
	};
	class controls
	{
		class SellButton: SM_TraderPlus_RscButton
		{
			idc = 4007;
			text = "SELL";
			x = -0.43;
			y = 1;
			w = 0.4125;
			h = 0.06;
			onButtonClick = "[] call ExileClient_gui_traderDialog_event_onSellButtonClick";
		};
		class CancelButton: SM_TraderPlus_RscButton
		{
			idc = 4006;
			text = "CANCEL";
			x = 1.01999;
			y = 1;
			w = 0.275;
			h = 0.06;
			onButtonClick = "closeDialog 0;";
		};
		class PlayerLoadProgress: SM_TraderPlus_RscProgress
		{
			idc = 4012;
			x = -0.43;
			y = 0.892;
			w = 0.4125;
			h = 0.052;
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {0,0,0,1};
		};
		class PlayerLoadLabel: SM_TraderPlus_RscText
		{
			idc = 4013;
			text = "LOAD";
			x = -0.43;
			y = 0.892;
			w = 0.4125;
			h = 0.052;
		};
		class PlayerLoadValue: SM_TraderPlus_RscStructuredText
		{
			idc = 4014;
			text = "100%";
			x = -0.43;
			y = 0.892;
			w = 0.4125;
			h = 0.052;
		};
		class PurchaseButton: SM_TraderPlus_RscButton
		{
			idc = 4010;
			text = "PURCHASE";
			x = 0.76125;
			y = 1;
			w = 0.22625;
			h = 0.06;
			onButtonClick = "_this call ExileClient_gui_traderDialog_event_onPurchaseButtonClick";
		};
		class HideItemsButton: SM_TraderPlus_RscButton
		{
			idc = 1603;
			text = "SHOW PLAYER";
			x = 0.525;
			y = 1;
			w = 0.22625;
			h = 0.06;
			onButtonClick = "call SM_TraderPlus_onHideItemsButtonClick; true";
		};
		class Search: SM_TraderPlus_RscEdit
		{
			idc = 15103;
			text = "Search";
			x = 0.0125;
			y = 1;
			w = 0.22625;
			h = 0.06;
		};
		class SearchButton: SM_TraderPlus_RscButton
		{
			idc = 4055;
			text = "SEARCH";
			x = 0.24875;
			y = 1;
			w = 0.22625;
			h = 0.06;
			onButtonClick = "'' call SM_TraderPlus_onSearchButtonClick";
		};
		class TextPlayerMoney: SM_TraderPlus_RscStructuredText
		{
			idc = 4002;
			text = "0";
			x = -0.4425;
			y = -0.044;
			w = 0.4375;
			h = 0.04;
		};
		class ItemPicture: SM_TraderPlus_RscPictureKeepAspect
		{
			idc = 4003;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 1.01999;
			y = 0.02;
			w = "11 * (0.025)";
			h = "9 * (0.04)";
		};
		class InventoryDropDown: SM_TraderPlus_RscCombo
		{
			idc = 4004;
			x = -0.43;
			y = 0.02;
			w = "16.5 * (0.025)";
			h = "1 * (0.04)";
			onLBSelChanged = "_this call ExileClient_gui_traderDialog_event_onPlayerInventoryDropDownSelectionChanged";
		};
		class InventoryListBox: SM_TraderPlus_ExileItemListBox
		{
			idc = 4005;
			x = -0.43;
			y = 0.076;
			w = "16.5 * (0.025)";
			h = "20 * (0.04)";
			colorBackground[] = {1,1,1,0.1};
			onLBDblClick = "if (((_this select 0) lbValue (_this select 1)) != -1) then { [] call ExileClient_gui_traderDialog_event_onSellButtonClick };";
			onLBSelChanged = "_this call ExileClient_gui_traderDialog_event_onPlayerInventoryListBoxSelectionChanged";
		};
		class StoreDropDown: SM_TraderPlus_RscCombo
		{
			idc = 4008;
			x = 0.26;
			y = -0.116;
			w = "16.5 * (0.025)";
			h = "1 * (0.04)";
			onLBSelChanged = "_this call ExileClient_gui_traderDialog_event_onStoreDropDownSelectionChanged";
		};
		class PrimaryWeaponFilter: SM_TraderPlus_RscCheckBox
		{
			idc = 4044;
			x = 0.6875;
			y = -0.116;
			w = "1.2 * (0.025)";
			h = "1 * (0.04)";
			tooltip = "Show only items that are compatible with your primary weapon.";
			color[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,0.25};
			colorFocused[] = {1,1,1,1};
			colorHover[] = {0,0,0,1};
			colorPressed[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.8};
			colorBackgroundFocused[] = {0,0,0,0.8};
			colorBackgroundHover[] = {1,1,1,1};
			colorBackgroundPressed[] = {0,0,0,0.8};
			soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
			soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
			textureChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureDisabledChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureFocusedChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureHoverChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			texturePressedChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureDisabledUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			textureHoverUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			textureFocusedUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			texturePressedUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			textureUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			onCheckedChanged = "_this call ExileClient_gui_traderDialog_event_onFilterCheckboxStateChanged";
			show = "false";
		};
		class HandgunWeaponFilter: PrimaryWeaponFilter
		{
			idc = 4045;
			x = 0.73;
			y = -0.116;
			tooltip = "Show only items that are compatible with your handgun.";
			textureChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureDisabledChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureFocusedChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureHoverChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			texturePressedChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureDisabledUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
			textureHoverUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
			textureFocusedUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
			texturePressedUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
			textureUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
		};
		class Stat01Background: SM_TraderPlus_RscText
		{
			idc = 4015;
			x = 1.01999;
			y = "11 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat01Progress: SM_TraderPlus_RscProgress
		{
			idc = 4016;
			x = 1.01999;
			y = "11 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat01Label: SM_TraderPlus_RscText
		{
			idc = 4017;
			text = "ARMOR";
			x = 1.01999;
			y = "11 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat01Value: SM_TraderPlus_RscStructuredText
		{
			idc = 4018;
			text = "0";
			x = 1.01999;
			y = "11 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat02Background: SM_TraderPlus_RscText
		{
			idc = 4019;
			x = 1.01999;
			y = "12.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat02Progress: SM_TraderPlus_RscProgress
		{
			idc = 4020;
			x = 1.01999;
			y = "12.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat02Label: SM_TraderPlus_RscText
		{
			idc = 4021;
			text = "ARMOR";
			x = 1.01999;
			y = "12.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat02Value: SM_TraderPlus_RscStructuredText
		{
			idc = 4022;
			text = "0";
			x = 1.01999;
			y = "12.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat03Background: SM_TraderPlus_RscText
		{
			idc = 4023;
			x = 1.01999;
			y = "14 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat03Progress: SM_TraderPlus_RscProgress
		{
			idc = 4024;
			x = 1.01999;
			y = "14 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat03Label: SM_TraderPlus_RscText
		{
			idc = 4025;
			text = "ARMOR";
			x = 1.01999;
			y = "14 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat03Value: SM_TraderPlus_RscStructuredText
		{
			idc = 4026;
			text = "0";
			x = 1.01999;
			y = "14 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat04Background: SM_TraderPlus_RscText
		{
			idc = 4027;
			x = 1.01999;
			y = "15.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat04Progress: SM_TraderPlus_RscProgress
		{
			idc = 4028;
			x = 1.01999;
			y = "15.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat04Label: SM_TraderPlus_RscText
		{
			idc = 4029;
			text = "ARMOR";
			x = 1.01999;
			y = "15.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat04Value: SM_TraderPlus_RscStructuredText
		{
			idc = 4030;
			text = "0";
			x = 1.01999;
			y = "15.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat05Background: SM_TraderPlus_RscText
		{
			idc = 4031;
			x = 1.01999;
			y = "17 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat05Progress: SM_TraderPlus_RscProgress
		{
			idc = 4032;
			x = 1.01999;
			y = "17 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat05Label: SM_TraderPlus_RscText
		{
			idc = 4033;
			text = "ARMOR";
			x = 1.01999;
			y = "17 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat05Value: SM_TraderPlus_RscStructuredText
		{
			idc = 4034;
			text = "0";
			x = 1.01999;
			y = "17 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat06Background: SM_TraderPlus_RscText
		{
			idc = 4035;
			x = 1.01999;
			y = "18.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat06Progress: SM_TraderPlus_RscProgress
		{
			idc = 4036;
			x = 1.01999;
			y = "18.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat06Label: SM_TraderPlus_RscText
		{
			idc = 4037;
			text = "ARMOR";
			x = 1.01999;
			y = "18.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat06Value: SM_TraderPlus_RscStructuredText
		{
			idc = 4038;
			text = "0";
			x = 1.01999;
			y = "18.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat07Background: SM_TraderPlus_RscText
		{
			idc = 4039;
			x = 1.01999;
			y = "20 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat07Progress: SM_TraderPlus_RscProgress
		{
			idc = 4040;
			x = 1.01999;
			y = "20 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat07Label: SM_TraderPlus_RscText
		{
			idc = 4041;
			text = "0";
			x = 1.01999;
			y = "20 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat07Value: SM_TraderPlus_RscStructuredText
		{
			idc = 4042;
			text = "0";
			x = 1.01999;
			y = "20 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
	};
};

