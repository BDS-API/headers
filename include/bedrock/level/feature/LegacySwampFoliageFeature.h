#pragma once

class LegacySwampFoliageFeature : Feature {

public:
    virtual LegacySwampFoliageFeature::~LegacySwampFoliageFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacySwampFoliageFeature(FeatureRegistry const&);
};
