#pragma once

class BlockPileFeature : Feature {

    virtual void BlockPile~BlockPileFeature();
    virtual void BlockPile~BlockPileFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void BlockPileplace(BlockSource &, BlockPos const&, Random &)const;
    virtual void BlockPilegetBlockToPlace(Random &)const;
}
