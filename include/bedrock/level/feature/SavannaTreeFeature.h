#pragma once

#include "../../../unmapped/BlockSource"
#include "../../actor/Actor"


class SavannaTreeFeature : TreeFeature {

public:
    virtual SavannaTreeFeature::~SavannaTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SavannaTreeFeature(Actor *);
    void _placeLeafAt(BlockSource &, BlockPos const&)const;
};
