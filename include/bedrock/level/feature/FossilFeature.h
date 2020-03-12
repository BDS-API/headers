#pragma once

#include "Feature.h"


class FossilFeature : Feature {

public:
    static std::string STRUCTURE_LOCATION_FOSSIL;
    static std::string STRUCTURE_LOCATION_FOSSIL_COAL;

    ~FossilFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    FossilFeature();
};
