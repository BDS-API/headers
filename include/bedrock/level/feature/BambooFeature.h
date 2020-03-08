#pragma once

#include "../../../unmapped/BlockSource"


class BambooFeature : Feature {

public:
    virtual BambooFeature::~BambooFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BambooFeature(void);
};
