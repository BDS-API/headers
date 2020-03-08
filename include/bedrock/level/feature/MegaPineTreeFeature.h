#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../util/BlockPos"


class MegaPineTreeFeature : MegaTreeFeature {

public:
    virtual MegaPineTreeFeature::~MegaPineTreeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MegaPineTreeFeature(Actor *, bool);
    void createCrown(BlockSource &, BlockPos const&, int, Random &)const;
    void postPlaceTree(BlockSource &, Random &, BlockPos const&)const;
    void _placePodzolCircle(BlockSource &, BlockPos const&)const;
    void _placePodzolAt(BlockSource &, BlockPos const&)const;
};
