#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class HellFireFeature : Feature {

public:
    HellFireFeature::~HellFireFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    HellFireFeature(void);
};
