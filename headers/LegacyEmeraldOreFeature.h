#pragma once

class LegacyEmeraldOreFeature : Feature {

public:
    virtual ~LegacyEmeraldOreFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void LegacyEmeraldOreFeature(void);
};
