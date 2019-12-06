#pragma once

class WeightedRandomFeature : IFeature {

public:
    virtual ~WeightedRandomFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    void WeightedRandomFeature(void);
};
