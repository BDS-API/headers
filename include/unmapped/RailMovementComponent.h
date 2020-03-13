#pragma once



class RailMovementComponent {

public:
    RailMovementComponent(RailMovementComponent &&); // _ZN21RailMovementComponentC2EOS_
    bool canSnapOnRail(Actor const&, BlockPos &); // _ZN21RailMovementComponent13canSnapOnRailERK5ActorR8BlockPos
    void moveAlongTrack(Actor &, Block const&, BlockPos const&); // _ZN21RailMovementComponent14moveAlongTrackER5ActorRK5BlockRK8BlockPos
    void comeOffTrack(Actor &); // _ZN21RailMovementComponent12comeOffTrackER5Actor
};
