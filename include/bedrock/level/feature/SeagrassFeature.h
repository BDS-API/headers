#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class SeagrassFeature : Feature {

public:
    SeagrassFeature::~SeagrassFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SeagrassFeature(void);
    void _isNotIce(BlockSource &, BlockPos const&)const;
};
