#pragma once

#include "../bedrock/util/BlockPos.h"
#include "./Block.h"
#include "./LegacyStructureSettings.h"
#include "../bedrock/block/unmapped/BlockSource.h"


class LegacyBlockPlacementProcessor {

public:

    LegacyBlockPlacementProcessor(LegacyStructureSettings const&);
    bool canPlace();
    void applyGravity(BlockSource &, int, BlockPos &)const;
    void applyBlockRules(BlockSource &, BlockPos &, Block const*);
};
