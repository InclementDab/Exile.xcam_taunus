/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _infection = player getVariable ["SM_InfectionDOT",0];

if (_infection > 0) then
{
	if (isNil "SM_InfectionEffect") then
	{
		SM_InfectionEffect = ppEffectCreate ["ChromAberration", 1000];
		SM_InfectionEffect ppEffectEnable true;
	};

	if (player getVariable ["SM_IsImmune",false]) exitWith
	{
		SM_InfectionEffect ppEffectAdjust [0, 0, false]; 
		SM_InfectionEffect ppEffectCommit 2;
	};
	private _damage = damage player;

	switch true do
	{
		case ((_infection < 0.15) && {(_infection != 0)}):
		{
			_damage = _damage + (_infection / ( 1 / SM_InfectionDamage));
			SM_InfectionEffect ppEffectAdjust [0.005, 0.005, false];
			SM_InfectionEffect ppEffectCommit 3;
		};
		case ((_infection >= 0.15) && {(_infection < 0.25)}):
		{
			_damage = _damage + (_infection / ( 1 / SM_InfectionDamage));
			SM_InfectionEffect ppEffectAdjust [0.01, 0.01, false];
			SM_InfectionEffect ppEffectCommit 3;
		};
		case ((_infection >= 0.25) && {(_infection < 0.45)}):
		{
			_damage = _damage + (_infection / ( 1 / SM_InfectionDamage));
			SM_InfectionEffect ppEffectAdjust [0.015, 0.015, false];
			SM_InfectionEffect ppEffectCommit 3;
		};
		case ((_infection >= 0.45) && {(_infection < 0.65)}):
		{
			_damage = _damage + (_infection / ( 1 / SM_InfectionDamage));
			SM_InfectionEffect ppEffectAdjust [0.02, 0.02, false];
			SM_InfectionEffect ppEffectCommit 3;
		};
		case ((_infection >= 0.65) && {(_infection < 0.75)}):
		{
			_damage = _damage + (_infection / ( 1 / SM_InfectionDamage));
			SM_InfectionEffect ppEffectAdjust [0.025, 0.025, false];
			SM_InfectionEffect ppEffectCommit 3;
		};
		case (_infection >= 0.75):
		{
			_damage = _damage + (_infection / ( 1 / SM_InfectionDamage));
			SM_InfectionEffect ppEffectAdjust [0.3, 0.3, false];
			SM_InfectionEffect ppEffectCommit 3;
		};
		default {};
	};

	if (_damage != (damage player)) then
	{
		player setDamage _damage;
	};
}
else
{
	if !(isNil "SM_InfectionEffect") then
	{
		ppEffectDestroy SM_InfectionEffect;
		SM_InfectionEffect = nil;
	};
};

true
