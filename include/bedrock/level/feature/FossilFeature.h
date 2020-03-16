#pragma once

#include "Feature.h"


class FossilFeature : public Feature {

public:
    static std::string STRUCTURE_LOCATION_FOSSIL;
    static std::string STRUCTURE_LOCATION_FOSSIL_COAL;

    virtual ~FossilFeature(); // _ZN13FossilFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK13FossilFeature5placeER11BlockSourceRK8BlockPosR6Random
    FossilFeature(); // _ZN13FossilFeatureC2Ev
};
