#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/FeatureRegistry.h"


class LegacyIceFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~LegacyIceFeature();
    LegacyIceFeature(FeatureRegistry const&);
};
