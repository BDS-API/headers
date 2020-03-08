#pragma once

#include "network/packet/sender/LoopbackPacketSender"
#include "level/Level"
#include "../unmapped/NetworkHandler"
#include "network/NetEventCallback"
#include "network/ServerNetworkHandler"


class GameSession {

public:

    Level* getLevel()const;
    void getServerNetworkHandler();
    GameSession(NetworkHandler &, std::unique_ptr<ServerNetworkHandler, std::default_delete<ServerNetworkHandler>>, LoopbackPacketSender &, std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback>>, std::unique_ptr<Level, std::default_delete<Level>>, unsigned char);
    void setLevel(std::unique_ptr<Level, std::default_delete<Level>> level);
    GameSession(NetworkHandler &, std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback>>, LoopbackPacketSender &, unsigned char);
    void tick();
    void startLeaveGame();
    bool isLeaveGameDone();
    void getNetEventCallback();
};
