#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class BlueIceFeature : Feature {

public:
    virtual BlueIceFeature::~BlueIceFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BlueIceFeature(void);
};
