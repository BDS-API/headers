#pragma once

#include "IFeature.h"


class WeightedRandomFeature : IFeature {

public:
    class WeightedFeatureReference;

    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    ~WeightedRandomFeature();
    WeightedRandomFeature();
    class WeightedFeatureReference {

    public:
        WeightedFeatureReference();
        void getWeight()const;
        WeightedFeatureReference(WeightedRandomFeature::WeightedFeatureReference &&);
        WeightedFeatureReference(WeightedRandomFeature::WeightedFeatureReference const&);
    };
};
