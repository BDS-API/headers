#pragma once

#include "Feature.h"


class CactusFeature : public Feature {

public:
    virtual ~CactusFeature(); // _ZN13CactusFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK13CactusFeature5placeER11BlockSourceRK8BlockPosR6Random
    CactusFeature(); // _ZN13CactusFeatureC2Ev
};
