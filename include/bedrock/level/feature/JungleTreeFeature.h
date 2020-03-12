#pragma once

#include "TreeFeature.h"


class JungleTreeFeature : TreeFeature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~JungleTreeFeature();
    JungleTreeFeature(Actor *);
};
