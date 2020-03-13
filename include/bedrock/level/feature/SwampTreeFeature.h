#pragma once

#include "TreeFeature.h"
#include "../../util/BlockPos.h"


class SwampTreeFeature : TreeFeature {

public:
    ~SwampTreeFeature(); // _ZN16SwampTreeFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16SwampTreeFeature5placeER11BlockSourceRK8BlockPosR6Random
    SwampTreeFeature(); // _ZN16SwampTreeFeatureC2Ev
    void _addVine(BlockSource &, BlockPos, int)const; // _ZNK16SwampTreeFeature8_addVineER11BlockSource8BlockPosi
};
