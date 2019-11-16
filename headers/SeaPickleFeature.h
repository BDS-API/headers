#pragma once

class SeaPickleFeature : Feature {

    virtual ~SeaPickleFeature();
    virtual ~SeaPickleFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
