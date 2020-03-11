#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class EndIslandFeature : Feature {

public:
    virtual ~EndIslandFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    EndIslandFeature();
};
