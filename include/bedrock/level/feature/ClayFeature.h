#pragma once

#include "../../../unmapped/BlockSource"


class ClayFeature : Feature {

public:
    virtual ClayFeature::~ClayFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    ClayFeature(int);
};
