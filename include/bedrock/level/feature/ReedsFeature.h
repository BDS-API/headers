#pragma once

class ReedsFeature : Feature {

public:
    virtual ReedsFeature::~ReedsFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    ReedsFeature(void);
};