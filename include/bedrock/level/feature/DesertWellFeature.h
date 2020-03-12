#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class DesertWellFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~DesertWellFeature();
    DesertWellFeature();
};
