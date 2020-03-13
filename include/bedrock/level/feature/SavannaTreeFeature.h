#pragma once

#include "TreeFeature.h"


class SavannaTreeFeature : TreeFeature {

public:
    ~SavannaTreeFeature(); // _ZN18SavannaTreeFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK18SavannaTreeFeature5placeER11BlockSourceRK8BlockPosR6Random
    SavannaTreeFeature(Actor *); // _ZN18SavannaTreeFeatureC2EP5Actor
    void _placeLeafAt(BlockSource &, BlockPos const&)const; // _ZNK18SavannaTreeFeature12_placeLeafAtER11BlockSourceRK8BlockPos
};
