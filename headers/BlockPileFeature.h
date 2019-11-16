#pragma once

class BlockPileFeature : Feature {

    virtual void BlockPileFeature::~BlockPileFeature();
    virtual void BlockPileFeature::~BlockPileFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    virtual void getBlockToPlace(Random &)const;
}
