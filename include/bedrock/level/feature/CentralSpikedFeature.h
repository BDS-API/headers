#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"


class CentralSpikedFeature : Feature {

public:
    CentralSpikedFeature::~CentralSpikedFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    CentralSpikedFeature(Block const&);
};
