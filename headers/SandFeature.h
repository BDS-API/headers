#pragma once

class SandFeature : Feature {

    virtual ~SandFeature();
    virtual ~SandFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
