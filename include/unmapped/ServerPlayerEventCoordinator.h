#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Player.h"


class ServerPlayerEventCoordinator {

public:

    void sendPlayerOnGround(Player &);
    void sendPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    void sendPlayerMovementAnomaly(Player &, Vec3 const&, float, float);
    ~ServerPlayerEventCoordinator();
    ServerPlayerEventCoordinator();
};
