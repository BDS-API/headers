#pragma once

#include "../../util/Random.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "./TreeFeature.h"


class BirchFeature : TreeFeature {

public:
    virtual ~BirchFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BirchFeature(Actor *, bool, bool);
};
