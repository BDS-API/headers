#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/FeatureRegistry.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class LegacyIceFeature : Feature {

public:
    virtual ~LegacyIceFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyIceFeature(FeatureRegistry const&);
};
