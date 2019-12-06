#pragma once

class SeaPickleFeature : Feature {

public:
    virtual ~SeaPickleFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void SeaPickleFeature(void);
};
