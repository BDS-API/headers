#pragma once

#include <memory>


class GameSession {

public:
    GameSession(NetworkHandler &, std::unique_ptr<NetEventCallback>, LoopbackPacketSender &, unsigned char);
    void getServerNetworkHandler();
    GameSession(NetworkHandler &, std::unique_ptr<ServerNetworkHandler>, LoopbackPacketSender &, std::unique_ptr<NetEventCallback>, std::unique_ptr<Level>, unsigned char);
    void setLevel(std::unique_ptr<Level> level);
    Level * getLevel()const;
    void tick();
    ~GameSession();
    bool isLeaveGameDone();
    void startLeaveGame();
    void getNetEventCallback();
};
