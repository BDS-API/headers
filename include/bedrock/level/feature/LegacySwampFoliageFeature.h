#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/FeatureRegistry.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class LegacySwampFoliageFeature : Feature {

public:
    virtual ~LegacySwampFoliageFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacySwampFoliageFeature(FeatureRegistry const&);
};
