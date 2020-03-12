#pragma once



class RailMovementComponent {

public:
    void moveAlongTrack(Actor &, Block const&, BlockPos const&);
    bool canSnapOnRail(Actor const&, BlockPos &);
    void comeOffTrack(Actor &);
    RailMovementComponent(RailMovementComponent &&);
};
