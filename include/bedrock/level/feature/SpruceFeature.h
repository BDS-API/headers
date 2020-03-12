#pragma once

#include "TreeFeature.h"


class SpruceFeature : TreeFeature {

public:
    ~SpruceFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    SpruceFeature(Actor *);
};
