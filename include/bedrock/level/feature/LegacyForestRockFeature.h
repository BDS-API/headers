#pragma once

class LegacyForestRockFeature : Feature {

public:
    virtual LegacyForestRockFeature::~LegacyForestRockFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyForestRockFeature(FeatureRegistry const&);
};
