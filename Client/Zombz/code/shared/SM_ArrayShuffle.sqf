/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _in = +_this;
private _out = [];
for "_i" from 1 to (count _in) do
{
	_out pushBack (_in deleteAt (floor (random (count _in))));
};
_this = +_out;
_out