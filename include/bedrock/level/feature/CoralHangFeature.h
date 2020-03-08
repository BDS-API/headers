#pragma once

#include "../../../unmapped/BlockSource"
#include "../../../unmapped/Random"


class CoralHangFeature : Feature {

public:
    virtual CoralHangFeature::~CoralHangFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    CoralHangFeature(void);
    void _canPlaceHangOn(BlockSource const&, BlockPos const&)const;
    void _randomDirection(Random &, BlockSource const&, BlockPos const&)const;
    void _turnFacingIntoint(unsigned char)const;
};
