#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"


class SpringFeature : Feature {

public:
    ~SpringFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    SpringFeature(Block const&);
};
