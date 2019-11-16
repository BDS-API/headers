#pragma once

class IFeature {

    virtual void ~IFeature();
    virtual void ~IFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
}
