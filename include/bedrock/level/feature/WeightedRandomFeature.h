#pragma once

#include "IFeature.h"


class WeightedRandomFeature : IFeature {

public:
    class WeightedFeatureReference;

    ~WeightedRandomFeature(); // _ZN21WeightedRandomFeatureD2Ev
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const; // _ZNK21WeightedRandomFeature5placeER21IBlockPlacementTargetRK8BlockPosR6Random
    WeightedRandomFeature(); // _ZN21WeightedRandomFeatureC2Ev
    class WeightedFeatureReference {

    public:
        void getWeight()const; // _ZNK21WeightedRandomFeature24WeightedFeatureReference9getWeightEv
        WeightedFeatureReference(); // _ZN21WeightedRandomFeature24WeightedFeatureReferenceC2Ev
        WeightedFeatureReference(WeightedRandomFeature::WeightedFeatureReference &&); // _ZN21WeightedRandomFeature24WeightedFeatureReferenceC2EOS0_
        WeightedFeatureReference(WeightedRandomFeature::WeightedFeatureReference const&); // _ZN21WeightedRandomFeature24WeightedFeatureReferenceC2ERKS0_
    };
};
