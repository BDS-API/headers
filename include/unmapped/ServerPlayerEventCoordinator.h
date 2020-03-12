#pragma once



class ServerPlayerEventCoordinator {

public:
    ServerPlayerEventCoordinator();
    void sendPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    void sendPlayerMovementAnomaly(Player &, Vec3 const&, float, float);
    ~ServerPlayerEventCoordinator();
    void sendPlayerOnGround(Player &);
};
