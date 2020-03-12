#pragma once

#include "Feature.h"


class HellFireFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~HellFireFeature();
    HellFireFeature();
};
