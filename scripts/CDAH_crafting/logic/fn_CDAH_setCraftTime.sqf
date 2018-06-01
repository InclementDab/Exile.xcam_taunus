/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Rashmandash, Yesyesjo
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 *
 * www.cdah-gaming.com
 */
 
 private ["_selectetCategory","_returnTime"];
 
 _selectetCategory  = _this select 0;
 _returnTime		= _this select 1; 

	if (_selectetCategory == ("Level A _ Karts & Quads")) then
	{
	_returnTime = Time_Karts_Quads;
	};
	
	if (_selectetCategory == ("Level B - Cars & Vans")) then
	{
	_returnTime = Time_Cars_Vans;
	};
	
	if (_selectetCategory == ("Level C - Offroader")) then
	{
	_returnTime = Time_Offroader;
	};
	
	if (_selectetCategory == ("Level D - Light Trucks")) then
	{
	_returnTime = Time_Light_Trucks;
	};
	
	if (_selectetCategory == ("Level E - Armed Offroader & Miltrucks")) then
	{
	_returnTime = Time_Armed_Offroader_Miltrucks;
	};
	
	if (_selectetCategory == ("Level F - Light Armed Trucks")) then
	{
	_returnTime = Time_Light_Armed_Trucks;
	};
	
	if (_selectetCategory == ("Level G - Armed Miltrucks")) then
	{
	_returnTime = Time_Armed_Miltrucks;
	};
	
	if (_selectetCategory == ("Level H - Unarmed Helis")) then
	{
	_returnTime = Time_Unarmed_Helis;
	};
	
	if (_selectetCategory == ("Level H - Unarmed Planes")) then
	{
	_returnTime = Time_Unarmed_Planes;
	};
	
	if (_selectetCategory == ("Level I - Armed Helis")) then
	{
	_returnTime = Time_category_Armed_Helis;
	};
	
	if (_selectetCategory == ("Level I - Armed Planes")) then
	{
	_returnTime = Time_category_Armed_Planes;
	};
	
	if (_selectetCategory == ("Level J - Wheeled Tanks")) then
	{
	_returnTime = Time_Wheeled_Tanks;
	};
	
	if (_selectetCategory == ("Level J - Light Tanks")) then
	{ 
	_returnTime = Time_Light_Tanks;
	};
	
	if (_selectetCategory == ("Level K - Heavy Tanks")) then
	{
	_returnTime = Time_Heavy_Tanks;
	};
	
	if (_selectetCategory == ("Supply Vehicles")) then
	{
	_returnTime = Time_Supply_Vehicles;
	};
	
	if (_selectetCategory == ("UAVs")) then
	{
	_returnTime = Time_UAVs;
	};
	
	if (_selectetCategory == ("Uncategorised")) then
	{
	_returnTime = Time_Uncategorised;
	};	
 _returnTime
 