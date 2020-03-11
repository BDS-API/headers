#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class DesertWellFeature : Feature {

public:
    virtual ~DesertWellFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    DesertWellFeature();
};
