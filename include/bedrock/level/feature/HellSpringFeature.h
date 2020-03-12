#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"


class HellSpringFeature : Feature {

public:
    ~HellSpringFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    HellSpringFeature(Block const&, bool);
};
