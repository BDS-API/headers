#pragma once

class EndIslandFeature : Feature {

    virtual ~EndIslandFeature();
    virtual ~EndIslandFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
