#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"


class SandFeature : Feature {

public:
    ~SandFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    SandFeature(Block const&, int);
};
