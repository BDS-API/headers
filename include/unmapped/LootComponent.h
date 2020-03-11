#pragma once

#include "../bedrock/block/BlockLegacy.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/description/blockcomponent/LootComponentDescription.h"
#include "./Block.h"
#include "../bedrock/util/BlockPos.h"


class LootComponent {

public:

    ~LootComponent();
    void init(LootComponentDescription const&);
    LootComponent(BlockLegacy &);
    void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
};
