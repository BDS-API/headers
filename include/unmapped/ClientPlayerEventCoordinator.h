#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/util/Vec2.h"
#include <string>
#include "../bedrock/block/BlockLegacy.h"
#include "MoveInputHandler.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/actor/Actor.h"


class ClientPlayerEventCoordinator {

public:
    ClientPlayerEventCoordinator();
    ~ClientPlayerEventCoordinator();
//  void sendPlayerCreated(LocalPlayer &, std::string const&, std::string const&, bool); //TODO: incomplete function definition
    void sendPlayerStartRiding(Player &, Actor &);
//  void sendLocalPlayerDeath(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition
    void sendPlayerDestroyedBlock(Player &, BlockLegacy const&);
//  void sendLocalPlayerRespawn(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition
    void sendStartDestroyBlock(Player &, BlockPos const&, unsigned char &);
    void sendPlayerTurn(Player &, Vec2 &);
    void sendPlayerStopRiding(Player &, bool, bool, bool);
    void sendPlayerInput(Player &, MoveInputHandler &);
};
