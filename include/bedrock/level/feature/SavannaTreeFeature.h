#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../util/BlockPos"


class SavannaTreeFeature : TreeFeature {

public:
    virtual SavannaTreeFeature::~SavannaTreeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SavannaTreeFeature(Actor *);
    void _placeLeafAt(BlockSource &, BlockPos const&)const;
};
