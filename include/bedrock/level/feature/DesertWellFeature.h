#pragma once

#include "Feature.h"


class DesertWellFeature : public Feature {

public:
    virtual ~DesertWellFeature(); // _ZN17DesertWellFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK17DesertWellFeature5placeER11BlockSourceRK8BlockPosR6Random
    DesertWellFeature(); // _ZN17DesertWellFeatureC2Ev
};
