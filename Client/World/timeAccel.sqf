
while {true} do
{
	if ((dayTime > 6) && (dayTime < 18)) then
	{
		setTimeMultiplier 6;
	} else {
		setTimeMultiplier 12;
	};
	sleep 1800;
};