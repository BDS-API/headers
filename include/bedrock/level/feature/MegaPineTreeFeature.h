#pragma once

#include "../../util/Random.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "./MegaTreeFeature.h"


class MegaPineTreeFeature : MegaTreeFeature {

public:
    virtual ~MegaPineTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MegaPineTreeFeature(Actor *, bool);
    void createCrown(BlockSource &, BlockPos const&, int, Random &)const;
    void postPlaceTree(BlockSource &, Random &, BlockPos const&)const;
    void _placePodzolCircle(BlockSource &, BlockPos const&)const;
    void _placePodzolAt(BlockSource &, BlockPos const&)const;
};
