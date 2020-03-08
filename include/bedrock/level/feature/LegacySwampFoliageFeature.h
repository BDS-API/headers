#pragma once

#include "../../../unmapped/FeatureRegistry"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class LegacySwampFoliageFeature : Feature {

public:
    LegacySwampFoliageFeature::~LegacySwampFoliageFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacySwampFoliageFeature(FeatureRegistry const&);
};
