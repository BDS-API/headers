#pragma once

class BlockPileFeature : Feature {

    virtual ~BlockPileFeature();
    virtual ~BlockPileFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    virtual void getBlockToPlace(Random &)const;
}
