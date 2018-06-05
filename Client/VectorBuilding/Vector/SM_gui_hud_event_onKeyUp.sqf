/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */
 
private["_stopPropagation","_caller","_keyCode","_shiftState","_controlState","_altState","_posObject","_step"];
_stopPropagation = false;
_caller = _this select 0;
_keyCode = _this select 1;
_shiftState = _this select 2;
_controlState = _this select 3;
_altState = _this select 4;
if (_keyCode in (actionKeys "TacticalView")) exitWith {true};
if (_keyCode in (actionKeys "User1") && !(_keyCode isEqualTo 0x02)) exitWith 
{
	if !(ExileClientIsHandcuffed) then 
	{
		call ExileClient_object_vehicle_interaction_keyLock;
	};
	true
};
if (_keyCode in (actionKeys "User2")) exitWith
{
	if (ExileClientAllowPartyMarkers) then 
	{
		if !(ExileClientPartyID isEqualTo -1) then 
		{
			if !(ExileClientIsHandcuffed) then 
			{
				call ExileClient_system_party_updateMyMarker;	
			};
		};
	};
	true
};
switch (_keyCode) do  
{ 
	case 0x29:	
	{ 
		call ExileClient_gui_hud_toggleStatsBar;
		_stopPropagation = true; 
	}; 
	case 0x11,
	case 0x1E,
	case 0x1F,
	case 0x20:
	{
		if (ExileClientIsAutoRunning) then
		{
			call ExileClient_system_autoRun_stop;
			_stopPropagation = true; 
		};
	};
	case 0x0B:	 	
	{ 
		if !(ExileClientIsHandcuffed) then 
		{
			call ExileClient_system_autoRun_toggle;
		};
		_stopPropagation = true; 
	};


	/* VECTOR BUILDING */
	case 0x08: 	
	{
		if !(ExileClientIsHandcuffed || ExileIsPlayingRussianRoulette) then 
		{
			if (ExileClientIsInConstructionMode) then
			{
				if(_controlState) then
				{
					SM_memForBack = 0;
					SM_memLeftRight = 0;
					ExileClientConstructionRotation = 0;
				}
				else
				{
					if(ExileClientIsInVectorBuilding) then
					{
						ExileClientIsInVectorBuilding = false;
					}
					else
					{
						ExileClientIsInVectorBuilding = true;
					};
				};
				[] call ExileClient_gui_constructionMode_update;
			}
			else 
			{
				if (primaryWeapon player != "") then
				{
					if (primaryWeapon player != currentWeapon player) then
					{
						player selectWeapon (primaryWeapon player);
					};
				};
			};
		};
		_stopPropagation = true; 
	};
	/* VECTOR BUILDING */

	case 0x09: 	{ _stopPropagation = true; };
	case 0x0A: 	{ _stopPropagation = true; };
	case 0x3B: 	{ _stopPropagation = true; };
	case 0x3C: 	{ _stopPropagation = true; };
	case 0x3D:	{ _stopPropagation = true; };
	case 0x3E:	{ _stopPropagation = true; };
	case 0x41: 	{ _stopPropagation = true; };
	case 0x42:	{ _stopPropagation = true; };
	case 0x43: 	{ _stopPropagation = true; };
	case 0x44:	{ _stopPropagation = true; };
	case 0x57: 	{ _stopPropagation = true; };
	case 0x58: 	{ _stopPropagation = true; };
	case 0x0E: 	{ _stopPropagation = true; };
	case 0x02: 	
	{ 
		if !(ExileClientIsHandcuffed || ExileIsPlayingRussianRoulette) then 
		{
			if (ExileClientIsInConstructionMode) then
			{
				ExileClientConstructionObject setObjectTextureGlobal [0, "#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"];
				ExileClientConstructionMode = 1; 
				[] call ExileClient_gui_constructionMode_update;
			}
			else 
			{
				if (primaryWeapon player != "") then
				{
					if (primaryWeapon player != currentWeapon player) then
					{
						player selectWeapon (primaryWeapon player);
					};
				};
			};
		};
		_stopPropagation = true; 
	};
	case 0x03: 	
	{ 
		if !(ExileClientIsHandcuffed || ExileIsPlayingRussianRoulette) then 
		{
			if (ExileClientIsInConstructionMode) then
			{
				ExileClientConstructionObject setObjectTextureGlobal [0, "#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"];
				ExileClientConstructionCurrentSnapToObject = objNull;
				ExileClientConstructionIsInSelectSnapObjectMode = false;
				ExileClientConstructionPossibleSnapPositions = [];
				ExileClientConstructionMode = 2; 
				[] call ExileClient_gui_constructionMode_update;
			}
			else 
			{
				if (handgunWeapon player != "") then
				{
					if (handgunWeapon player != currentWeapon player) then
					{
						player selectWeapon (handgunWeapon player);
					};
				};
			};
		};
		_stopPropagation = true; 
	};
	case 0x04: 	
	{ 
		if !(ExileClientIsHandcuffed || ExileIsPlayingRussianRoulette) then 
		{
			if (ExileClientIsInConstructionMode) then
			{
				if (ExileClientConstructionSupportSnapMode) then
				{
					if (ExileClientConstructionMode != 3) then 
					{
						ExileClientConstructionCurrentSnapToObject = objNull; 
						ExileClientConstructionPossibleSnapPositions = [];
						["InfoTitleAndText", ["Snap Mode", "Look at the object you want to snap to, press SPACE to lock on it and then move your object next to a snap point. Press SPACE again to place the object."]] call ExileClient_gui_toaster_addTemplateToast;
					};
					ExileClientConstructionMode = 3; 
					ExileClientConstructionIsInSelectSnapObjectMode = true;
					[] call ExileClient_gui_constructionMode_update;
				};
			}
			else 
			{
				if (secondaryWeapon player != "") then
				{
					if (secondaryWeapon player != currentWeapon player) then
					{
						player selectWeapon (secondaryWeapon player);
					};
				};
			};
		};
		_stopPropagation = true; 
	};
	case 0x05: 	
	{ 
		if !(ExileClientIsHandcuffed || ExileIsPlayingRussianRoulette) then 
		{
			if (ExileClientIsInConstructionMode) then
			{
				if !(ExileClientConstructionKitClassName isEqualTo "Exile_Item_Flag") then 
				{
					ExileClientConstructionModePhysx = !ExileClientConstructionModePhysx;
					[] call ExileClient_gui_constructionMode_update;
				};
			}
			else
			{
				if (currentWeapon player != "") then
				{
					ExileClientPlayerHolsteredWeapon = currentWeapon player;
					player action["switchWeapon", player, player, 100];
				}
				else 
				{
					if (ExileClientPlayerHolsteredWeapon != "") then
					{
						player selectWeapon ExileClientPlayerHolsteredWeapon;
					};
				};
			};
		};
		_stopPropagation = true;
	};
	case 0x06:
	{
		if (ExileClientIsInConstructionMode) then
		{
			ExileClientConstructionShowHint = !ExileClientConstructionShowHint;
			[] call ExileClient_gui_constructionMode_update;
		}
		else 
		{
			call ExileClient_system_music_earplugs_toggle;
		};
		_stopPropagation = true;
	};
	case 0x07:
	{
		if (ExileClientIsInConstructionMode) then
		{
			if(ExileClientConstructionLock)then
			{
				ExileClientConstructionLock = false;
				_posObject = position ExileClientConstructionObject;
				ExileClientConstructionOffset = player worldToModel _posObject;
				ExileClientConstructionRotation = (getDir ExileClientConstructionObject) - (getDir player);
			}
			else
			{
				ExileClientConstructionLock = true;
			};	
		}
		else
		{
			if (!ExileClientXM8IsVisible) then
			{
				if ("Exile_Item_XM8" in (assignedItems player)) then
				{
					if (alive player) then
					{
						[] call ExileClient_gui_xm8_show;
					};	
				};
			};
		};
		_stopPropagation = true;
	};
	case 0x39:
	{
		if (ExileIsPlayingRussianRoulette) then
		{
			if (ExileRussianRouletteCanFire) then 
			{
				[] spawn ExileClient_system_russianRoulette_fire;
			};
		}
		else 
		{
			if (ExileClientIsInConstructionMode) then
			{
				if (ExileClientConstructionMode == 3) then 
				{
					if (ExileClientConstructionIsInSelectSnapObjectMode) then 
					{
						if !(isNull ExileClientConstructionCurrentSnapToObject) then
						{
							ExileClientConstructionIsInSelectSnapObjectMode = false;
							[] call ExileClient_gui_constructionMode_update;
						};
					}
					else 
					{
						if (ExileClientConstructionCanPlaceObject) then
						{
							ExileClientConstructionResult = 1;
						};
					};
				}
				else 
				{
					if (ExileClientConstructionCanPlaceObject) then
					{
						ExileClientConstructionResult = 1;
					};
				};
				_stopPropagation = true;
			};
		};
	};
	case 0x01:
	{
		if (ExileIsPlayingRussianRoulette) then 
		{
			_stopPropagation = true;
		}
		else 
		{
			if (ExileClientIsInConstructionMode) then
			{
				_stopPropagation = true;
			};
		};
	};


	/* VECTOR BUILDING */
	case 0x10:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 5;
			if (_shiftState) then 
			{
				_step = 15;
			}
			else 
			{
				if (_controlState) then
				{
					_step = 2.5;
				};
			};
			if(ExileClientIsInVectorBuilding) then
			{
				SM_MemLeftRight = SM_MemLeftRight + (_step * -1);
			}
			else
			{
				ExileClientConstructionRotation = (ExileClientConstructionRotation - _step + 360) % 360;
			};	
			[] call ExileClient_gui_constructionMode_update;
			_stopPropagation = true;
		};
	};
	/* VECTOR BUILDING */



	/* VECTOR BUILDING */
	case 0x12:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 5;
			if (_shiftState) then 
			{
				_step = 15;
			}
			else 
			{
				if (_controlState) then
				{
					_step = 2.5;
				};
			};
			if(ExileClientIsInVectorBuilding) then
			{
				SM_MemLeftRight = SM_MemLeftRight + _step;
			}
			else
			{
				ExileClientConstructionRotation = (ExileClientConstructionRotation + _step + 360) % 360;	
			};
			[] call ExileClient_gui_constructionMode_update;
			_stopPropagation = true;
		};
	};
	/* VECTOR BUILDING */


	case 0x19:
	{
		if (ExileClientIsInBush) then
		{
			call ExileClient_object_bush_detach;
			_stopPropagation = true;
		};
	};
	case 0x31:
	{
		if!(isNull ExileClientCameraParentObject)then
		{
			if(ExileClientCameraNVG)then
			{
				camUseNVG false;
			}
			else
			{
				camUseNVG true;
			};	
			ExileClientCameraNVG = !ExileClientCameraNVG;
			_stopPropagation = true;
		};
	};

	/* VECTOR BUILDING */
	case 0xC9: 
	{
		if (ExileClientIsInConstructionMode) then
		{
			if(ExileClientIsInVectorBuilding) then
			{
				_step = 5;
				if (_shiftState) then 
				{
					_step = 15;
				}
				else 
				{
					if (_controlState) then
					{
						_step = 2.5;
					};
				};
				SM_MemForBack = SM_MemForBack + (_step * -1);
			}
			else
			{
				_step = 0.25;
				if (_shiftState) then 
				{
					_step = 1;
				}
				else 
				{
					if (_controlState) then
					{
						_step = 0.025;
					};
				};
				ExileClientConstructionOffset set [2, ((((ExileClientConstructionOffset select 2) + _step) min 7) max -7) ];
			};
			[] call ExileClient_gui_constructionMode_update;
			_stopPropagation = true;
		};
	};
	/* VECTOR BUILDING */

	/* VECTOR BUILDING */
	case 0xD1: 
	{
		if (ExileClientIsInConstructionMode) then
		{
			if(ExileClientIsInVectorBuilding) then
			{
				_step = 5;
				if (_shiftState) then 
				{
					_step = 15;
				}
				else 
				{
					if (_controlState) then
					{
						_step = 2.5;
					};
				};
				SM_MemForBack = SM_MemForBack + _step;
			}
			else
			{
				_step = 0.25;
				if (_shiftState) then 
				{
					_step = 1;
				}
				else 
				{
					if (_controlState) then
					{
						_step = 0.025;
					};
				};
				ExileClientConstructionOffset set [2, ((((ExileClientConstructionOffset select 2) - _step) min 7) max -7) ];
			};
			[] call ExileClient_gui_constructionMode_update;
			_stopPropagation = true;
		};
	};
	/* VECTOR BUILDING */

	case 0xC7: 
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 0.25;
			if (_shiftState) then 
			{
				_step = 1;
			}
			else 
			{
				if (_controlState) then
				{
					_step = 0.025;
				};
			};
			ExileClientConstructionOffset set [1, (((ExileClientConstructionOffset select 1) + _step) min 6) max ExileClientConstructionBoundingRadius ];
			[] call ExileClient_gui_constructionMode_update;
			_stopPropagation = true;
		};
	};
	case 0xCF: 
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 0.25;
			if (_shiftState) then 
			{
				_step = 1;
			}
			else 
			{
				if (_controlState) then
				{
					_step = 0.025;
				};
			};
			ExileClientConstructionOffset set [1, (((ExileClientConstructionOffset select 1) - _step) min 6) max ExileClientConstructionBoundingRadius ];
			[] call ExileClient_gui_constructionMode_update;
			_stopPropagation = true;
		};
	};
	case 0xDB:
	{
		switch (ExilePartyEspMode) do 
		{
			case 0: { ExilePartyEspMode = 1; };
			case 1: { ExilePartyEspMode = 2; };
			case 2: { ExilePartyEspMode = 0; };
		};
		_stopPropagation = true;
	};
};


{

	_x params ["_item","_settings"];
	if (_item in (assignedItems player) && {_keyCode in (actionKeys "nightVision")}) exitWith
	{
		ace_nightvision_effectScaling = _settings select 0;
		ace_nightvision_fogScaling = _settings select 1;
		ace_nightvision_noiseScaling = _settings select 2;
		ace_nightvision_aimDownSightsBlur = _settings select 3;
	};
} forEach {
	[
		"ACE_NVG_Gen1",
		[1.3,1.5,1.5,0.75]
	],
	[
		"ACE_NVG_Gen2",
		[1.15,1.3,1.3,0.6]
	],
	[
		"NVGoggles",
		[1,1.1,1.1,0.5]
	],
	[
		"ACE_NVG_Gen4",
		[0.85,0.95,0.95,0.4]
	],
	[
		"ACE_NVG_Wide",
		[0.85,0.95,0.95,0.4]
	]
};

