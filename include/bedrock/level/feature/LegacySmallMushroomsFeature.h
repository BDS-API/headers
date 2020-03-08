#pragma once

#include "../../../unmapped/FeatureRegistry"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class LegacySmallMushroomsFeature : Feature {

public:
    LegacySmallMushroomsFeature::~LegacySmallMushroomsFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacySmallMushroomsFeature(FeatureRegistry const&);
    void _getRandomHeight(int, int, BlockSource &, Random &, BlockPos const&)const;
};
