#pragma once

class VinesFeature : Feature {

    virtual ~VinesFeature();
    virtual ~VinesFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
