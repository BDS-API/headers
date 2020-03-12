#pragma once

#include "../bedrock/block/unmapped/BlockSource.h"
#include "Block.h"
#include "LegacyStructureSettings.h"
#include "../bedrock/util/BlockPos.h"


class LegacyBlockPlacementProcessor {

public:
    bool canPlace();
    void applyGravity(BlockSource &, int, BlockPos &)const;
    LegacyBlockPlacementProcessor(LegacyStructureSettings const&);
    void applyBlockRules(BlockSource &, BlockPos &, Block const*);
};
