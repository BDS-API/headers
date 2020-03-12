#pragma once

#include "TreeFeature.h"
#include "../../util/BlockPos.h"


class SwampTreeFeature : TreeFeature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~SwampTreeFeature();
    void _addVine(BlockSource &, BlockPos, int)const;
    SwampTreeFeature();
};
