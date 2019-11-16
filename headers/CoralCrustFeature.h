#pragma once

class CoralCrustFeature : Feature {

    virtual ~CoralCrustFeature();
    virtual ~CoralCrustFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
