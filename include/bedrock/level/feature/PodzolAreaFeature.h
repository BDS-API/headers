#pragma once

#include "Feature.h"


class PodzolAreaFeature : Feature {

public:
    ~PodzolAreaFeature(); // _ZN17PodzolAreaFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK17PodzolAreaFeature5placeER11BlockSourceRK8BlockPosR6Random
    PodzolAreaFeature(); // _ZN17PodzolAreaFeatureC2Ev
};
