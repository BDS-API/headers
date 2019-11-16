#pragma once

class SpruceFeature : TreeFeature {

    virtual void ~SpruceFeature();
    virtual void ~SpruceFeature();
    virtual void Feature::place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
