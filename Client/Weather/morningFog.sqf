if ((daytime > 4) && (daytime < 10)) then 
{
0 setFog _fog;
}else{0 setFog 0};

0 setGusts _gust;
0 setWindDir _dir;
0 setWindForce _force;
0 setOvercast _oc;
0 setRain _rain;

_foggy = 0;
sleep 120;
