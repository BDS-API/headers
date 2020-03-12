#pragma once

#include "../bedrock/block/BlockLegacy.h"
#include "../bedrock/actor/Actor.h"


class BreakBlocksComponent {

public:
    void breakNearbyBlocks(Actor &);
    bool isBreakable(Actor &, BlockLegacy const&)const;
    BreakBlocksComponent(BreakBlocksComponent &&);
    void initFromDefinition(Actor &);
};
