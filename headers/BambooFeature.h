#pragma once

class BambooFeature : Feature {

public:
    virtual ~BambooFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void BambooFeature(void);
};
