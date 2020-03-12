#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/FeatureRegistry.h"


class LegacySmallMushroomsFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~LegacySmallMushroomsFeature();
    LegacySmallMushroomsFeature(FeatureRegistry const&);
    void _getRandomHeight(int, int, BlockSource &, Random &, BlockPos const&)const;
};
