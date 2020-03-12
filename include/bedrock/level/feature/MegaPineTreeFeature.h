#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "MegaTreeFeature.h"


class MegaPineTreeFeature : MegaTreeFeature {

public:
    ~MegaPineTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    MegaPineTreeFeature(Actor *, bool);
    void postPlaceTree(BlockSource &, Random &, BlockPos const&)const;
    void createCrown(BlockSource &, BlockPos const&, int, Random &)const;
    void _placePodzolAt(BlockSource &, BlockPos const&)const;
    void _placePodzolCircle(BlockSource &, BlockPos const&)const;
};
