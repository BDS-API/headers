#pragma once

class SeagrassFeature : Feature {

    virtual ~SeagrassFeature();
    virtual ~SeagrassFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
