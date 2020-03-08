#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class LegacyEmeraldOreFeature : Feature {

public:
    LegacyEmeraldOreFeature::~LegacyEmeraldOreFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyEmeraldOreFeature(void);
};
