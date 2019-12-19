#pragma once

class ServerPlayerEventCoordinator {

public:

    void sendPlayerOnGround(Player &);
    void sendPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    void sendPlayerMovementAnomaly(Player &, Vec3 const&, float, float);
    ServerPlayerEventCoordinator(void);
};
