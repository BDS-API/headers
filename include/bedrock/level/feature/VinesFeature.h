#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class VinesFeature : Feature {

public:
    ~VinesFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    VinesFeature();
};
