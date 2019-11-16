#pragma once

class CoralFeature : Feature {

    virtual ~CoralFeature();
    virtual ~CoralFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
