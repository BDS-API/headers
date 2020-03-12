#pragma once

#include "TreeFeature.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"


class JungleTreeFeature : TreeFeature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~JungleTreeFeature();
    JungleTreeFeature(Actor *);
};
