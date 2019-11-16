#pragma once

class ClayFeature : Feature {

    virtual ~ClayFeature();
    virtual ~ClayFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
