#pragma once

class FossilFeature : Feature {

    virtual ~FossilFeature();
    virtual ~FossilFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
