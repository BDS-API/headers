#pragma once

class GlowStoneFeature : Feature {

public:
    virtual ~GlowStoneFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void GlowStoneFeature(void);
};
