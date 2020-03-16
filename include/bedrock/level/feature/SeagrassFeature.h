#pragma once

#include "Feature.h"


class SeagrassFeature : public Feature {

public:
    virtual ~SeagrassFeature(); // _ZN15SeagrassFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK15SeagrassFeature5placeER11BlockSourceRK8BlockPosR6Random
    SeagrassFeature(); // _ZN15SeagrassFeatureC2Ev
    void _isNotIce(BlockSource &, BlockPos const&)const; // _ZNK15SeagrassFeature9_isNotIceER11BlockSourceRK8BlockPos
};
