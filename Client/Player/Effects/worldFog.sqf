// Ground Fog - TorturedChunk - Kaysi - mmmyum @ OpenDayZ.net

//Modify By CNSU
waitUntil {!isNull player};
doofog = {
private ["_obj","_pos","_inVehicle"];
        _inVehicle = (vehicle player != player);

        if (_inVehicle) then {
            _obj = (vehicle player);
        } else {
            _obj = player;
        };

        _pos = position _obj;

		private _fogs = [];
		for "_i" from 1 to _this do {
        private _fog = "#particlesource" createVehicleLocal _pos;
        _fog setParticleParams [
        ["\A3\Data_F\ParticleEffects\Universal\universal.p3d" , 16, 12, 13, 0], "", "Billboard", 1, 10,
            [0, 0, -6], [0, 0, 0.1], 1, 1.275, 1, 0,
            [7,6], [[1, 1, 1, 0], [1, 1, 1, 0.02], [1, 1, 1, 0]], [1000], 1, 0, "", "", _obj
        ];
        _fog setParticleRandom [3, [55, 55, 0.2], [0, 0, -0.1], 2, 0.45, [0, 0, 0, 0.1], 0, 0];
        _fog setParticleCircle [0.001, [0, 0, -0.12]];
        _fog setDropInterval 0.01;
		_fogs pushBack _fog;
		};

        player setVariable ["playerfog", floor time + 5];

        sleep 120;
		{
		deleteVehicle _x;
		} forEach _fogs;

    };
[] spawn 
{
    while {true} do 
	{
        if (player getVariable ["playerfog", -1] < time) then 
		{
            if (daytime < 7 || daytime > 19) then 
			{
				player setVariable ["playerfog", floor time + 5];
                3 call doofog;
            } else {
				player setVariable ["playerfog", floor time + 5];
                1 call doofog;
			};
			
			if ((player distance2d (getMarkerPos "marker_42")) < 3500) then 
			{
				player setVariable ["playerfog", floor time + 5];
				4 call doofog;
		
			};
        };
    };
};
