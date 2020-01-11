#pragma once

class LegacyForestFoliageFeature : Feature {

public:
    virtual LegacyForestFoliageFeature::~LegacyForestFoliageFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyForestFoliageFeature(LegacyForestFoliageFeature::Type, FeatureRegistry const&);
    void _getTreeFeature(Random &)const;
};