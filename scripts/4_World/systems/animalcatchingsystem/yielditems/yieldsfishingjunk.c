////////////////////////////////////////////////////////
modded class YieldItemJunk : FishYieldItemBase
{
	override float GetChanceForYieldItem(CatchingContextBase ctx)
	{
		return GetCoffeeFishingRemakeConfig().ChanceForYieldItem; //not affected by equipment or time, just some flat number
	}
}