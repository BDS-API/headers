#pragma once

#include "../bedrock/description/blockcomponent/LootComponentDescription"
#include "../bedrock/block/BlockLegacy"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"


class LootComponent {

public:

    void init(LootComponentDescription const&);
    LootComponent(BlockLegacy &);
    void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
};
