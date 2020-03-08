#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/FeatureRegistry"
#include "../../util/BlockPos"


class LegacyTreeFeature : Feature {

public:
    virtual LegacyTreeFeature::~LegacyTreeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyTreeFeature(LegacyTreeFeature::Type, FeatureRegistry const&);
};
