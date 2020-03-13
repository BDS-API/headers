#pragma once



class LegacyBlockPlacementProcessor {

public:
    LegacyBlockPlacementProcessor(LegacyStructureSettings const&); // _ZN29LegacyBlockPlacementProcessorC2ERK23LegacyStructureSettings
    bool canPlace(); // _ZN29LegacyBlockPlacementProcessor8canPlaceEv
    void applyGravity(BlockSource &, int, BlockPos &)const; // _ZNK29LegacyBlockPlacementProcessor12applyGravityER11BlockSourceiR8BlockPos
    void applyBlockRules(BlockSource &, BlockPos &, Block const*); // _ZN29LegacyBlockPlacementProcessor15applyBlockRulesER11BlockSourceR8BlockPosPK5Block
};
