/*
 * Author: InclementDeath
 * fn_preinit
 *
 *
 * Public: y tho
 */


private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);
    missionNamespace setVariable [_function, _code];
}
forEach
[
	['Enigma_RevivePlyr', 			'Client\Enigma\Enigma_RevivePlyr.sqf'],
	['fn_CDAH_setCraftTime', 		'Client\CDAH\logic\fn_CDAH_setCraftTime.sqf'],
	['onPlayerLoad', 				'Client\Player\onPlayerload.sqf'],
	['newPlayerStartup', 			'Client\Player\functions\newPlayerStartup.sqf'],
	['unconciousEffect', 			'Client\Player\functions\UnconciousEffect.sqf'],
	['showPlayerLocation', 			'Client\Player\functions\showplayerlocation.sqf'],
	['initRadio', 					'Client\Player\functions\initRadio.sqf'],
	['worldFog', 					'Client\Player\Effects\worldfog.sqf'],
	['RadioToggle', 				'Client\Player\Radio\RadioToggle.sqf']
];



Bones_fnc_salvageAndRepairMenu = compileFinal preprocessFileLineNumbers "Client\AdvancedRepair\Bones_fnc_salvageAndRepairMenu.sqf";

true

