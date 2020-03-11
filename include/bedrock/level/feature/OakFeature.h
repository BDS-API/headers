#pragma once

#include "../../util/Random.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "./TreeFeature.h"


class OakFeature : TreeFeature {

public:
    virtual ~OakFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    OakFeature(Actor *, bool);
};
