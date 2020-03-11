#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class LegacyEmeraldOreFeature : Feature {

public:
    virtual ~LegacyEmeraldOreFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyEmeraldOreFeature();
};
