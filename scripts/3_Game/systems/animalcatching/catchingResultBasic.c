modded class CatchingResultBasic
{
	override void UpdateCatchChance(CatchingContextBase ctx)
	{
		if (m_OverrideChanceActive)
			return;
		
		if (!m_YItem)
			return;
		
		// float val = m_YItem.GetChanceForYieldItem(ctx);
        float val = GetCoffeeFishingRemakeConfig().ChanceForYieldItem;
		SetCatchChance(val);
	}
};