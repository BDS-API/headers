#pragma once

#include <string>


class ClientPlayerEventCoordinator {

public:
    ClientPlayerEventCoordinator();
//  void sendLocalPlayerDeath(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition
    ~ClientPlayerEventCoordinator();
    void sendStartDestroyBlock(Player &, BlockPos const&, unsigned char &);
//  void sendPlayerCreated(LocalPlayer &, std::string const&, std::string const&, bool); //TODO: incomplete function definition
    void sendPlayerStopRiding(Player &, bool, bool, bool);
//  void sendLocalPlayerRespawn(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition
    void sendPlayerDestroyedBlock(Player &, BlockLegacy const&);
    void sendPlayerStartRiding(Player &, Actor &);
    void sendPlayerInput(Player &, MoveInputHandler &);
    void sendPlayerTurn(Player &, Vec2 &);
};
