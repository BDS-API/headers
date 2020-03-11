#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/FeatureRegistry.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class LegacySpringsFeature : Feature {

public:
    virtual ~LegacySpringsFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacySpringsFeature(FeatureRegistry const&);
};
