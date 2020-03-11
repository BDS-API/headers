#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class ReedsFeature : Feature {

public:
    virtual ~ReedsFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    ReedsFeature();
};
