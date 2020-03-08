#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"


class CentralSpikedFeature : Feature {

public:
    virtual CentralSpikedFeature::~CentralSpikedFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    CentralSpikedFeature(Block const&);
};
