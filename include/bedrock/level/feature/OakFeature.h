#pragma once

#include "TreeFeature.h"


class OakFeature : TreeFeature {

public:
    ~OakFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    OakFeature(Actor *, bool);
};
