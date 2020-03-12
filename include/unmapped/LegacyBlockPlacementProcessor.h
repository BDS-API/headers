#pragma once



class LegacyBlockPlacementProcessor {

public:
    void applyBlockRules(BlockSource &, BlockPos &, Block const*);
    void applyGravity(BlockSource &, int, BlockPos &)const;
    bool canPlace();
    LegacyBlockPlacementProcessor(LegacyStructureSettings const&);
};
