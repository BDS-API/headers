#pragma once

#include "../../util/Random.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "./TreeFeature.h"


class SavannaTreeFeature : TreeFeature {

public:
    virtual ~SavannaTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SavannaTreeFeature(Actor *);
    void _placeLeafAt(BlockSource &, BlockPos const&)const;
};
