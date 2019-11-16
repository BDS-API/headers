#pragma once

class OreFeature : IFeature {

    virtual void ~OreFeature();
    virtual void ~OreFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
}
