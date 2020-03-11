#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../util/BlockPos.h"
#include "./TreeFeature.h"


class GroundBushFeature : TreeFeature {

public:
    virtual ~GroundBushFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    GroundBushFeature(int, int);
};
