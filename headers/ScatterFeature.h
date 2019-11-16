#pragma once

class ScatterFeature : IFeature {

    virtual void ~ScatterFeature();
    virtual void ~ScatterFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
}
