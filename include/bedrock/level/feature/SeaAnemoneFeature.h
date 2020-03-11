#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class SeaAnemoneFeature : Feature {

public:
    virtual ~SeaAnemoneFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SeaAnemoneFeature();
};
