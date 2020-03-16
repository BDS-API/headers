#pragma once

#include "Feature.h"


class HellSpringFeature : public Feature {

public:
    virtual ~HellSpringFeature(); // _ZN17HellSpringFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK17HellSpringFeature5placeER11BlockSourceRK8BlockPosR6Random
    HellSpringFeature(Block const&, bool); // _ZN17HellSpringFeatureC2ERK5Blockb
};
