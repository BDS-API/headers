#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class HellFireFeature : Feature {

public:
    virtual HellFireFeature::~HellFireFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    HellFireFeature(void);
};
