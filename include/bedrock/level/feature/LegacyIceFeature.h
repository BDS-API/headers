#pragma once

#include "../../../unmapped/FeatureRegistry"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class LegacyIceFeature : Feature {

public:
    LegacyIceFeature::~LegacyIceFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyIceFeature(FeatureRegistry const&);
};
