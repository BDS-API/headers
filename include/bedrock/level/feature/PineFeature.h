#pragma once

#include "TreeFeature.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"


class PineFeature : TreeFeature {

public:
    ~PineFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    PineFeature(Actor *);
};
