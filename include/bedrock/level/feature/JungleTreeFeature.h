#pragma once

#include "../../util/Random.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "./TreeFeature.h"


class JungleTreeFeature : TreeFeature {

public:
    virtual ~JungleTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    JungleTreeFeature(Actor *);
};
