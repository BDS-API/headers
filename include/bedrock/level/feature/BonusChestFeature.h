#pragma once

#include "Feature.h"


class BonusChestFeature : Feature {

public:
    ~BonusChestFeature(); // _ZN17BonusChestFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK17BonusChestFeature5placeER11BlockSourceRK8BlockPosR6Random
    BonusChestFeature(); // _ZN17BonusChestFeatureC2Ev
    void _place(BlockSource &, BlockPos const&, Random &)const; // _ZNK17BonusChestFeature6_placeER11BlockSourceRK8BlockPosR6Random
    void _getFacingDataId(BlockSource &, BlockPos const&, int, int)const; // _ZNK17BonusChestFeature16_getFacingDataIdER11BlockSourceRK8BlockPosii
};
