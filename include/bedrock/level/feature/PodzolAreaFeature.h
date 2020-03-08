#pragma once

#include "../../../unmapped/BlockSource"


class PodzolAreaFeature : Feature {

public:
    virtual PodzolAreaFeature::~PodzolAreaFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    PodzolAreaFeature(void);
};
