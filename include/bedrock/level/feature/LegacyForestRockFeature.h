#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/FeatureRegistry"
#include "../../util/BlockPos"


class LegacyForestRockFeature : Feature {

public:
    virtual LegacyForestRockFeature::~LegacyForestRockFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyForestRockFeature(FeatureRegistry const&);
};
