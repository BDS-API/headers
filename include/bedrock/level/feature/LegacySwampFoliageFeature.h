#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/FeatureRegistry"
#include "../../util/BlockPos"


class LegacySwampFoliageFeature : Feature {

public:
    virtual LegacySwampFoliageFeature::~LegacySwampFoliageFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacySwampFoliageFeature(FeatureRegistry const&);
};
