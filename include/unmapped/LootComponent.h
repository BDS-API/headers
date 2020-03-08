#pragma once

#include "../bedrock/block/BlockLegacy"
#include "../bedrock/description/blockcomponent/LootComponentDescription"
#include "../bedrock/util/BlockPos"
#include "../bedrock/block/unmapped/BlockSource"


class LootComponent {

public:

    void init(LootComponentDescription const&);
    LootComponent(BlockLegacy &);
    void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
};
