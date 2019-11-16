#pragma once

class PodzolAreaFeature : Feature {

    virtual ~PodzolAreaFeature();
    virtual ~PodzolAreaFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
