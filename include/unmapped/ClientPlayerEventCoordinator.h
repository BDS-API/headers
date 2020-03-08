#pragma once

#include "../bedrock/block/BlockLegacy"
#include "../bedrock/actor/Actor"
#include "../bedrock/util/BlockPos"
#include "../bedrock/actor/Player"
#include "../bedrock/util/Vec2"


class ClientPlayerEventCoordinator {

public:

    ClientPlayerEventCoordinator(void);
    void sendPlayerInput(Player &, MoveInputHandler &);
    void sendPlayerTurn(Player &, Vec2 &);
    void sendStartDestroyBlock(Player &, BlockPos const&, unsigned char &);
    void sendPlayerDestroyedBlock(Player &, BlockLegacy const&);
    void sendLocalPlayerDeath(IClientInstance &, LocalPlayer &);
    void sendLocalPlayerRespawn(IClientInstance &, LocalPlayer &);
    void sendPlayerStartRiding(Player &, Actor &);
    void sendPlayerStopRiding(Player &, bool, bool, bool);
    void sendPlayerCreated(LocalPlayer &, std::string const&, std::string const&, bool);
};
