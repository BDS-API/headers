#pragma once

class SpruceFeature : TreeFeature {

    virtual ~SpruceFeature();
    virtual ~SpruceFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
