#pragma once

#include "../../../unmapped/BlockSource"


class GroundBushFeature : TreeFeature {

public:
    virtual GroundBushFeature::~GroundBushFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    GroundBushFeature(int, int);
};
