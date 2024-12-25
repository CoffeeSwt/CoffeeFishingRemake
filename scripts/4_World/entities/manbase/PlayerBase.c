modded class PlayerBase
{
    // Sends a message to the client from the server
	void Coffee_SendMsg(string message)
	{
		if (!IsAlive() || IsPlayerDisconnected() || !GetIdentity())
			return;

		Param1<string> msgParam;
		msgParam = new Param1<string>(message);
		GetGame().RPCSingleParam(this, ERPCs.RPC_USER_ACTION_MESSAGE, msgParam, true, GetIdentity());
	}
}