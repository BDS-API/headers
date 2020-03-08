#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class KelpFeature : Feature {

public:
    KelpFeature::~KelpFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    KelpFeature(void);
    void _canPlace(BlockSource &, BlockPos const&)const;
};
