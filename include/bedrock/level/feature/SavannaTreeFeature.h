#pragma once

#include "../../actor/Actor"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class SavannaTreeFeature : TreeFeature {

public:
    SavannaTreeFeature::~SavannaTreeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SavannaTreeFeature(Actor *);
    void _placeLeafAt(BlockSource &, BlockPos const&)const;
};
