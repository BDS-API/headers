#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class WaterlilyFeature : Feature {

public:
    virtual ~WaterlilyFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    WaterlilyFeature();
};
