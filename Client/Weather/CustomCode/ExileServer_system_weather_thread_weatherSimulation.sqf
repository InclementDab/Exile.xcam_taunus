/**
 * ExileServer_system_weather_thread_weatherSimulation
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_interval", "_keyframes", "_keyframeName", "_keyframeConfig", "_morningKeyFrames"];
_interval = round(getNumber (configFile >> "CfgSettings" >> "Weather" >> "interval") * 60);
_keyframes = getArray (configFile >> "CfgSettings" >> "Weather" >> "keyframes");

_keyframeName = configFile >> "CfgSettings" >> "Weather" >> _keyframeName;
_morningKeyframes = configFile >> "CfgSettings" >> "Weather" >> _morningKeyframes;
_keyframeConfig = if ((daytime > 4) && (daytime < 10)) then { 
						selectRandom _morningKeyframes
					} else { 
						selectRandom _keyframes 
					};
_interval setFog getNumber (_keyframeConfig >> "fogValue"); 
_interval setFog 
[
	getNumber (_keyframeConfig >> "fogValue"),
	getNumber (_keyframeConfig >> "fogDecay"),
	getNumber (_keyframeConfig >> "fogBase")
];
_interval setOvercast (getNumber (_keyframeConfig >> "overcast"));
_interval setWaves (getNumber (_keyframeConfig >> "waves"));
_interval setWindStr (getNumber (_keyframeConfig >> "wind"));
_interval setGusts (getNumber (_keyframeConfig >> "gusts"));
_interval setRain (getNumber (_keyframeConfig >> "rain"));
_interval setLightnings (getNumber (_keyframeConfig >> "lightnings"));
_interval setRainbow (getNumber (_keyframeConfig >> "rainbows"));
true