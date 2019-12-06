#pragma once

class LegacyForestFoliageFeature : Feature {

public:
    virtual ~LegacyForestFoliageFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void LegacyForestFoliageFeature(LegacyForestFoliageFeature::Type, FeatureRegistry const&);
    void _getTreeFeature(Random &)const;
};
