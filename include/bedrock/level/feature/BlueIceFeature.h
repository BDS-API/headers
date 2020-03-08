#pragma once

#include "../../../unmapped/BlockSource"


class BlueIceFeature : Feature {

public:
    virtual BlueIceFeature::~BlueIceFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BlueIceFeature(void);
};
