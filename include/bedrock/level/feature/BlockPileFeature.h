#pragma once

#include "../../../unmapped/BlockSource"
#include "../../../unmapped/Random"
#include "../../../unmapped/Block"


class BlockPileFeature : Feature {

public:
    virtual BlockPileFeature::~BlockPileFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    virtual void getBlockToPlace(Random &)const;

    BlockPileFeature(Block const&);
    void tryPlaceBlock(BlockSource &, BlockPos const&, Random &)const;
};
