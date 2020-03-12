#pragma once

#include "Feature.h"


class LegacyEmeraldOreFeature : Feature {

public:
    ~LegacyEmeraldOreFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    LegacyEmeraldOreFeature();
};
