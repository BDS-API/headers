#pragma once

class GroundBushFeature : TreeFeature {

    virtual ~GroundBushFeature();
    virtual ~GroundBushFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
