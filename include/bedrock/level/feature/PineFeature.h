#pragma once

#include "TreeFeature.h"


class PineFeature : TreeFeature {

public:
    ~PineFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    PineFeature(Actor *);
};
