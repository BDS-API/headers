#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class HellFireFeature : Feature {

public:
    virtual ~HellFireFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    HellFireFeature();
};
