#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../util/BlockPos.h"
#include "./TreeFeature.h"


class SwampTreeFeature : TreeFeature {

public:
    virtual ~SwampTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SwampTreeFeature();
    void _addVine(BlockSource &, BlockPos, int)const;
};
