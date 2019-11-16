#pragma once

class BirchFeature : TreeFeature {

    virtual void ~BirchFeature();
    virtual void ~BirchFeature();
    virtual void Feature::place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
