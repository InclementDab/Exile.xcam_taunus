class CfgPatches
{
	class ExileTaunus
	{
		requiredVersion = 1.00;
		requiredAddons[] = 
		{
			"xcam_taunus"
		};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgMarkers
{
	class ExileMissionCivEasyIcon
	{
		scope=0;
		name="Exile Mission Icon (Easy)";
		icon="\assets\mission_easy_civ.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		markerClass="CustomMarkers";
		showEditorMarkerColor=0;
	};
	class CustomSpawnZoneIcon 
	{
		name = "Exile Spawn Zone Icon";
		icon = "\assets\spawn_zone_cb.paa";
		color[] = {1,1,1,1};
		size = 64;
		shadow = true;
		markerClass="CustomMarkers";
		showEditorMarkerColor=0;
	};
};

class CfgMarkerClasses
{
	class CustomMarkers
	{
		displayName="Custom Markers";
	};
};