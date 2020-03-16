#pragma once

#include "../../util/BlockPos.h"
#include "TreeFeature.h"


class SwampTreeFeature : public TreeFeature {

public:
    virtual ~SwampTreeFeature(); // _ZN16SwampTreeFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16SwampTreeFeature5placeER11BlockSourceRK8BlockPosR6Random
    SwampTreeFeature(); // _ZN16SwampTreeFeatureC2Ev
    void _addVine(BlockSource &, BlockPos, int)const; // _ZNK16SwampTreeFeature8_addVineER11BlockSource8BlockPosi
};
