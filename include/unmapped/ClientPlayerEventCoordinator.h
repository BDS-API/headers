#pragma once

#include "../bedrock/util/Vec2.h"
#include "../bedrock/block/BlockLegacy.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"
#include "./MoveInputHandler.h"
#include <string>


class ClientPlayerEventCoordinator {

public:

    ~ClientPlayerEventCoordinator();
    ClientPlayerEventCoordinator();
    void sendPlayerInput(Player &, MoveInputHandler &);
    void sendPlayerTurn(Player &, Vec2 &);
    void sendStartDestroyBlock(Player &, BlockPos const&, unsigned char &);
    void sendPlayerDestroyedBlock(Player &, BlockLegacy const&);
//  void sendLocalPlayerDeath(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition
//  void sendLocalPlayerRespawn(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition
    void sendPlayerStartRiding(Player &, Actor &);
    void sendPlayerStopRiding(Player &, bool, bool, bool);
//  void sendPlayerCreated(LocalPlayer &, std::string const&, std::string const&, bool); //TODO: incomplete function definition
};
