modded class MissionBase extends MissionBaseWorld
{
	//! Used to initialize defaults to WorldData base class from 4_World module. For proper init of your custom world, use 'InitYieldBank' method in the inherited world data
	override void InitWorldYieldDataDefaults(CatchYieldBank bank)
	{
		//catch yield data beyond 3_Game level, defaults used for ChernarusPlusData
		if (bank)
		{
			//fishies
			ref array<ref CoffeeYieldItem> yieldItems = GetCoffeeFishingRemakeConfig().YieldItems;
			foreach(ref CoffeeYieldItem yieldItem: yieldItems) 
			{
				bank.RegisterYieldItem(new YieldItemJunk(yieldItem.Weight,yieldItem.ItemType));
			}
        	//must have something with the loop,otherwise player can't fish, i don't know why,so i add a "Wellies_Black" with a low chance weight into the fish bank to make it work. 
			bank.RegisterYieldItem(new YieldItemJunk(1,"Wellies_Black"));
			//non-fishies
			bank.RegisterYieldItem(new YieldItemDeadRabbit(4));
			bank.RegisterYieldItem(new YieldItemDeadRooster(1));
			bank.RegisterYieldItem(new YieldItemDeadChicken_White(1));
			bank.RegisterYieldItem(new YieldItemDeadChicken_Spotted(1));
			bank.RegisterYieldItem(new YieldItemDeadChicken_Brown(1));
			bank.RegisterYieldItem(new YieldItemDeadFox(2));
		}
	}
}