#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Block.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class SandFeature : Feature {

public:
    virtual ~SandFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SandFeature(Block const&, int);
};
