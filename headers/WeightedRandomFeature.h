#pragma once

class WeightedRandomFeature : IFeature {

    virtual void ~WeightedRandomFeature();
    virtual void ~WeightedRandomFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
}
