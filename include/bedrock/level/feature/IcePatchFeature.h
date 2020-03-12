#pragma once

#include "Feature.h"


class IcePatchFeature : Feature {

public:
    ~IcePatchFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    IcePatchFeature(int);
};
