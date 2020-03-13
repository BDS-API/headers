#pragma once

#include "Feature.h"


class HellFireFeature : Feature {

public:
    ~HellFireFeature(); // _ZN15HellFireFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK15HellFireFeature5placeER11BlockSourceRK8BlockPosR6Random
    HellFireFeature(); // _ZN15HellFireFeatureC2Ev
};
