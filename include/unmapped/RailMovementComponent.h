#pragma once

class RailMovementComponent {

public:

    RailMovementComponent(RailMovementComponent&&);
    bool canSnapOnRail(Actor const&, BlockPos &);
    void moveAlongTrack(Actor &, Block const&, BlockPos const&);
    void comeOffTrack(Actor &);
};
