#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/FeatureRegistry.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class LegacyForestRockFeature : Feature {

public:
    virtual ~LegacyForestRockFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyForestRockFeature(FeatureRegistry const&);
};
