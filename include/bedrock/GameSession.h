#pragma once

#include "network/ServerNetworkHandler.h"
#include <memory>
#include "network/NetEventCallback.h"
#include "level/Level.h"
#include "network/packet/sender/LoopbackPacketSender.h"
#include "../unmapped/NetworkHandler.h"


class GameSession {

public:

    void getLevel()const;
    void getServerNetworkHandler();
    GameSession(NetworkHandler &, std::unique_ptr<ServerNetworkHandler, std::default_delete<ServerNetworkHandler>>, LoopbackPacketSender &, std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback>>, std::unique_ptr<Level, std::default_delete<Level>>, unsigned char);
    void setLevel(std::unique_ptr<Level, std::default_delete<Level>> level);
    GameSession(NetworkHandler &, std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback>>, LoopbackPacketSender &, unsigned char);
    ~GameSession();
    void tick();
    void startLeaveGame();
    bool isLeaveGameDone();
    void getNetEventCallback();
};
