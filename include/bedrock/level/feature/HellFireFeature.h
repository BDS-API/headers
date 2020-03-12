#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class HellFireFeature : Feature {

public:
    ~HellFireFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    HellFireFeature();
};
