#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class LegacyEmeraldOreFeature : Feature {

public:
    virtual LegacyEmeraldOreFeature::~LegacyEmeraldOreFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyEmeraldOreFeature(void);
};
