#pragma once

#include "../../../unmapped/FeatureRegistry"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class LegacyForestFoliageFeature : Feature {

public:
    LegacyForestFoliageFeature::~LegacyForestFoliageFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyForestFoliageFeature(LegacyForestFoliageFeature::Type, FeatureRegistry const&);
    void _getTreeFeature(Random &)const;
};
