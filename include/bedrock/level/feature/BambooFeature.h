#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class BambooFeature : Feature {

public:
    virtual ~BambooFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BambooFeature();
};
