#pragma once

#include "../../../unmapped/FeatureRegistry"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class LegacyForestRockFeature : Feature {

public:
    LegacyForestRockFeature::~LegacyForestRockFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyForestRockFeature(FeatureRegistry const&);
};
