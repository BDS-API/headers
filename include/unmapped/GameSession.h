#pragma once

#include "../bedrock/level/Level"


class GameSession {

public:

    void getLevel(void)const;
    void getServerNetworkHandler(void);
    GameSession(NetworkHandler &, std::unique_ptr<ServerNetworkHandler, std::default_delete<ServerNetworkHandler>>, LoopbackPacketSender &, std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback>>, std::unique_ptr<Level, std::default_delete<Level>>, unsigned char);
    void setLevel(std::unique_ptr<Level, std::default_delete<Level>>);
    GameSession(NetworkHandler &, std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback>>, LoopbackPacketSender &, unsigned char);
    void tick(void);
    void startLeaveGame(void);
    bool isLeaveGameDone(void);
    void getNetEventCallback(void);
};
