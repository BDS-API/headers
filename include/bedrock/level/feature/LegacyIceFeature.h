#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/FeatureRegistry"
#include "../../util/BlockPos"


class LegacyIceFeature : Feature {

public:
    virtual LegacyIceFeature::~LegacyIceFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyIceFeature(FeatureRegistry const&);
};
