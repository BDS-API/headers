#pragma once

#include "../../util/Random.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "./TreeFeature.h"


class PineFeature : TreeFeature {

public:
    virtual ~PineFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    PineFeature(Actor *);
};
