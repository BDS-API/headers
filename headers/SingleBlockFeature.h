#pragma once

class SingleBlockFeature : IFeature {

    virtual ~SingleBlockFeature();
    virtual ~SingleBlockFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
}
