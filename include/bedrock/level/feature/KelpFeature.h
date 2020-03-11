#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class KelpFeature : Feature {

public:
    virtual ~KelpFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    KelpFeature();
    void _canPlace(BlockSource &, BlockPos const&)const;
};
