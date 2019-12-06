#pragma once

class ReedsFeature : Feature {

public:
    virtual ~ReedsFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void ReedsFeature(void);
};
