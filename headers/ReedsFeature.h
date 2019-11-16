#pragma once

class ReedsFeature : Feature {

    virtual ~ReedsFeature();
    virtual ~ReedsFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
