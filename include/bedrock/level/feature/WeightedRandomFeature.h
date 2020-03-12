#pragma once

#include "../../../unmapped/IBlockPlacementTarget.h"
#include "IFeature.h"
#include "../../util/BlockPos.h"
#include "../../util/Random.h"


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
