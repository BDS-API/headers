#pragma once

#include "../../../unmapped/BlockSource"
#include "../../../unmapped/Block"


class SpringFeature : Feature {

public:
    virtual SpringFeature::~SpringFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SpringFeature(Block const&);
};
