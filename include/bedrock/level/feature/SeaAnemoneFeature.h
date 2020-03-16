#pragma once

#include "Feature.h"


class SeaAnemoneFeature : public Feature {

public:
    virtual ~SeaAnemoneFeature(); // _ZN17SeaAnemoneFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK17SeaAnemoneFeature5placeER11BlockSourceRK8BlockPosR6Random
    SeaAnemoneFeature(); // _ZN17SeaAnemoneFeatureC2Ev
};
