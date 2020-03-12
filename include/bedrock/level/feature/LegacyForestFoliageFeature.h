#pragma once

#include "Feature.h"


class LegacyForestFoliageFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~LegacyForestFoliageFeature();
//  LegacyForestFoliageFeature(LegacyForestFoliageFeature::Type, FeatureRegistry const&); //TODO: incomplete function definition
    void _getTreeFeature(Random &)const;
};
