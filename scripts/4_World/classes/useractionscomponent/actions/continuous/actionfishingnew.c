modded class ActionFishingNew: ActionContinuousBase
{
    override EntityAI TrySpawnCatch(FishingActionData action_data)
	{
        action_data.m_Player.Coffee_SendMsg(GetCoffeeFishingRemakeConfig().SuccessCatchMessage)
		
		vector spawnPos = vector.Direction(action_data.m_Player.GetPosition(),action_data.m_Target.GetCursorHitPos()); //direction first
		spawnPos = MiscGameplayFunctions.GetRandomizedPositionVerified(action_data.m_Player.GetPosition(),action_data.m_Player.GetPosition() + spawnPos * 0.1,0.15,action_data.m_Player);
        int idx;
		return action_data.m_ContextData.SpawnAndSetupCatch(idx,spawnPos);
	}
}