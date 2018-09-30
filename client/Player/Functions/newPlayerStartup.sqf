/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

ExileClientIntroIsPlaying = true;



0 enableChannel false;
1 enableChannel false;
2 enableChannel false;
3 enableChannel false;
4 enableChannel false;
5 enableChannel false;
0.001 fadeSound 0;


cutText ["", "BLACK FADED", 2];
uiSleep 2;
4 fadeSound 1.0;
playSound "SweepingSlam";
uiSleep 1;
["<t size='1.0' font='PuristaBold'>Welcome to Hardcore Exile Taunus</t>", (0.295 * safezoneW + safezoneX), (0.435 * safezoneH + safezoneY), 3.5, 1, 0, 90] spawn BIS_fnc_dynamicText;
uiSleep 2;
["<t size='1.0' font='PuristaBold'>Good Luck...</t>", (0.295 * safezoneW + safezoneX), (0.48 * safezoneH + safezoneY), 1.5, 1, 0, 91] spawn BIS_fnc_dynamicText;
uiSleep 4;
	

_hndChromAberration = ppEffectCreate ["ChromAberration", 201];
_hndlClrCorr = ppEffectCreate ["ColorCorrections", 200];

_hndChromAberration ppEffectAdjust [
	0.01,
	0.01,
	false
];


_hndlClrCorr ppEffectAdjust 
[
	1, 
	1, 
	0, 
	[0, 0, 0, 0], 
	[1, 1, 1, 1], 
	[0.299, 0.587, 0.114, 0],
	[-1, -1, 0, 0, 0, 0, 0]
];

_hndChromAberration ppEffectEnable true;
_hndlClrCorr ppEffectEnable true;

_hndChromAberration ppEffectCommit 0;
_hndlClrCorr ppEffectCommit 0;

	
titleCut ["", "BLACK IN", 1.0];

_hndChromAberration ppEffectAdjust [
	0.25,
	0.25,
	false
];

_hndlClrCorr ppEffectAdjust 
[
	0.25, 
	1.5, 
	0, 
	[0, 0, 0, 0], 
	[1, 1, 1, 1], 
	[0.299, 0.587, 0.114, 0],
	[-1, -1, 0, 0, 0, 0, 0]
];

_hndChromAberration ppEffectCommit 2.5;
_hndlClrCorr ppEffectCommit 2.5;

uiSleep 2.5;

_hndChromAberration ppEffectEnable false;
_hndlClrCorr ppEffectEnable false;

_hndChromAberration ppEffectCommit 0.25;
_hndlClrCorr ppEffectCommit 0.25;







uiSleep 5;
_posX = 0.03 * safezoneW + safezoneX;
_posY = 0.75 * safezoneH + safezoneY;
_rootFormat = "<t align = 'left' shadow = '1' size = '0.7' font='PuristaSemiBold'>%1</t>";
_location = format ["%1, Germany ", player call BIS_fnc_locationDescription];
_grid = format ["%1 ", mapGridPosition player];
_date = format ["%1-%2-%3 ", date select 0, date select 1, date select 2];
_time = format ["%1 ", dayTime call BIS_fnc_timeToString];

[
	[	
		[_location, "<t size = '0.75'font='PuristaSemiBold' >%1</t><br/>"],
		[_grid, "<t size = '1.0' font='PuristaBold' >%1</t><br/>"],
		[_date, "<t size = '0.65' font='PuristaLight' >%1</t><br/>"],
		[_time,"<t align = 'left' shadow = '1' size = '0.6' font='PuristaLight' >%1</t><br/>"]
		
		
	],
	_posX,
	_posY,
	_rootFormat
] spawn {


#define DELAY_CHARACTER	0.08;
#define DELAY_CURSOR	0;

private["_data","_posX","_posY","_rootFormat","_toDisplay"];
private["_blocks","_block","_blockCount","_blockNr","_blockArray","_blockText","_blockTextF","_blockTextF_","_blockFormat","_formats","_inputData","_processedTextF","_char","_cursorInvis","_blinkCounts","_blinkCount"];

_data 		= _this param [0, [], [[]]];
_posX 		= _this param [1, 0, [123]];
_posY 		= _this param [2, 0, [123]];
_rootFormat 	= _this param [3, "<t >%1</t>", [""]];

_blockCount = count _data;

_invisCursor = "<t color ='#00000000' shadow = '0'>|</t>";

//process the input data
_blocks 	= [];
_formats 	= [];
_blinkCounts 	= [];

{
	_inputData = _x;

	_block 		= _inputData param [0, "", [""]];
	_format 	= _inputData param [1, "<t align = 'center' shadow = '1' size = '0.7'>%1</t><br/>", [""]];
	_blinkCount 	= _inputData param [2, 5, [123]];

	//convert strings into array of chars
	_blockArray = toArray _block;
	{_blockArray set [_forEachIndex, toString [_x]]} forEach _blockArray;

	_blocks  = _blocks + [_blockArray];
	_formats = _formats + [_format];
	_blinkCounts = _blinkCounts + [_blinkCount];
}
forEach _data;

//do the printing
_processedTextF  = "";

{
	_blockArray  = _x;
	_blockNr     = _forEachIndex;
	_blockFormat = _formats select _blockNr;
	_blockText   = "";
	_blockTextF  = "";
	_blockTextF_ = "";

	{
		_char = _x;

		_blockText = _blockText + _char;

		_blockTextF  = format[_blockFormat, _blockText + _invisCursor]; //_invisCursor
		_blockTextF_ = format[_blockFormat, _blockText + "|"];

		//print the output
		_toDisplay = format[_rootFormat,_processedTextF + _blockTextF_];
		[_toDisplay, _posX, _posY, 5, 0, 0, 90] spawn BIS_fnc_dynamicText;

		playSound "ReadoutClick";

		sleep DELAY_CHARACTER;
		_toDisplay = format[_rootFormat,_processedTextF + _blockTextF];
		[_toDisplay, _posX, _posY, 5, 0, 0, 90] spawn BIS_fnc_dynamicText;
		sleep DELAY_CURSOR;
	}
	forEach _blockArray;

	_blinkCount = _blinkCounts select _forEachIndex;

	if (_blinkCount > 0) then
	{
		for "_i" from 1 to _blinkCount do
		{
			_toDisplay = format[_rootFormat,_processedTextF + _blockTextF_];
			[_toDisplay, _posX, _posY, 5, 0, 0, 90] spawn BIS_fnc_dynamicText;
			sleep DELAY_CHARACTER;
			_toDisplay = format[_rootFormat,_processedTextF + _blockTextF];
			[_toDisplay, _posX, _posY, 5, 0, 0, 90] spawn BIS_fnc_dynamicText;
			sleep DELAY_CURSOR;
		};
	};

	//store finished block
	_processedTextF  = _processedTextF + _blockTextF;
	
} forEach _blocks;

uiSleep 3;
90 cutFadeOut 1;





uiSleep 5;
1 enableChannel [true, false];
3 enableChannel true;
4 enableChannel true;
5 enableChannel true;
uiSleep 5;
//clean the screen
["", _posX, _posY, 10, 0, 0, 90] spawn BIS_fnc_dynamicText;
};
 
profileNamespace setVariable ["HCExileServerJoined", true];
 
ExileClientIntroIsPlaying = false;



true