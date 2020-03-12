#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/util/Vec3.h"


class ServerPlayerEventCoordinator {

public:
    void sendPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    void sendPlayerOnGround(Player &);
    void sendPlayerMovementAnomaly(Player &, Vec3 const&, float, float);
    ServerPlayerEventCoordinator();
    ~ServerPlayerEventCoordinator();
};
