#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class EndIslandFeature : Feature {

public:
    EndIslandFeature::~EndIslandFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    EndIslandFeature(void);
};
