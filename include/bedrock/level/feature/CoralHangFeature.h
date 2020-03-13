#pragma once

#include "Feature.h"


class CoralHangFeature : Feature {

public:
    ~CoralHangFeature(); // _ZN16CoralHangFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16CoralHangFeature5placeER11BlockSourceRK8BlockPosR6Random
    CoralHangFeature(); // _ZN16CoralHangFeatureC2Ev
    void _canPlaceHangOn(BlockSource const&, BlockPos const&)const; // _ZNK16CoralHangFeature15_canPlaceHangOnERK11BlockSourceRK8BlockPos
    void _randomDirection(Random &, BlockSource const&, BlockPos const&)const; // _ZNK16CoralHangFeature16_randomDirectionER6RandomRK11BlockSourceRK8BlockPos
    void _turnFacingIntoint(unsigned char)const; // _ZNK16CoralHangFeature18_turnFacingIntointEh
};
