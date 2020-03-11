#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Block.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class CentralSpikedFeature : Feature {

public:
    virtual ~CentralSpikedFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    CentralSpikedFeature(Block const&);
};
