#pragma once

#include "../bedrock/description/blockcomponent/LootComponentDescription.h"
#include "../bedrock/block/BlockLegacy.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "Block.h"


class LootComponent {

public:
    ~LootComponent();
    void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    LootComponent(BlockLegacy &);
    void init(LootComponentDescription const&);
};
