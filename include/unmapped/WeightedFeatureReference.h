#pragma once

#include "./WeightedFeatureReference.h"


namespace WeightedRandomFeature {

class WeightedFeatureReference {

public:

    void getWeight()const;
    WeightedFeatureReference();
    WeightedFeatureReference(WeightedRandomFeature::WeightedFeatureReference &&);
    WeightedFeatureReference(WeightedRandomFeature::WeightedFeatureReference const&);
};

}