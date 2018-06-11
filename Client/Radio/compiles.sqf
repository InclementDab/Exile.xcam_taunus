/*
 * Author: InclementDeath
 * Compiles functions and things
 *
 *
 * Public: y tho
 */

if (!hasInterface && isServer) exitWith 
{
	Diag_log "Compiling Radio Function";
};

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
	['Server_RadioToggle', 'Client\Radio\server_radioToggle.sqf']
];

true


