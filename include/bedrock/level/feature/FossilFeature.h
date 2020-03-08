#pragma once

#include "../../../unmapped/BlockSource"


class FossilFeature : Feature {

public:
    static long STRUCTURE_LOCATION_FOSSIL[abi:cxx11];
    static long STRUCTURE_LOCATION_FOSSIL_COAL[abi:cxx11];

    virtual FossilFeature::~FossilFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    FossilFeature(void);
};
