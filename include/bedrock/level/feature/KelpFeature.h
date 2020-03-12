#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class KelpFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~KelpFeature();
    void _canPlace(BlockSource &, BlockPos const&)const;
    KelpFeature();
};
