/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params ["_zombie", "_unit", ["_offset", 0]];

((((_zombie worldToModel getPos _unit) select 1) - _offset > 0) && {if !((_zombie distance _unit) >= 100) then {[_unit, "VIEW", _zombie] checkVisibility [eyePos _unit, eyePos _zombie] > 0} else { true }})
