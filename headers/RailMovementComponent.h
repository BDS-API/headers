#pragma once

class RailMovementComponent {

public:

    void RailMovementComponent(RailMovementComponent&&);
    bool canSnapOnRail(Actor const&, BlockPos &);
    void moveAlongTrack(Actor &, Block const&, BlockPos const&);
    void comeOffTrack(Actor &);
};
