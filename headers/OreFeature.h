#pragma once

class OreFeature : IFeature {

    virtual ~OreFeature();
    virtual ~OreFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
}
