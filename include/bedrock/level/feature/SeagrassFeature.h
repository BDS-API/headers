#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class SeagrassFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~SeagrassFeature();
    SeagrassFeature();
    void _isNotIce(BlockSource &, BlockPos const&)const;
};
