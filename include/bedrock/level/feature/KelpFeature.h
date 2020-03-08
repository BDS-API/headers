#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class KelpFeature : Feature {

public:
    virtual KelpFeature::~KelpFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    KelpFeature(void);
    void _canPlace(BlockSource &, BlockPos const&)const;
};
