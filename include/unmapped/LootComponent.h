#pragma once

#include "../bedrock/block/BlockLegacy"
#include "../bedrock/description/blockcomponent/LootComponentDescription"


class LootComponent {

public:

    void init(LootComponentDescription const&);
    LootComponent(BlockLegacy &);
    void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
};
