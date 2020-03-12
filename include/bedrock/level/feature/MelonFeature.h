#pragma once

#include "Feature.h"


class MelonFeature : Feature {

public:
    ~MelonFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    MelonFeature();
};
