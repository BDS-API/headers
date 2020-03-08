#pragma once

#include "../../../unmapped/BlockSource"


class SeaPickleFeature : Feature {

public:
    virtual SeaPickleFeature::~SeaPickleFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SeaPickleFeature(void);
};
