#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class SeagrassFeature : Feature {

public:
    virtual SeagrassFeature::~SeagrassFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SeagrassFeature(void);
    void _isNotIce(BlockSource &, BlockPos const&)const;
};
