#pragma once

#include "../unmapped/NetworkHandler.h"
#include "level/Level.h"
#include "network/ServerNetworkHandler.h"
#include "network/NetEventCallback.h"
#include <memory>
#include "network/packet/sender/LoopbackPacketSender.h"


class GameSession {

public:
    bool isLeaveGameDone();
    Level * getLevel()const;
    void tick();
    void getNetEventCallback();
    ~GameSession();
    GameSession(NetworkHandler &, std::unique_ptr<NetEventCallback>, LoopbackPacketSender &, unsigned char);
    void startLeaveGame();
    GameSession(NetworkHandler &, std::unique_ptr<ServerNetworkHandler>, LoopbackPacketSender &, std::unique_ptr<NetEventCallback>, std::unique_ptr<Level>, unsigned char);
    void getServerNetworkHandler();
    void setLevel(std::unique_ptr<Level> level);
};
