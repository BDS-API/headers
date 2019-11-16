#pragma once

class SingleBlockFeature : IFeature {

    virtual void ~SingleBlockFeature();
    virtual void ~SingleBlockFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
}
