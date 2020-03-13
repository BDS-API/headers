#pragma once



class ServerPlayerEventCoordinator {

public:
    void sendPlayerOnGround(Player &); // _ZN28ServerPlayerEventCoordinator18sendPlayerOnGroundER6Player
    void sendPlayerMovementCorrected(Player &, Vec3 const&, float, float); // _ZN28ServerPlayerEventCoordinator27sendPlayerMovementCorrectedER6PlayerRK4Vec3ff
    void sendPlayerMovementAnomaly(Player &, Vec3 const&, float, float); // _ZN28ServerPlayerEventCoordinator25sendPlayerMovementAnomalyER6PlayerRK4Vec3ff
    ~ServerPlayerEventCoordinator(); // _ZN28ServerPlayerEventCoordinatorD2Ev
    ServerPlayerEventCoordinator(); // _ZN28ServerPlayerEventCoordinatorC2Ev
};
