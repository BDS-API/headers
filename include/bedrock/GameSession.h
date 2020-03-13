#pragma once

#include <memory>


class GameSession {

public:
    Level * getLevel()const; // _ZNK11GameSession8getLevelEv
    void getServerNetworkHandler(); // _ZN11GameSession23getServerNetworkHandlerEv
    GameSession(NetworkHandler &, std::unique_ptr<ServerNetworkHandler>, LoopbackPacketSender &, std::unique_ptr<NetEventCallback>, std::unique_ptr<Level>, unsigned char); // _ZN11GameSessionC2ER14NetworkHandlerSt10unique_ptrI20ServerNetworkHandlerSt14default_deleteIS3_EER20LoopbackPacketSenderS2_I16NetEventCallbackS4_IS9_EES2_I5LevelS4_ISC_EEh
    void setLevel(std::unique_ptr<Level> level); // _ZN11GameSession8setLevelESt10unique_ptrI5LevelSt14default_deleteIS1_EE
    GameSession(NetworkHandler &, std::unique_ptr<NetEventCallback>, LoopbackPacketSender &, unsigned char); // _ZN11GameSessionC2ER14NetworkHandlerSt10unique_ptrI16NetEventCallbackSt14default_deleteIS3_EER20LoopbackPacketSenderh
    ~GameSession(); // _ZN11GameSessionD2Ev
    void tick(); // _ZN11GameSession4tickEv
    void startLeaveGame(); // _ZN11GameSession14startLeaveGameEv
    bool isLeaveGameDone(); // _ZN11GameSession15isLeaveGameDoneEv
    void getNetEventCallback(); // _ZN11GameSession19getNetEventCallbackEv
};
