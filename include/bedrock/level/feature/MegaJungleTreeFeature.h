#pragma once

#include "MegaTreeFeature.h"


class MegaJungleTreeFeature : MegaTreeFeature {

public:
    ~MegaJungleTreeFeature(); // _ZN21MegaJungleTreeFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK21MegaJungleTreeFeature5placeER11BlockSourceRK8BlockPosR6Random
    MegaJungleTreeFeature(Actor *, int, int, int, int); // _ZN21MegaJungleTreeFeatureC2EP5Actoriiii
    void _createCrown(BlockSource &, BlockPos const&, int)const; // _ZNK21MegaJungleTreeFeature12_createCrownER11BlockSourceRK8BlockPosi
    void _placeVines(BlockSource &, BlockPos const&, Random &, int, int, int)const; // _ZNK21MegaJungleTreeFeature11_placeVinesER11BlockSourceRK8BlockPosR6Randomiii
    void _placeVine(BlockSource &, BlockPos const&, Random &, int)const; // _ZNK21MegaJungleTreeFeature10_placeVineER11BlockSourceRK8BlockPosR6Randomi
};
