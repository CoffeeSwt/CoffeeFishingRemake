modded class ChernarusPlusData
{
	override void InitYieldBank()
	{
		super.InitYieldBank();
        m_YieldBank.ClearAllRegisteredItems();
		//fishies
        ref array<ref CoffeeYieldItem> yieldItems = GetCoffeeFishingRemakeConfig().YieldItems;
        foreach(ref CoffeeYieldItem yieldItem: yieldItems) 
        {
            m_YieldBank.RegisterYieldItem(new YieldItemJunk(yieldItem.Weight,yieldItem.ItemType));
        }
        //must have something with the loop,otherwise player can't fish, i don't know why,so i add a "Wellies_Black" with a low chance weight into the fish bank to make it work. 
        m_YieldBank.RegisterYieldItem(new YieldItemJunk(1,"Wellies_Black"));
        //non-fishies
        m_YieldBank.RegisterYieldItem(new YieldItemDeadRabbit(4));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadRooster(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_White(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_Spotted(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_Brown(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadFox(2));
	}
};

modded class EnochData
{
	override void InitYieldBank()
	{
		super.InitYieldBank();
        m_YieldBank.ClearAllRegisteredItems();
		//fishies
        ref array<ref CoffeeYieldItem> yieldItems = GetCoffeeFishingRemakeConfig().YieldItems;
        foreach(ref CoffeeYieldItem yieldItem: yieldItems) 
        {
            m_YieldBank.RegisterYieldItem(new YieldItemJunk(yieldItem.Weight,yieldItem.ItemType));
        }
        //must have something with the loop,otherwise player can't fish, i don't know why,so i add a "Wellies_Black" with a low chance weight into the fish bank to make it work. 
        m_YieldBank.RegisterYieldItem(new YieldItemJunk(1,"Wellies_Black"));
        //non-fishies
        m_YieldBank.RegisterYieldItem(new YieldItemDeadRabbit(4));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadRooster(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_White(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_Spotted(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_Brown(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadFox(2));
		

	}
};

modded class SakhalData
{
	override void InitYieldBank()
	{
		super.InitYieldBank();
        m_YieldBank.ClearAllRegisteredItems();
		//fishies
        ref array<ref CoffeeYieldItem> yieldItems = GetCoffeeFishingRemakeConfig().YieldItems;
        foreach(ref CoffeeYieldItem yieldItem: yieldItems) 
        {
            m_YieldBank.RegisterYieldItem(new YieldItemJunk(yieldItem.Weight,yieldItem.ItemType));
        }
        //must have something with the loop,otherwise player can't fish, i don't know why,so i add a "Wellies_Black" with a low chance weight into the fish bank to make it work. 
        m_YieldBank.RegisterYieldItem(new YieldItemJunk(1,"Wellies_Black"));
        //non-fishies
        m_YieldBank.RegisterYieldItem(new YieldItemDeadRabbit(4));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadRooster(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_White(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_Spotted(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadChicken_Brown(1));
        m_YieldBank.RegisterYieldItem(new YieldItemDeadFox(2));
	}
};