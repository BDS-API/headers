#pragma once



using namespace WeightedRandomFeature;

class WeightedFeatureReference {

public:

    void getWeight(void)const;
    WeightedFeatureReference(void);
    WeightedFeatureReference(WeightedRandomFeature::WeightedFeatureReference&&);
    WeightedFeatureReference(WeightedRandomFeature::WeightedFeatureReference const&);
};
