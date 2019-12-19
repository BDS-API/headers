#pragma once

class EndIslandFeature : Feature {

public:
    virtual EndIslandFeature::~EndIslandFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    EndIslandFeature(void);
};
