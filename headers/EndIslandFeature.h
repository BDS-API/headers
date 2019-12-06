#pragma once

class EndIslandFeature : Feature {

public:
    virtual ~EndIslandFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void EndIslandFeature(void);
};
