#pragma once

class FossilFeature : Feature {

public:
    static long FossilFeature::STRUCTURE_LOCATION_FOSSIL[abi:cxx11];
    static long FossilFeature::STRUCTURE_LOCATION_FOSSIL_COAL[abi:cxx11];

    virtual ~FossilFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void FossilFeature(void);
};
