#pragma once

class GroundBushFeature : TreeFeature {

    virtual void ~GroundBushFeature();
    virtual void ~GroundBushFeature();
    virtual void Feature::place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
