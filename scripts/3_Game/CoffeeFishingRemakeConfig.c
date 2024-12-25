class CoffeeFishingRemakeConfig
{
	// Static constant config version (is NOT saved to json)
	static const string CONFIG_VERSION = "1";

	// Config location
	private const static string coffeeModFolder = "$profile:\\Coffeesw\\";
	private const static string coffeeConfigName = "CoffeeFishingRemakeConfig.json";

	// Main config data
	string ConfigVersion = "";
    string SuccessCatchMessage = "I caught some thing.";
	float ChanceForYieldItem = 0.2;
    ref array<ref CoffeeYieldItem> YieldItems = new ref array<ref CoffeeYieldItem>();

	// Load config file or create default file if config doesn't exsit
	void Load()
	{
		if (!GetGame().IsDedicatedServer())
			return;

		if (FileExist(coffeeModFolder + coffeeConfigName))
		{ 
			// If config exists, load file
			JsonFileLoader<CoffeeFishingRemakeConfig>.JsonLoadFile(coffeeModFolder + coffeeConfigName, this);

			// If version mismatch, backup old version of json before replacing it
			if (ConfigVersion != CONFIG_VERSION)
			{
				JsonFileLoader<CoffeeFishingRemakeConfig>.JsonSaveFile(coffeeModFolder + coffeeConfigName + "_old", this);
			}
			else
			{
				// Config exists and version matches, stop here.
				return;
			}
		}
		 
		// Config file does not exist or json structure has changed, create default file
		ConfigVersion = CONFIG_VERSION;
		YieldItems.Clear();
		YieldItems.Insert(new CoffeeYieldItem("Mackerel",30));
		YieldItems.Insert(new CoffeeYieldItem("Carp",30));
		YieldItems.Insert(new CoffeeYieldItem("Sardines",30));
		YieldItems.Insert(new CoffeeYieldItem("Bitterlings",30));
		YieldItems.Insert(new CoffeeYieldItem("WalleyePollock",30));
		YieldItems.Insert(new CoffeeYieldItem("SteelheadTrout",30));
		YieldItems.Insert(new CoffeeYieldItem("Shrimp",30));
		YieldItems.Insert(new CoffeeYieldItem("rag",5));
		// Save config
		Save();
	}

	// Save config
	void Save()
	{
		if (!GetGame().IsDedicatedServer())
			return;

		if (!FileExist(coffeeModFolder))
		{	
			// If config folder doesn't exist, create it.
			MakeDirectory(coffeeModFolder);
		}

		// Save JSON config
		JsonFileLoader<CoffeeFishingRemakeConfig>.JsonSaveFile(coffeeModFolder + coffeeConfigName, this);
	}
}
// Defines CoffeeYieldItem config
class CoffeeYieldItem
{
	string ItemType = "";
	int Weight = 0;
	void CoffeeYieldItem(string itemType = "",int weight = 0)
	{
		ItemType = itemType;
		Weight = weight;
	}
}

// Save config data
ref CoffeeFishingRemakeConfig m_CoffeeFishingRemakeConfig;

// Helper function to return Config data storage object
static CoffeeFishingRemakeConfig GetCoffeeFishingRemakeConfig()
{
	if (!m_CoffeeFishingRemakeConfig)
	{
		Print("[GetCoffeeFishingRemakeConfig] Init");
		m_CoffeeFishingRemakeConfig = new CoffeeFishingRemakeConfig;
		m_CoffeeFishingRemakeConfig.Load();
	}

	return m_CoffeeFishingRemakeConfig;
};