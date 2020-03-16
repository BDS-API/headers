#pragma once

#include "TreeFeature.h"


class JungleTreeFeature : public TreeFeature {

public:
    virtual ~JungleTreeFeature(); // _ZN17JungleTreeFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK17JungleTreeFeature5placeER11BlockSourceRK8BlockPosR6Random
    JungleTreeFeature(Actor *); // _ZN17JungleTreeFeatureC2EP5Actor
};
