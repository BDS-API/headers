#pragma once

#include "Feature.h"


class CoralHangFeature : Feature {

public:
    ~CoralHangFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void _turnFacingIntoint(unsigned char)const;
    void _canPlaceHangOn(BlockSource const&, BlockPos const&)const;
    CoralHangFeature();
    void _randomDirection(Random &, BlockSource const&, BlockPos const&)const;
};
