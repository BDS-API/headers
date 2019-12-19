#pragma once

class LegacyIceFeature : Feature {

public:
    virtual LegacyIceFeature::~LegacyIceFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyIceFeature(FeatureRegistry const&);
};
