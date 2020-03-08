#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"


class BlockPileFeature : Feature {

public:
    virtual BlockPileFeature::~BlockPileFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    virtual void getBlockToPlace(Random &)const;

    BlockPileFeature(Block const&);
    void tryPlaceBlock(BlockSource &, BlockPos const&, Random &)const;
};
