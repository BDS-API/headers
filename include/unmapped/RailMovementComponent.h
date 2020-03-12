#pragma once

#include "Block.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/actor/Actor.h"


class RailMovementComponent {

public:
    void comeOffTrack(Actor &);
    void moveAlongTrack(Actor &, Block const&, BlockPos const&);
    bool canSnapOnRail(Actor const&, BlockPos &);
    RailMovementComponent(RailMovementComponent &&);
};
