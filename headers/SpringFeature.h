#pragma once

class SpringFeature : Feature {

    virtual ~SpringFeature();
    virtual ~SpringFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
