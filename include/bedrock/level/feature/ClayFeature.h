#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class ClayFeature : Feature {

public:
    ~ClayFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ClayFeature(int);
};
