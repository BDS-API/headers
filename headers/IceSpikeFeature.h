#pragma once

class IceSpikeFeature : Feature {

    virtual ~IceSpikeFeature();
    virtual ~IceSpikeFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
