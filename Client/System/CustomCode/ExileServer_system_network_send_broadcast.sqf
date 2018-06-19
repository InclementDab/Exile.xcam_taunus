/**
 * ExileServer_system_network_send_broadcast
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_messageName", "_messageParameters", "_publicMessage", "_radioRequired"];
params ["_messageName", "_messageParameters", "_radioRequired"];
_publicMessage = [_messageName, _messageParameters];

if (_radioRequired) then
{
	
	[_publicMessage, {		
		if (player getVariable "RadioToggle") && ("ItemRadio" in (assignedItems player)) then 
		{
			_publicMessage call ExileClient_system_network_dispatchIncomingMessage;
		};
	}] remoteExecCall ["bis_fnc_call", -2];
		
	_publicMessage = nil;
} else {
	_publicMessage remoteExecCall ["ExileClient_system_network_dispatchIncomingMessage", -2];
	_publicMessage = nil;
};


