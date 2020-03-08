#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class EndIslandFeature : Feature {

public:
    virtual EndIslandFeature::~EndIslandFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    EndIslandFeature(void);
};
