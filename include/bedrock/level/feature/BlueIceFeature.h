#pragma once

#include "Feature.h"


class BlueIceFeature : Feature {

public:
    ~BlueIceFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    BlueIceFeature();
};
