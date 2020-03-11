#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class GlowStoneFeature : Feature {

public:
    virtual ~GlowStoneFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    GlowStoneFeature();
};
