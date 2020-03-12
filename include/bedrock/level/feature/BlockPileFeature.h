#pragma once

#include "Feature.h"


class BlockPileFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~BlockPileFeature();
    virtual void getBlockToPlace(Random &)const;
    BlockPileFeature(Block const&);
    void tryPlaceBlock(BlockSource &, BlockPos const&, Random &)const;
};
