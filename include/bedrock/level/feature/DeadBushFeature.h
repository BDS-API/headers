#pragma once

#include "../../../unmapped/Material"
#include "../../../unmapped/BlockSource"


class DeadBushFeature : Feature {

public:
    virtual DeadBushFeature::~DeadBushFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    DeadBushFeature(void);
    void _isFree(Material const&)const;
};
