#pragma once

#include "TreeFeature.h"


class SavannaTreeFeature : TreeFeature {

public:
    ~SavannaTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void _placeLeafAt(BlockSource &, BlockPos const&)const;
    SavannaTreeFeature(Actor *);
};
