#pragma once

class LegacyBlockPlacementProcessor {

public:

    LegacyBlockPlacementProcessor(LegacyStructureSettings const&);
    bool canPlace(void);
    void applyGravity(BlockSource &, int, BlockPos &)const;
    void applyBlockRules(BlockSource &, BlockPos &, Block const*);
};
