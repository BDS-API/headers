#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/FeatureRegistry"
#include "../../util/BlockPos"


class LegacySmallMushroomsFeature : Feature {

public:
    virtual LegacySmallMushroomsFeature::~LegacySmallMushroomsFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacySmallMushroomsFeature(FeatureRegistry const&);
    void _getRandomHeight(int, int, BlockSource &, Random &, BlockPos const&)const;
};
