#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/FeatureRegistry.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class LegacySmallMushroomsFeature : Feature {

public:
    virtual ~LegacySmallMushroomsFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacySmallMushroomsFeature(FeatureRegistry const&);
    void _getRandomHeight(int, int, BlockSource &, Random &, BlockPos const&)const;
};
