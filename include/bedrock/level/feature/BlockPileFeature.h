#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"


class BlockPileFeature : Feature {

public:
    BlockPileFeature::~BlockPileFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    virtual void getBlockToPlace(Random &)const;

    BlockPileFeature(Block const&);
    void tryPlaceBlock(BlockSource &, BlockPos const&, Random &)const;
};
