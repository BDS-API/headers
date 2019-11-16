#pragma once

class IFeature {

    virtual ~IFeature();
    virtual ~IFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
}
