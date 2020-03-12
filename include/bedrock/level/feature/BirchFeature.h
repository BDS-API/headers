#pragma once

#include "TreeFeature.h"


class BirchFeature : TreeFeature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~BirchFeature();
    BirchFeature(Actor *, bool, bool);
};
