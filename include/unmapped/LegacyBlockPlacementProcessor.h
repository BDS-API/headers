#pragma once

#include "../bedrock/util/BlockPos"
#include "../bedrock/block/unmapped/BlockSource"


class LegacyBlockPlacementProcessor {

public:

    LegacyBlockPlacementProcessor(LegacyStructureSettings const&);
    bool canPlace();
    void applyGravity(BlockSource &, int, BlockPos &)const;
    void applyBlockRules(BlockSource &, BlockPos &, Block const*);
};
