#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class SeagrassFeature : Feature {

public:
    virtual ~SeagrassFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SeagrassFeature();
    void _isNotIce(BlockSource &, BlockPos const&)const;
};
