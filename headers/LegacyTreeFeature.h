#pragma once

class LegacyTreeFeature : Feature {

public:
    virtual ~LegacyTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void LegacyTreeFeature(LegacyTreeFeature::Type, FeatureRegistry const&);
};
