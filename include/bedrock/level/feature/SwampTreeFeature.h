#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class SwampTreeFeature : TreeFeature {

public:
    SwampTreeFeature::~SwampTreeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SwampTreeFeature(void);
    void _addVine(BlockSource &, BlockPos, int)const;
};
