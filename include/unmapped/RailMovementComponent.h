#pragma once

#include "./RailMovementComponent.h"
#include "./Block.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/actor/Actor.h"


class RailMovementComponent {

public:

    RailMovementComponent(RailMovementComponent &&);
    bool canSnapOnRail(Actor const&, BlockPos &);
    void moveAlongTrack(Actor &, Block const&, BlockPos const&);
    void comeOffTrack(Actor &);
};
