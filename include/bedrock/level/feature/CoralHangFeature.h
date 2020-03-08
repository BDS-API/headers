#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class CoralHangFeature : Feature {

public:
    CoralHangFeature::~CoralHangFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    CoralHangFeature(void);
    void _canPlaceHangOn(BlockSource const&, BlockPos const&)const;
    void _randomDirection(Random &, BlockSource const&, BlockPos const&)const;
    void _turnFacingIntoint(unsigned char)const;
};
