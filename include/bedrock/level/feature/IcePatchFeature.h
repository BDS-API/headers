#pragma once

#include "../../../unmapped/BlockSource"


class IcePatchFeature : Feature {

public:
    virtual IcePatchFeature::~IcePatchFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    IcePatchFeature(int);
};
