#pragma once

class PineFeature : TreeFeature {

    virtual void ~PineFeature();
    virtual void ~PineFeature();
    virtual void Feature::place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
