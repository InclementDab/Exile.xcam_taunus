class CfgGrinding
{
	// Enables code lock grinding on the server
	enableGrinding = 1;
	
	// Time it takes to grind a fresh lock in minutes
	grindDuration = 25;
	
	// Percentage chance the grinding will fail
	failChance = 25;
	
	// Percentage chance that failing will break your grinder (otherwise it will just remove a battery)
	breakChance = 10;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 0;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 30;
};
