#pragma once

#include "../bedrock/actor/Actor.h"
#include "./BreakBlocksComponent.h"
#include "../bedrock/block/BlockLegacy.h"


class BreakBlocksComponent {

public:

    BreakBlocksComponent(BreakBlocksComponent &&);
    void initFromDefinition(Actor &);
    void breakNearbyBlocks(Actor &);
    bool isBreakable(Actor &, BlockLegacy const&)const;
};
