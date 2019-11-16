#pragma once

class ScatterFeature : IFeature {

    virtual ~ScatterFeature();
    virtual ~ScatterFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
}
