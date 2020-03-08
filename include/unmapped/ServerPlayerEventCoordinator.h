#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/actor/Player"


class ServerPlayerEventCoordinator {

public:

    void sendPlayerOnGround(Player &);
    void sendPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    void sendPlayerMovementAnomaly(Player &, Vec3 const&, float, float);
    ServerPlayerEventCoordinator(void);
};
