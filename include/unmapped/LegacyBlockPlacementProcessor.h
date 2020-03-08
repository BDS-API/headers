#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"


class LegacyBlockPlacementProcessor {

public:

    LegacyBlockPlacementProcessor(LegacyStructureSettings const&);
    bool canPlace();
    void applyGravity(BlockSource &, int, BlockPos &)const;
    void applyBlockRules(BlockSource &, BlockPos &, Block const*);
};
