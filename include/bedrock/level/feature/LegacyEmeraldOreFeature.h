#pragma once

class LegacyEmeraldOreFeature : Feature {

public:
    virtual LegacyEmeraldOreFeature::~LegacyEmeraldOreFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyEmeraldOreFeature(void);
};