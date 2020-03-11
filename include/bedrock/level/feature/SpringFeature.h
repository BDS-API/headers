#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Block.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class SpringFeature : Feature {

public:
    virtual ~SpringFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SpringFeature(Block const&);
};
