#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/FeatureRegistry"
#include "../../util/BlockPos"


class LegacySpringsFeature : Feature {

public:
    virtual LegacySpringsFeature::~LegacySpringsFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacySpringsFeature(FeatureRegistry const&);
};
