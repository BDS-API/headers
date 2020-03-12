#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "TreeFeature.h"
#include "../../util/Random.h"


class SwampTreeFeature : TreeFeature {

public:
    ~SwampTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void _addVine(BlockSource &, BlockPos, int)const;
    SwampTreeFeature();
};
