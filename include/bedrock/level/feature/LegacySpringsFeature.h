#pragma once

#include "../../../unmapped/FeatureRegistry"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class LegacySpringsFeature : Feature {

public:
    LegacySpringsFeature::~LegacySpringsFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacySpringsFeature(FeatureRegistry const&);
};
