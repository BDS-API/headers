#pragma once

#include "Feature.h"


class HellFireFeature : public Feature {

public:
    virtual ~HellFireFeature(); // _ZN15HellFireFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK15HellFireFeature5placeER11BlockSourceRK8BlockPosR6Random
    HellFireFeature(); // _ZN15HellFireFeatureC2Ev
};
