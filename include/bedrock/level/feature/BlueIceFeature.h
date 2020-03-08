#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class BlueIceFeature : Feature {

public:
    BlueIceFeature::~BlueIceFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BlueIceFeature(void);
};
