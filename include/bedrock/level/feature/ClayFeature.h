#pragma once

#include "Feature.h"


class ClayFeature : Feature {

public:
    ~ClayFeature(); // _ZN11ClayFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK11ClayFeature5placeER11BlockSourceRK8BlockPosR6Random
    ClayFeature(int); // _ZN11ClayFeatureC2Ei
};
