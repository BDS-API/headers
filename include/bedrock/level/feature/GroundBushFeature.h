#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "TreeFeature.h"
#include "../../util/Random.h"


class GroundBushFeature : TreeFeature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~GroundBushFeature();
    GroundBushFeature(int, int);
};
