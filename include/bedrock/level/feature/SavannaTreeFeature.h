#pragma once

#include "TreeFeature.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"


class SavannaTreeFeature : TreeFeature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~SavannaTreeFeature();
    void _placeLeafAt(BlockSource &, BlockPos const&)const;
    SavannaTreeFeature(Actor *);
};
