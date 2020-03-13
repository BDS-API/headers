#pragma once

#include "MegaTreeFeature.h"


class MegaPineTreeFeature : MegaTreeFeature {

public:
    ~MegaPineTreeFeature(); // _ZN19MegaPineTreeFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK19MegaPineTreeFeature5placeER11BlockSourceRK8BlockPosR6Random
    MegaPineTreeFeature(Actor *, bool); // _ZN19MegaPineTreeFeatureC2EP5Actorb
    void createCrown(BlockSource &, BlockPos const&, int, Random &)const; // _ZNK19MegaPineTreeFeature11createCrownER11BlockSourceRK8BlockPosiR6Random
    void postPlaceTree(BlockSource &, Random &, BlockPos const&)const; // _ZNK19MegaPineTreeFeature13postPlaceTreeER11BlockSourceR6RandomRK8BlockPos
    void _placePodzolCircle(BlockSource &, BlockPos const&)const; // _ZNK19MegaPineTreeFeature18_placePodzolCircleER11BlockSourceRK8BlockPos
    void _placePodzolAt(BlockSource &, BlockPos const&)const; // _ZNK19MegaPineTreeFeature14_placePodzolAtER11BlockSourceRK8BlockPos
};
