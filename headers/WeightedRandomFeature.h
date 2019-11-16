#pragma once

class WeightedRandomFeature : IFeature {

    virtual ~WeightedRandomFeature();
    virtual ~WeightedRandomFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
}
