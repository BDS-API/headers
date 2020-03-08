#pragma once

#include "../bedrock/actor/Actor"


class BreakBlocksComponent {

public:

    BreakBlocksComponent(BreakBlocksComponent&&);
    void initFromDefinition(Actor &);
    void breakNearbyBlocks(Actor &);
    bool isBreakable(Actor &, BlockLegacy const&)const;
};
