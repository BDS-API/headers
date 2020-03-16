#pragma once

#include "Feature.h"


class VinesFeature : public Feature {

public:
    virtual ~VinesFeature(); // _ZN12VinesFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK12VinesFeature5placeER11BlockSourceRK8BlockPosR6Random
    VinesFeature(); // _ZN12VinesFeatureC2Ev
};
