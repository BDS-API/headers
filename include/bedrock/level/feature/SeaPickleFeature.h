#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class SeaPickleFeature : Feature {

public:
    virtual ~SeaPickleFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SeaPickleFeature();
};
