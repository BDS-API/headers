#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class CoralHangFeature : Feature {

public:
    virtual ~CoralHangFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    CoralHangFeature();
    void _canPlaceHangOn(BlockSource const&, BlockPos const&)const;
    void _randomDirection(Random &, BlockSource const&, BlockPos const&)const;
    void _turnFacingIntoint(unsigned char)const;
};
