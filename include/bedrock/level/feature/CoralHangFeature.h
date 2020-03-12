#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class CoralHangFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~CoralHangFeature();
    void _randomDirection(Random &, BlockSource const&, BlockPos const&)const;
    void _canPlaceHangOn(BlockSource const&, BlockPos const&)const;
    void _turnFacingIntoint(unsigned char)const;
    CoralHangFeature();
};
