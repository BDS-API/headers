#pragma once

#include "../../../unmapped/BlockSource"


class DesertWellFeature : Feature {

public:
    virtual DesertWellFeature::~DesertWellFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    DesertWellFeature(void);
};
