#pragma once

class WeightedRandomFeature::WeightedFeatureReference {

public:

    void getWeight(void)const;
    void WeightedFeatureReference(void);
    void WeightedFeatureReference(WeightedRandomFeature::WeightedFeatureReference&&);
    void WeightedFeatureReference(WeightedRandomFeature::WeightedFeatureReference const&);
};
