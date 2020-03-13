#pragma once

#include "TreeFeature.h"


class RoofTreeFeature : TreeFeature {

public:
    ~RoofTreeFeature(); // _ZN15RoofTreeFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK15RoofTreeFeature5placeER11BlockSourceRK8BlockPosR6Random
    RoofTreeFeature(Actor *); // _ZN15RoofTreeFeatureC2EP5Actor
    void _placeVines(BlockSource &, BlockPos const&, Random &, bool, int, int)const; // _ZNK15RoofTreeFeature11_placeVinesER11BlockSourceRK8BlockPosR6Randombii
    void _placeLeafs(BlockSource &, BlockPos const&, BlockPos const&, Random &)const; // _ZNK15RoofTreeFeature11_placeLeafsER11BlockSourceRK8BlockPosS4_R6Random
    void _placeVine(BlockSource &, BlockPos const&, Random &, int)const; // _ZNK15RoofTreeFeature10_placeVineER11BlockSourceRK8BlockPosR6Randomi
    void _placeLeafAt(BlockSource &, BlockPos const&)const; // _ZNK15RoofTreeFeature12_placeLeafAtER11BlockSourceRK8BlockPos
};
