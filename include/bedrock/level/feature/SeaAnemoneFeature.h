#pragma once

#include "Feature.h"


class SeaAnemoneFeature : Feature {

public:
    ~SeaAnemoneFeature(); // _ZN17SeaAnemoneFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK17SeaAnemoneFeature5placeER11BlockSourceRK8BlockPosR6Random
    SeaAnemoneFeature(); // _ZN17SeaAnemoneFeatureC2Ev
};
