#pragma once

#include "Feature.h"


class FossilFeature : Feature {

public:
    static std::string STRUCTURE_LOCATION_FOSSIL;
    static std::string STRUCTURE_LOCATION_FOSSIL_COAL;

    ~FossilFeature(); // _ZN13FossilFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK13FossilFeature5placeER11BlockSourceRK8BlockPosR6Random
    FossilFeature(); // _ZN13FossilFeatureC2Ev
};
