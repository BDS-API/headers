#pragma once

#include "Feature.h"


class BlueIceFeature : Feature {

public:
    ~BlueIceFeature(); // _ZN14BlueIceFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK14BlueIceFeature5placeER11BlockSourceRK8BlockPosR6Random
    BlueIceFeature(); // _ZN14BlueIceFeatureC2Ev
};
