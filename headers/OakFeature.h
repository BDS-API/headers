#pragma once

class OakFeature : TreeFeature {

    virtual void ~OakFeature();
    virtual void ~OakFeature();
    virtual void Feature::place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
