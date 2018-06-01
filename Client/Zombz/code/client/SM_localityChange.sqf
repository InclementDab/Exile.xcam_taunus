/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params ["_zombie","_isLocal"];

format["Zombie %1 locality changed to: %2", _zombie, _isLocal] call SM_Util_log;

if (!_isLocal) exitWith
{
	SM_IdleZombies = SM_IdleZombies - [(netId _zombie)];
	true
};

_this call SM_DisableAI;

SM_IdleZombies pushBack (netId _zombie);
if (isNil "SM_FSMHandle") then
{
	SM_FSMHandle = execFSM SM_FSM_ManagerPath;
}
else
{
	if (completedFSM SM_FSMHandle) then 
	{
		SM_FSMHandle = execFSM SM_FSM_ManagerPath;
	};
};

true