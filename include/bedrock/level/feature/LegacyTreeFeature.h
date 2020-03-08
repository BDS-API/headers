#pragma once

#include "../../../unmapped/FeatureRegistry"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class LegacyTreeFeature : Feature {

public:
    LegacyTreeFeature::~LegacyTreeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyTreeFeature(LegacyTreeFeature::Type, FeatureRegistry const&);
};
