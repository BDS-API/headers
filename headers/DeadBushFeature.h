#pragma once

class DeadBushFeature : Feature {

    virtual ~DeadBushFeature();
    virtual ~DeadBushFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
