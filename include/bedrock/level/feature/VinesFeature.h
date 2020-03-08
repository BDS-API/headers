#pragma once

#include "../../../unmapped/BlockSource"


class VinesFeature : Feature {

public:
    virtual VinesFeature::~VinesFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    VinesFeature(void);
};
