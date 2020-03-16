#pragma once

#include "Feature.h"


class BlueIceFeature : public Feature {

public:
    virtual ~BlueIceFeature(); // _ZN14BlueIceFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK14BlueIceFeature5placeER11BlockSourceRK8BlockPosR6Random
    BlueIceFeature(); // _ZN14BlueIceFeatureC2Ev
};
