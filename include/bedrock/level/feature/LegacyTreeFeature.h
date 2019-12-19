#pragma once

class LegacyTreeFeature : Feature {

public:
    virtual LegacyTreeFeature::~LegacyTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyTreeFeature(LegacyTreeFeature::Type, FeatureRegistry const&);
};
