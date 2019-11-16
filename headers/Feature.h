#pragma once

class Feature : IFeature {

    virtual void ~Feature();
    virtual void ~Feature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
