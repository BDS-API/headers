#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class SeaPickleFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~SeaPickleFeature();
    SeaPickleFeature();
};
