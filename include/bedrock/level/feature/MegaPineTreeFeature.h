#pragma once

#include "MegaTreeFeature.h"


class MegaPineTreeFeature : MegaTreeFeature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~MegaPineTreeFeature();
    void postPlaceTree(BlockSource &, Random &, BlockPos const&)const;
    void _placePodzolCircle(BlockSource &, BlockPos const&)const;
    void createCrown(BlockSource &, BlockPos const&, int, Random &)const;
    void _placePodzolAt(BlockSource &, BlockPos const&)const;
    MegaPineTreeFeature(Actor *, bool);
};
