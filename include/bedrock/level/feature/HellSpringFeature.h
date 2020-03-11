#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Block.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class HellSpringFeature : Feature {

public:
    virtual ~HellSpringFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    HellSpringFeature(Block const&, bool);
};
